//  Copyright (c) 2007-2012 Hartmut Kaiser
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(HPX_LCOS_FUTURE_MAR_06_2012_1059AM)
#define HPX_LCOS_FUTURE_MAR_06_2012_1059AM

#include <hpx/hpx_fwd.hpp>
#include <hpx/util/future_data.hpp>

#include <boost/move/move.hpp>
#include <boost/intrusive_ptr.hpp>

namespace hpx { namespace lcos
{
    ///////////////////////////////////////////////////////////////////////////
    namespace local
    {
        template <typename Result>
        class packaged_task;
    }

    ///////////////////////////////////////////////////////////////////////////
    template <typename Result, typename RemoteResult>
    class future
    {
    private:
        BOOST_COPYABLE_AND_MOVABLE(future)

        future(util::future_data<Result, RemoteResult>* p)
          : future_data_(p)
        {}

        future(boost::intrusive_ptr<util::future_data<Result, RemoteResult> > p)
          : future_data_(p)
        {}

        friend class local::packaged_task<Result>;
        friend class promise<Result, RemoteResult>;

    public:
        future()
        {}

        ~future()
        {}

        future(future const& other)
          : future_data_(other.future_data_)
        {
        }

        future(BOOST_RV_REF(future) other)
          : future_data_(other.future_data_)
        {
            other.future_data_.reset();
        }

        future& operator=(BOOST_COPY_ASSIGN_REF(future) other)
        {
            future_data_ = other.future_data_;
            return *this;
        }

        future& operator=(BOOST_RV_REF(future) other)
        {
            future_data_ = other.future_data_;
            other.future_data_.reset();
            return *this;
        }

        void swap(future& other)
        {
            future_data_.swap(other.future_data_);
        }

        // retrieving the value
        Result get(error_code& ec = throws) const
        {
            return future_data_->get_data(ec);
        }

        Result move(error_code& ec = throws)
        {
            return future_data_->move_data(ec);
        }

        bool is_ready() const
        {
            return future_data_->is_ready();
        }

    private:
        boost::intrusive_ptr<util::future_data<Result, RemoteResult> > future_data_;
    };

    ///////////////////////////////////////////////////////////////////////////
    template <>
    class future<void, util::unused_type>
    {
    private:
        BOOST_COPYABLE_AND_MOVABLE(future)

        future(util::future_data<void, util::unused_type>* p)
          : future_data_(p)
        {}

        future(boost::intrusive_ptr<util::future_data<void, util::unused_type> > p)
          : future_data_(p)
        {}

        friend class local::packaged_task<void>;
        friend class promise<void, util::unused_type>;

    public:
        future()
        {}

        ~future()
        {}

        future(future const& other)
          : future_data_(other.future_data_)
        {
        }

        future(BOOST_RV_REF(future) other)
          : future_data_(other.future_data_)
        {
            other.future_data_.reset();
        }

        future& operator=(BOOST_COPY_ASSIGN_REF(future) other)
        {
            future_data_ = other.future_data_;
            return *this;
        }

        future& operator=(BOOST_RV_REF(future) other)
        {
            future_data_ = other.future_data_;
            other.future_data_.reset();
            return *this;
        }

        void swap(future& other)
        {
            future_data_.swap(other.future_data_);
        }

        // retrieving the value
        void get(error_code& ec = throws) const
        {
            future_data_->get_data(ec);
        }

        void move(error_code& ec = throws)
        {
            future_data_->move_data(ec);
        }

        bool is_ready() const
        {
            return future_data_->is_ready();
        }

    private:
        boost::intrusive_ptr<util::future_data<void, util::unused_type> > future_data_;
    };
}}

#endif
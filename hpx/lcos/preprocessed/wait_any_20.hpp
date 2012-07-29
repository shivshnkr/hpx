// Copyright (c) 2007-2012 Hartmut Kaiser
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

// This file has been automatically generated using the Boost.Wave tool.
// Do not edit manually.


namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
    wait_any (lcos::future<T, RT> f0)
    {
        typedef HPX_STD_TUPLE<int, lcos::future<T, RT> > return_type;
        typedef boost::fusion::tuple<
            lcos::future<T, RT>
        > argument_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_any_tuple<argument_type, T, RT>(
                argument_type(f0)));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
    wait_any (lcos::future<T, RT> f0 , lcos::future<T, RT> f1)
    {
        typedef HPX_STD_TUPLE<int, lcos::future<T, RT> > return_type;
        typedef boost::fusion::tuple<
            lcos::future<T, RT> , lcos::future<T, RT>
        > argument_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_any_tuple<argument_type, T, RT>(
                argument_type(f0 , f1)));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
    wait_any (lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2)
    {
        typedef HPX_STD_TUPLE<int, lcos::future<T, RT> > return_type;
        typedef boost::fusion::tuple<
            lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT>
        > argument_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_any_tuple<argument_type, T, RT>(
                argument_type(f0 , f1 , f2)));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
    wait_any (lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3)
    {
        typedef HPX_STD_TUPLE<int, lcos::future<T, RT> > return_type;
        typedef boost::fusion::tuple<
            lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT>
        > argument_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_any_tuple<argument_type, T, RT>(
                argument_type(f0 , f1 , f2 , f3)));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
    wait_any (lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4)
    {
        typedef HPX_STD_TUPLE<int, lcos::future<T, RT> > return_type;
        typedef boost::fusion::tuple<
            lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT>
        > argument_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_any_tuple<argument_type, T, RT>(
                argument_type(f0 , f1 , f2 , f3 , f4)));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
    wait_any (lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5)
    {
        typedef HPX_STD_TUPLE<int, lcos::future<T, RT> > return_type;
        typedef boost::fusion::tuple<
            lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT>
        > argument_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_any_tuple<argument_type, T, RT>(
                argument_type(f0 , f1 , f2 , f3 , f4 , f5)));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
    wait_any (lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5 , lcos::future<T, RT> f6)
    {
        typedef HPX_STD_TUPLE<int, lcos::future<T, RT> > return_type;
        typedef boost::fusion::tuple<
            lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT>
        > argument_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_any_tuple<argument_type, T, RT>(
                argument_type(f0 , f1 , f2 , f3 , f4 , f5 , f6)));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
    wait_any (lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5 , lcos::future<T, RT> f6 , lcos::future<T, RT> f7)
    {
        typedef HPX_STD_TUPLE<int, lcos::future<T, RT> > return_type;
        typedef boost::fusion::tuple<
            lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT>
        > argument_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_any_tuple<argument_type, T, RT>(
                argument_type(f0 , f1 , f2 , f3 , f4 , f5 , f6 , f7)));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
    wait_any (lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5 , lcos::future<T, RT> f6 , lcos::future<T, RT> f7 , lcos::future<T, RT> f8)
    {
        typedef HPX_STD_TUPLE<int, lcos::future<T, RT> > return_type;
        typedef boost::fusion::tuple<
            lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT>
        > argument_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_any_tuple<argument_type, T, RT>(
                argument_type(f0 , f1 , f2 , f3 , f4 , f5 , f6 , f7 , f8)));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
    wait_any (lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5 , lcos::future<T, RT> f6 , lcos::future<T, RT> f7 , lcos::future<T, RT> f8 , lcos::future<T, RT> f9)
    {
        typedef HPX_STD_TUPLE<int, lcos::future<T, RT> > return_type;
        typedef boost::fusion::tuple<
            lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT>
        > argument_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_any_tuple<argument_type, T, RT>(
                argument_type(f0 , f1 , f2 , f3 , f4 , f5 , f6 , f7 , f8 , f9)));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
    wait_any (lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5 , lcos::future<T, RT> f6 , lcos::future<T, RT> f7 , lcos::future<T, RT> f8 , lcos::future<T, RT> f9 , lcos::future<T, RT> f10)
    {
        typedef HPX_STD_TUPLE<int, lcos::future<T, RT> > return_type;
        typedef boost::fusion::tuple<
            lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT>
        > argument_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_any_tuple<argument_type, T, RT>(
                argument_type(f0 , f1 , f2 , f3 , f4 , f5 , f6 , f7 , f8 , f9 , f10)));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
    wait_any (lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5 , lcos::future<T, RT> f6 , lcos::future<T, RT> f7 , lcos::future<T, RT> f8 , lcos::future<T, RT> f9 , lcos::future<T, RT> f10 , lcos::future<T, RT> f11)
    {
        typedef HPX_STD_TUPLE<int, lcos::future<T, RT> > return_type;
        typedef boost::fusion::tuple<
            lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT>
        > argument_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_any_tuple<argument_type, T, RT>(
                argument_type(f0 , f1 , f2 , f3 , f4 , f5 , f6 , f7 , f8 , f9 , f10 , f11)));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
    wait_any (lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5 , lcos::future<T, RT> f6 , lcos::future<T, RT> f7 , lcos::future<T, RT> f8 , lcos::future<T, RT> f9 , lcos::future<T, RT> f10 , lcos::future<T, RT> f11 , lcos::future<T, RT> f12)
    {
        typedef HPX_STD_TUPLE<int, lcos::future<T, RT> > return_type;
        typedef boost::fusion::tuple<
            lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT>
        > argument_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_any_tuple<argument_type, T, RT>(
                argument_type(f0 , f1 , f2 , f3 , f4 , f5 , f6 , f7 , f8 , f9 , f10 , f11 , f12)));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
    wait_any (lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5 , lcos::future<T, RT> f6 , lcos::future<T, RT> f7 , lcos::future<T, RT> f8 , lcos::future<T, RT> f9 , lcos::future<T, RT> f10 , lcos::future<T, RT> f11 , lcos::future<T, RT> f12 , lcos::future<T, RT> f13)
    {
        typedef HPX_STD_TUPLE<int, lcos::future<T, RT> > return_type;
        typedef boost::fusion::tuple<
            lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT>
        > argument_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_any_tuple<argument_type, T, RT>(
                argument_type(f0 , f1 , f2 , f3 , f4 , f5 , f6 , f7 , f8 , f9 , f10 , f11 , f12 , f13)));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
    wait_any (lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5 , lcos::future<T, RT> f6 , lcos::future<T, RT> f7 , lcos::future<T, RT> f8 , lcos::future<T, RT> f9 , lcos::future<T, RT> f10 , lcos::future<T, RT> f11 , lcos::future<T, RT> f12 , lcos::future<T, RT> f13 , lcos::future<T, RT> f14)
    {
        typedef HPX_STD_TUPLE<int, lcos::future<T, RT> > return_type;
        typedef boost::fusion::tuple<
            lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT>
        > argument_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_any_tuple<argument_type, T, RT>(
                argument_type(f0 , f1 , f2 , f3 , f4 , f5 , f6 , f7 , f8 , f9 , f10 , f11 , f12 , f13 , f14)));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
    wait_any (lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5 , lcos::future<T, RT> f6 , lcos::future<T, RT> f7 , lcos::future<T, RT> f8 , lcos::future<T, RT> f9 , lcos::future<T, RT> f10 , lcos::future<T, RT> f11 , lcos::future<T, RT> f12 , lcos::future<T, RT> f13 , lcos::future<T, RT> f14 , lcos::future<T, RT> f15)
    {
        typedef HPX_STD_TUPLE<int, lcos::future<T, RT> > return_type;
        typedef boost::fusion::tuple<
            lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT>
        > argument_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_any_tuple<argument_type, T, RT>(
                argument_type(f0 , f1 , f2 , f3 , f4 , f5 , f6 , f7 , f8 , f9 , f10 , f11 , f12 , f13 , f14 , f15)));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
    wait_any (lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5 , lcos::future<T, RT> f6 , lcos::future<T, RT> f7 , lcos::future<T, RT> f8 , lcos::future<T, RT> f9 , lcos::future<T, RT> f10 , lcos::future<T, RT> f11 , lcos::future<T, RT> f12 , lcos::future<T, RT> f13 , lcos::future<T, RT> f14 , lcos::future<T, RT> f15 , lcos::future<T, RT> f16)
    {
        typedef HPX_STD_TUPLE<int, lcos::future<T, RT> > return_type;
        typedef boost::fusion::tuple<
            lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT>
        > argument_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_any_tuple<argument_type, T, RT>(
                argument_type(f0 , f1 , f2 , f3 , f4 , f5 , f6 , f7 , f8 , f9 , f10 , f11 , f12 , f13 , f14 , f15 , f16)));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
    wait_any (lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5 , lcos::future<T, RT> f6 , lcos::future<T, RT> f7 , lcos::future<T, RT> f8 , lcos::future<T, RT> f9 , lcos::future<T, RT> f10 , lcos::future<T, RT> f11 , lcos::future<T, RT> f12 , lcos::future<T, RT> f13 , lcos::future<T, RT> f14 , lcos::future<T, RT> f15 , lcos::future<T, RT> f16 , lcos::future<T, RT> f17)
    {
        typedef HPX_STD_TUPLE<int, lcos::future<T, RT> > return_type;
        typedef boost::fusion::tuple<
            lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT>
        > argument_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_any_tuple<argument_type, T, RT>(
                argument_type(f0 , f1 , f2 , f3 , f4 , f5 , f6 , f7 , f8 , f9 , f10 , f11 , f12 , f13 , f14 , f15 , f16 , f17)));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
    wait_any (lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5 , lcos::future<T, RT> f6 , lcos::future<T, RT> f7 , lcos::future<T, RT> f8 , lcos::future<T, RT> f9 , lcos::future<T, RT> f10 , lcos::future<T, RT> f11 , lcos::future<T, RT> f12 , lcos::future<T, RT> f13 , lcos::future<T, RT> f14 , lcos::future<T, RT> f15 , lcos::future<T, RT> f16 , lcos::future<T, RT> f17 , lcos::future<T, RT> f18)
    {
        typedef HPX_STD_TUPLE<int, lcos::future<T, RT> > return_type;
        typedef boost::fusion::tuple<
            lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT>
        > argument_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_any_tuple<argument_type, T, RT>(
                argument_type(f0 , f1 , f2 , f3 , f4 , f5 , f6 , f7 , f8 , f9 , f10 , f11 , f12 , f13 , f14 , f15 , f16 , f17 , f18)));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
    wait_any (lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5 , lcos::future<T, RT> f6 , lcos::future<T, RT> f7 , lcos::future<T, RT> f8 , lcos::future<T, RT> f9 , lcos::future<T, RT> f10 , lcos::future<T, RT> f11 , lcos::future<T, RT> f12 , lcos::future<T, RT> f13 , lcos::future<T, RT> f14 , lcos::future<T, RT> f15 , lcos::future<T, RT> f16 , lcos::future<T, RT> f17 , lcos::future<T, RT> f18 , lcos::future<T, RT> f19)
    {
        typedef HPX_STD_TUPLE<int, lcos::future<T, RT> > return_type;
        typedef boost::fusion::tuple<
            lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT> , lcos::future<T, RT>
        > argument_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_any_tuple<argument_type, T, RT>(
                argument_type(f0 , f1 , f2 , f3 , f4 , f5 , f6 , f7 , f8 , f9 , f10 , f11 , f12 , f13 , f14 , f15 , f16 , f17 , f18 , f19)));
        p.apply();
        return p.get_future();
    }
}
// Copyright (c) 2007-2013 Hartmut Kaiser
// Copyright (c) 2012-2013 Thomas Heller
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

// This file has been automatically generated using the Boost.Wave tool.
// Do not edit manually.


namespace hpx { namespace util
{
    namespace detail
    {
        template <
            typename R
          , typename T0
          , typename Arg0
        >
        struct bound_function1
        {
            typedef R result_type;
            typedef R(*function_pointer_type)(T0);
            function_pointer_type f;
            bound_function1(
                    bound_function1 const & other)
                : f(other.f)
                , arg0(other.arg0)
            {}
            bound_function1(
                    BOOST_RV_REF(bound_function1) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0))
            {}
            bound_function1 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_function1) other)
            {
                f = other.f;
                arg0 = other.arg0;
                return *this;
            }
            bound_function1 & operator=(
                BOOST_RV_REF(bound_function1) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0);
                return *this;
            }
            template <typename A0>
            bound_function1(
                function_pointer_type f
              , BOOST_FWD_REF(A0) a0
            )
                : f(f)
                , arg0(boost::forward<A0>(a0))
            {}
            BOOST_FORCEINLINE R operator()() const
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return f(::hpx::util::detail::eval(env, arg0));
            }
            BOOST_FORCEINLINE R operator()()
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return f(::hpx::util::detail::eval(env, arg0));
            }
            template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) const { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0)); } template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0)); }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0;
        private:
            BOOST_COPYABLE_AND_MOVABLE(bound_function1);
        };
        namespace result_of
        {
            template <
                typename Env
              , typename R
              , typename T0
              , typename Arg0
            >
            struct eval<Env,
                detail::bound_function1<
                    R
                  , T0
                  , Arg0
                >
            >
            {
                typedef R type;
            };
        }
        template <
            typename Env
          , typename R
          , typename T0
          , typename Arg0
        >
        R
        eval(
            Env & env
          , detail::bound_function1<
                R
              , T0
              , Arg0
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_function1<
                        R
                      , T0
                      , Arg0
                    >
                >(f)(
                    env
                 );
        }
    }
    template <
        typename R
      , typename T0
      , typename A0
    >
    detail::bound_function1<
        R
      , T0
      , typename detail::remove_reference<A0>::type
    >
    bind(
        R(*f)(T0)
      , BOOST_FWD_REF(A0) a0
    )
    {
        return
            detail::bound_function1<
                R
              , T0
              , typename detail::remove_reference<A0>::type
            >
            (f, boost::forward<A0>( a0 ));
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <
            typename R
          , typename C
          , 
           typename Arg0
        >
        struct bound_member_function1
        {
            typedef R result_type;
            typedef R(C::*function_pointer_type)(
                );
            function_pointer_type f;
            template <typename A0>
            bound_member_function1(
                function_pointer_type f
              , BOOST_FWD_REF(A0) a0
            )
                : f(f)
                , arg0(boost::forward<A0>(a0))
            {}
            bound_member_function1(
                    bound_member_function1 const & other)
                : f(other.f)
                , arg0(other.arg0)
            {}
            bound_member_function1(BOOST_RV_REF(
                    bound_member_function1) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0))
            {}
            bound_member_function1 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_member_function1) other)
            {
                f = other.f;
                arg0 = other.arg0;
                return *this;
            }
            bound_member_function1 & operator=(
                BOOST_RV_REF(bound_member_function1) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0);
                return *this;
            }
            BOOST_FORCEINLINE R operator()() const
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        ();
            }
            BOOST_FORCEINLINE R operator()()
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        ();
            }
    template <typename A0>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple1<
                typename detail::env_value_type<A0>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                ();
    }
    template <typename A0>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple1<
                typename detail::env_value_type<A0>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                ();
    }
    template <typename A0 , typename A1>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple2<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                ();
    }
    template <typename A0 , typename A1>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple2<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                ();
    }
    template <typename A0 , typename A1 , typename A2>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple3<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                ();
    }
    template <typename A0 , typename A1 , typename A2>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple3<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                ();
    }
    template <typename A0 , typename A1 , typename A2 , typename A3>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple4<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                ();
    }
    template <typename A0 , typename A1 , typename A2 , typename A3>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple4<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                ();
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple5<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                ();
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple5<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                ();
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple6<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                ();
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple6<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                ();
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple7<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                ();
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple7<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                ();
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple8<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type , typename detail::env_value_type<A7>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                ();
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple8<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type , typename detail::env_value_type<A7>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                ();
    }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0;
        };
        template <
            typename R
          , typename C
          , 
           typename Arg0
        >
        struct bound_member_function1<
            R
          , C const
          , 
           Arg0
        >
        {
            typedef R result_type;
            typedef R(C::*function_pointer_type)(
                ) const;
            function_pointer_type f;
            template <typename A0>
            bound_member_function1(
                function_pointer_type f
              , BOOST_FWD_REF(A0) a0
            )
                : f(f)
                , arg0(boost::forward<A0>(a0))
            {}
            bound_member_function1(
                    bound_member_function1 const & other)
                : f(other.f)
                , arg0(other.arg0)
            {}
            bound_member_function1(
                    BOOST_RV_REF(bound_member_function1) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0))
            {}
            bound_member_function1 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_member_function1) other)
            {
                f = other.f;
                arg0 = other.arg0;
                return *this;
            }
            bound_member_function1 & operator=(
                BOOST_RV_REF(bound_member_function1) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0);
                return *this;
            }
            BOOST_FORCEINLINE R operator()() const
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        ();
            }
            BOOST_FORCEINLINE R operator()()
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        ();
            }
            template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) { using detail::get_pointer; typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return (get_pointer(detail::eval(env, arg0))->*f) (); } template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) const { using detail::get_pointer; typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return (get_pointer(detail::eval(env, arg0))->*f) (); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { using detail::get_pointer; typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return (get_pointer(detail::eval(env, arg0))->*f) (); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { using detail::get_pointer; typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return (get_pointer(detail::eval(env, arg0))->*f) (); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { using detail::get_pointer; typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return (get_pointer(detail::eval(env, arg0))->*f) (); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { using detail::get_pointer; typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return (get_pointer(detail::eval(env, arg0))->*f) (); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { using detail::get_pointer; typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return (get_pointer(detail::eval(env, arg0))->*f) (); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { using detail::get_pointer; typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return (get_pointer(detail::eval(env, arg0))->*f) (); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { using detail::get_pointer; typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return (get_pointer(detail::eval(env, arg0))->*f) (); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { using detail::get_pointer; typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return (get_pointer(detail::eval(env, arg0))->*f) (); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { using detail::get_pointer; typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return (get_pointer(detail::eval(env, arg0))->*f) (); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { using detail::get_pointer; typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return (get_pointer(detail::eval(env, arg0))->*f) (); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { using detail::get_pointer; typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return (get_pointer(detail::eval(env, arg0))->*f) (); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { using detail::get_pointer; typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return (get_pointer(detail::eval(env, arg0))->*f) (); }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0;
        };
        namespace result_of
        {
            template <
                typename Env
              , typename R
              , typename C
              , 
              
                  typename Arg0
            >
            struct eval<Env,
                detail::bound_member_function1<
                    R
                  , C
                  , 
                   Arg0
                >
            >
            {
                typedef R type;
            };
        }
        template <
            typename Env
          , typename R
          , typename C
          , 
          
              typename Arg0
        >
        R
        eval(
            Env & env
          , detail::bound_member_function1<
                R
              , C
              , 
               Arg0
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_member_function1<
                        R
                      , C
                      , 
                        
                        Arg0
                    >
                >(f)(
                    env
                 );
        }
    }
    template <
        typename R
      , typename C
      , 
       typename A0
    >
    detail::bound_member_function1<
        R
      , C
      , 
      
        typename detail::remove_reference<A0>::type
    >
    bind(
        R(C::*f)()
      , BOOST_FWD_REF(A0) a0
    )
    {
        return
            detail::bound_member_function1<
                R
              , C
              , 
                
                typename detail::remove_reference<A0>::type
            >
            (f, boost::forward<A0>( a0 ));
    }
    template <
        typename R
      , typename C
      , 
       typename A0
    >
    detail::bound_member_function1<
        R
      , C const
      , 
      
        typename detail::remove_reference<A0>::type
    >
    bind(
        R(C::*f)() const
      , BOOST_FWD_REF(A0) a0
    )
    {
        return
            detail::bound_member_function1<
                R
              , C const
              , 
              
                  typename detail::remove_reference<A0>::type
            >
            (f, boost::forward<A0>( a0 ));
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        namespace result_of
        {
            template <
                typename F
              , typename Arg0
              , typename Enable = typename boost::mpl::fold<
                    boost::mpl::vector<Arg0>
                  , boost::mpl::false_
                  , boost::mpl::or_<
                        placeholders::is_placeholder<boost::mpl::_2>
                      , boost::mpl::_1
                    >
                >::type
            >
            struct bound_functor1;
            template < typename F , typename A0 , typename Arg0 > struct bound_functor1< F(A0) , Arg0 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple1< typename detail::env_value_type<A0>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename Arg0 > struct bound_functor1< F(A0 , A1) , Arg0 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename Arg0 > struct bound_functor1< F(A0 , A1 , A2) , Arg0 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename Arg0 > struct bound_functor1< F(A0 , A1 , A2 , A3) , Arg0 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename Arg0 > struct bound_functor1< F(A0 , A1 , A2 , A3 , A4) , Arg0 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename Arg0 > struct bound_functor1< F(A0 , A1 , A2 , A3 , A4 , A5) , Arg0 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename Arg0 > struct bound_functor1< F(A0 , A1 , A2 , A3 , A4 , A5 , A6) , Arg0 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type ) >::type type; };
            template <
                typename F
              , typename Arg0
            >
            struct bound_functor1<
                F()
              , Arg0, boost::mpl::false_>
            {
                typedef
                    typename boost::result_of<
                        typename boost::remove_reference<
                            typename detail::result_of::eval<
                                hpx::util::tuple0<>
                              , F
                            >::type
                        >::type(
                            typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type
                        )
                    >::type
                    type;
            };
            template <
                typename F
              , typename Arg0
            >
            struct bound_functor1<
                F()
              , Arg0
              , boost::mpl::true_
            >
            {
                typedef
                    detail::not_enough_parameters
                    type;
            };
        }
        template <
            typename F
          , typename Arg0
        >
        struct bound_functor1
        {
            typedef typename boost::remove_const<F>::type functor_type;
            functor_type f;
            template <typename Sig>
            struct result;
            template <typename This>
            struct result<This()>
            {
                typedef
                    typename result_of::bound_functor1<
                        F()
                      , Arg0
                    >::type
                    type;
            };
            
            bound_functor1()
            {}
            template <typename A0>
            bound_functor1(
                BOOST_RV_REF(F) f_
              , BOOST_FWD_REF(A0) a0
            )
                : f(boost::move(f_))
                , arg0(boost::forward<A0>(a0))
            {}
            template <typename A0>
            bound_functor1(
                F const & f_
              , BOOST_FWD_REF(A0) a0
            )
                : f(f_)
                , arg0(boost::forward<A0>(a0))
            {}
            bound_functor1(
                    bound_functor1 const & other)
                : f(other.f)
                , arg0(other.arg0)
            {}
            bound_functor1(
                    BOOST_RV_REF(bound_functor1) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0))
            {}
            bound_functor1 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_functor1) other)
            {
                f = other.f;
                arg0 = other.arg0;
                return *this;
            }
            bound_functor1 & operator=(
                BOOST_RV_REF(bound_functor1) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0);
                return *this;
            }
            BOOST_FORCEINLINE
            typename result_of::bound_functor1<
                F()
              , Arg0
            >::type
            operator()()
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return eval(env, f)(::hpx::util::detail::eval(env, arg0));
            }
            BOOST_FORCEINLINE
            typename result_of::bound_functor1<
                F()
              , Arg0
            >::type
            operator()() const
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return eval(env, f)(::hpx::util::detail::eval(env, arg0));
            }
            template <typename This, typename A0> struct result<This(A0)> { typedef typename result_of::bound_functor1< F(A0), Arg0, boost::mpl::false_>::type type; }; template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor1< F(A0), Arg0, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) const { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0)); } template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor1< F(A0), Arg0, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0)); } template <typename This, typename A0 , typename A1> struct result<This(A0 , A1)> { typedef typename result_of::bound_functor1< F(A0 , A1), Arg0, boost::mpl::false_>::type type; }; template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor1< F(A0 , A1), Arg0, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0)); } template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor1< F(A0 , A1), Arg0, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0)); } template <typename This, typename A0 , typename A1 , typename A2> struct result<This(A0 , A1 , A2)> { typedef typename result_of::bound_functor1< F(A0 , A1 , A2), Arg0, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor1< F(A0 , A1 , A2), Arg0, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor1< F(A0 , A1 , A2), Arg0, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3> struct result<This(A0 , A1 , A2 , A3)> { typedef typename result_of::bound_functor1< F(A0 , A1 , A2 , A3), Arg0, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor1< F(A0 , A1 , A2 , A3), Arg0, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor1< F(A0 , A1 , A2 , A3), Arg0, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4> struct result<This(A0 , A1 , A2 , A3 , A4)> { typedef typename result_of::bound_functor1< F(A0 , A1 , A2 , A3 , A4), Arg0, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor1< F(A0 , A1 , A2 , A3 , A4), Arg0, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor1< F(A0 , A1 , A2 , A3 , A4), Arg0, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> struct result<This(A0 , A1 , A2 , A3 , A4 , A5)> { typedef typename result_of::bound_functor1< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor1< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor1< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> struct result<This(A0 , A1 , A2 , A3 , A4 , A5 , A6)> { typedef typename result_of::bound_functor1< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor1< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor1< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0)); }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0;
        };
        namespace result_of
        {
            template <typename Env
              , typename F
              , typename Arg0
            >
            struct eval<
                Env
              , detail::bound_functor1<
                    F
                  , Arg0
                >
            >
            {
                typedef
                    typename boost::result_of<
                        boost::fusion::fused<
                            detail::bound_functor1<
                                F
                              , Arg0
                            >
                        >(Env &)
                    >::type
                    type;
            };
        }
        template <
            typename Env
          , typename F
          , typename Arg0
        >
        typename boost::result_of<
            boost::fusion::fused<
                detail::bound_functor1<
                    F
                  , Arg0
                >
            >(Env &)
        >::type
        eval(
            Env & env
          , detail::bound_functor1<
                F
              , Arg0
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_functor1<
                        F
                      , Arg0
                    >
                >(f)(
                    env
                 );
        }
    }
    template <typename F
      , typename A0
    >
    typename boost::disable_if<
        hpx::traits::is_action<typename detail::remove_reference<F>::type>
      , detail::bound_functor1<
            typename detail::remove_reference<F>::type
          , typename detail::remove_reference<A0>::type
        >
    >::type
    bind(
        BOOST_FWD_REF(F) f
      , BOOST_FWD_REF(A0) a0
    )
    {
        return
            detail::bound_functor1<
                typename detail::remove_reference<F>::type
              , typename detail::remove_reference<A0>::type
            >(
                boost::forward<F>(f)
              , boost::forward<A0>( a0 )
            );
    }
}}
namespace boost {
    template <
        typename F
      , typename Arg0
    >
    struct result_of<
        hpx::util::detail::bound_functor1<
            F
          , Arg0
        >()
    >
    {
        typedef
            typename hpx::util::detail::result_of::
                bound_functor1<
                    F()
                  , Arg0
                >::type
            type;
    };
}
namespace boost { namespace serialization
{
    
    
    template <typename F, typename Arg0>
    void serialize(hpx::util::portable_binary_iarchive& ar
      , hpx::util::detail::bound_functor1<
            F, Arg0
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0;
    }
    template <typename F, typename Arg0>
    void serialize(hpx::util::portable_binary_oarchive& ar
      , hpx::util::detail::bound_functor1<
            F, Arg0
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0;
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <
            typename R
          , typename T0 , typename T1
          , typename Arg0 , typename Arg1
        >
        struct bound_function2
        {
            typedef R result_type;
            typedef R(*function_pointer_type)(T0 , T1);
            function_pointer_type f;
            bound_function2(
                    bound_function2 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1)
            {}
            bound_function2(
                    BOOST_RV_REF(bound_function2) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1))
            {}
            bound_function2 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_function2) other)
            {
                f = other.f;
                arg0 = other.arg0; arg1 = other.arg1;
                return *this;
            }
            bound_function2 & operator=(
                BOOST_RV_REF(bound_function2) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0); arg1 = boost::move(other.arg1);
                return *this;
            }
            template <typename A0 , typename A1>
            bound_function2(
                function_pointer_type f
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1
            )
                : f(f)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1))
            {}
            BOOST_FORCEINLINE R operator()() const
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return f(::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1));
            }
            BOOST_FORCEINLINE R operator()()
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return f(::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1));
            }
            template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) const { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0; typename boost::remove_const< typename decay<Arg1>::type >::type arg1;
        private:
            BOOST_COPYABLE_AND_MOVABLE(bound_function2);
        };
        namespace result_of
        {
            template <
                typename Env
              , typename R
              , typename T0 , typename T1
              , typename Arg0 , typename Arg1
            >
            struct eval<Env,
                detail::bound_function2<
                    R
                  , T0 , T1
                  , Arg0 , Arg1
                >
            >
            {
                typedef R type;
            };
        }
        template <
            typename Env
          , typename R
          , typename T0 , typename T1
          , typename Arg0 , typename Arg1
        >
        R
        eval(
            Env & env
          , detail::bound_function2<
                R
              , T0 , T1
              , Arg0 , Arg1
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_function2<
                        R
                      , T0 , T1
                      , Arg0 , Arg1
                    >
                >(f)(
                    env
                 );
        }
    }
    template <
        typename R
      , typename T0 , typename T1
      , typename A0 , typename A1
    >
    detail::bound_function2<
        R
      , T0 , T1
      , typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type
    >
    bind(
        R(*f)(T0 , T1)
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1
    )
    {
        return
            detail::bound_function2<
                R
              , T0 , T1
              , typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type
            >
            (f, boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ));
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <
            typename R
          , typename C
          , typename T0
          , typename Arg0 , typename Arg1
        >
        struct bound_member_function2
        {
            typedef R result_type;
            typedef R(C::*function_pointer_type)(
                T0);
            function_pointer_type f;
            template <typename A0 , typename A1>
            bound_member_function2(
                function_pointer_type f
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1
            )
                : f(f)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1))
            {}
            bound_member_function2(
                    bound_member_function2 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1)
            {}
            bound_member_function2(BOOST_RV_REF(
                    bound_member_function2) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1))
            {}
            bound_member_function2 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_member_function2) other)
            {
                f = other.f;
                arg0 = other.arg0; arg1 = other.arg1;
                return *this;
            }
            bound_member_function2 & operator=(
                BOOST_RV_REF(bound_member_function2) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0); arg1 = boost::move(other.arg1);
                return *this;
            }
            BOOST_FORCEINLINE R operator()() const
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        (::hpx::util::detail::eval(env, arg1));
            }
            BOOST_FORCEINLINE R operator()()
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        (::hpx::util::detail::eval(env, arg1));
            }
    template <typename A0>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple1<
                typename detail::env_value_type<A0>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1));
    }
    template <typename A0>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple1<
                typename detail::env_value_type<A0>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1));
    }
    template <typename A0 , typename A1>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple2<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1));
    }
    template <typename A0 , typename A1>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple2<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1));
    }
    template <typename A0 , typename A1 , typename A2>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple3<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1));
    }
    template <typename A0 , typename A1 , typename A2>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple3<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple4<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple4<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple5<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple5<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple6<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple6<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple7<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple7<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple8<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type , typename detail::env_value_type<A7>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple8<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type , typename detail::env_value_type<A7>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1));
    }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0; typename boost::remove_const< typename decay<Arg1>::type >::type arg1;
        };
        template <
            typename R
          , typename C
          , typename T0
          , typename Arg0 , typename Arg1
        >
        struct bound_member_function2<
            R
          , C const
          , T0
          , Arg0 , Arg1
        >
        {
            typedef R result_type;
            typedef R(C::*function_pointer_type)(
                T0) const;
            function_pointer_type f;
            template <typename A0 , typename A1>
            bound_member_function2(
                function_pointer_type f
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1
            )
                : f(f)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1))
            {}
            bound_member_function2(
                    bound_member_function2 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1)
            {}
            bound_member_function2(
                    BOOST_RV_REF(bound_member_function2) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1))
            {}
            bound_member_function2 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_member_function2) other)
            {
                f = other.f;
                arg0 = other.arg0; arg1 = other.arg1;
                return *this;
            }
            bound_member_function2 & operator=(
                BOOST_RV_REF(bound_member_function2) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0); arg1 = boost::move(other.arg1);
                return *this;
            }
            BOOST_FORCEINLINE R operator()() const
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        (::hpx::util::detail::eval(env, arg1));
            }
            BOOST_FORCEINLINE R operator()()
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        (::hpx::util::detail::eval(env, arg1));
            }
            template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) { using detail::get_pointer; typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1)); } template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) const { using detail::get_pointer; typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { using detail::get_pointer; typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { using detail::get_pointer; typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { using detail::get_pointer; typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { using detail::get_pointer; typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { using detail::get_pointer; typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { using detail::get_pointer; typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { using detail::get_pointer; typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { using detail::get_pointer; typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { using detail::get_pointer; typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { using detail::get_pointer; typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { using detail::get_pointer; typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { using detail::get_pointer; typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1)); }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0; typename boost::remove_const< typename decay<Arg1>::type >::type arg1;
        };
        namespace result_of
        {
            template <
                typename Env
              , typename R
              , typename C
              , typename T0
              ,
                  typename Arg0 , typename Arg1
            >
            struct eval<Env,
                detail::bound_member_function2<
                    R
                  , C
                  , T0
                  , Arg0 , Arg1
                >
            >
            {
                typedef R type;
            };
        }
        template <
            typename Env
          , typename R
          , typename C
          , typename T0
          ,
              typename Arg0 , typename Arg1
        >
        R
        eval(
            Env & env
          , detail::bound_member_function2<
                R
              , C
              , T0
              , Arg0 , Arg1
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_member_function2<
                        R
                      , C
                      , T0
                        ,
                        Arg0 , Arg1
                    >
                >(f)(
                    env
                 );
        }
    }
    template <
        typename R
      , typename C
      , typename T0
      , typename A0 , typename A1
    >
    detail::bound_member_function2<
        R
      , C
      , T0
      ,
        typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type
    >
    bind(
        R(C::*f)(T0)
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1
    )
    {
        return
            detail::bound_member_function2<
                R
              , C
              , T0
                ,
                typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type
            >
            (f, boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ));
    }
    template <
        typename R
      , typename C
      , typename T0
      , typename A0 , typename A1
    >
    detail::bound_member_function2<
        R
      , C const
      , T0
      ,
        typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type
    >
    bind(
        R(C::*f)(T0) const
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1
    )
    {
        return
            detail::bound_member_function2<
                R
              , C const
              , T0
              ,
                  typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type
            >
            (f, boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ));
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        namespace result_of
        {
            template <
                typename F
              , typename Arg0 , typename Arg1
              , typename Enable = typename boost::mpl::fold<
                    boost::mpl::vector<Arg0 , Arg1>
                  , boost::mpl::false_
                  , boost::mpl::or_<
                        placeholders::is_placeholder<boost::mpl::_2>
                      , boost::mpl::_1
                    >
                >::type
            >
            struct bound_functor2;
            template < typename F , typename A0 , typename Arg0 , typename Arg1 > struct bound_functor2< F(A0) , Arg0 , Arg1 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple1< typename detail::env_value_type<A0>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename Arg0 , typename Arg1 > struct bound_functor2< F(A0 , A1) , Arg0 , Arg1 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename Arg0 , typename Arg1 > struct bound_functor2< F(A0 , A1 , A2) , Arg0 , Arg1 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename Arg0 , typename Arg1 > struct bound_functor2< F(A0 , A1 , A2 , A3) , Arg0 , Arg1 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename Arg0 , typename Arg1 > struct bound_functor2< F(A0 , A1 , A2 , A3 , A4) , Arg0 , Arg1 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename Arg0 , typename Arg1 > struct bound_functor2< F(A0 , A1 , A2 , A3 , A4 , A5) , Arg0 , Arg1 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename Arg0 , typename Arg1 > struct bound_functor2< F(A0 , A1 , A2 , A3 , A4 , A5 , A6) , Arg0 , Arg1 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type ) >::type type; };
            template <
                typename F
              , typename Arg0 , typename Arg1
            >
            struct bound_functor2<
                F()
              , Arg0 , Arg1, boost::mpl::false_>
            {
                typedef
                    typename boost::result_of<
                        typename boost::remove_reference<
                            typename detail::result_of::eval<
                                hpx::util::tuple0<>
                              , F
                            >::type
                        >::type(
                            typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type
                        )
                    >::type
                    type;
            };
            template <
                typename F
              , typename Arg0 , typename Arg1
            >
            struct bound_functor2<
                F()
              , Arg0 , Arg1
              , boost::mpl::true_
            >
            {
                typedef
                    detail::not_enough_parameters
                    type;
            };
        }
        template <
            typename F
          , typename Arg0 , typename Arg1
        >
        struct bound_functor2
        {
            typedef typename boost::remove_const<F>::type functor_type;
            functor_type f;
            template <typename Sig>
            struct result;
            template <typename This>
            struct result<This()>
            {
                typedef
                    typename result_of::bound_functor2<
                        F()
                      , Arg0 , Arg1
                    >::type
                    type;
            };
            
            bound_functor2()
            {}
            template <typename A0 , typename A1>
            bound_functor2(
                BOOST_RV_REF(F) f_
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1
            )
                : f(boost::move(f_))
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1))
            {}
            template <typename A0 , typename A1>
            bound_functor2(
                F const & f_
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1
            )
                : f(f_)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1))
            {}
            bound_functor2(
                    bound_functor2 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1)
            {}
            bound_functor2(
                    BOOST_RV_REF(bound_functor2) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1))
            {}
            bound_functor2 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_functor2) other)
            {
                f = other.f;
                arg0 = other.arg0; arg1 = other.arg1;
                return *this;
            }
            bound_functor2 & operator=(
                BOOST_RV_REF(bound_functor2) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0); arg1 = boost::move(other.arg1);
                return *this;
            }
            BOOST_FORCEINLINE
            typename result_of::bound_functor2<
                F()
              , Arg0 , Arg1
            >::type
            operator()()
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return eval(env, f)(::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1));
            }
            BOOST_FORCEINLINE
            typename result_of::bound_functor2<
                F()
              , Arg0 , Arg1
            >::type
            operator()() const
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return eval(env, f)(::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1));
            }
            template <typename This, typename A0> struct result<This(A0)> { typedef typename result_of::bound_functor2< F(A0), Arg0 , Arg1, boost::mpl::false_>::type type; }; template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor2< F(A0), Arg0 , Arg1, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) const { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor2< F(A0), Arg0 , Arg1, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename This, typename A0 , typename A1> struct result<This(A0 , A1)> { typedef typename result_of::bound_functor2< F(A0 , A1), Arg0 , Arg1, boost::mpl::false_>::type type; }; template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor2< F(A0 , A1), Arg0 , Arg1, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor2< F(A0 , A1), Arg0 , Arg1, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename This, typename A0 , typename A1 , typename A2> struct result<This(A0 , A1 , A2)> { typedef typename result_of::bound_functor2< F(A0 , A1 , A2), Arg0 , Arg1, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor2< F(A0 , A1 , A2), Arg0 , Arg1, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor2< F(A0 , A1 , A2), Arg0 , Arg1, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3> struct result<This(A0 , A1 , A2 , A3)> { typedef typename result_of::bound_functor2< F(A0 , A1 , A2 , A3), Arg0 , Arg1, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor2< F(A0 , A1 , A2 , A3), Arg0 , Arg1, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor2< F(A0 , A1 , A2 , A3), Arg0 , Arg1, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4> struct result<This(A0 , A1 , A2 , A3 , A4)> { typedef typename result_of::bound_functor2< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor2< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor2< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> struct result<This(A0 , A1 , A2 , A3 , A4 , A5)> { typedef typename result_of::bound_functor2< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor2< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor2< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> struct result<This(A0 , A1 , A2 , A3 , A4 , A5 , A6)> { typedef typename result_of::bound_functor2< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor2< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor2< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0; typename boost::remove_const< typename decay<Arg1>::type >::type arg1;
        };
        namespace result_of
        {
            template <typename Env
              , typename F
              , typename Arg0 , typename Arg1
            >
            struct eval<
                Env
              , detail::bound_functor2<
                    F
                  , Arg0 , Arg1
                >
            >
            {
                typedef
                    typename boost::result_of<
                        boost::fusion::fused<
                            detail::bound_functor2<
                                F
                              , Arg0 , Arg1
                            >
                        >(Env &)
                    >::type
                    type;
            };
        }
        template <
            typename Env
          , typename F
          , typename Arg0 , typename Arg1
        >
        typename boost::result_of<
            boost::fusion::fused<
                detail::bound_functor2<
                    F
                  , Arg0 , Arg1
                >
            >(Env &)
        >::type
        eval(
            Env & env
          , detail::bound_functor2<
                F
              , Arg0 , Arg1
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_functor2<
                        F
                      , Arg0 , Arg1
                    >
                >(f)(
                    env
                 );
        }
    }
    template <typename F
      , typename A0 , typename A1
    >
    typename boost::disable_if<
        hpx::traits::is_action<typename detail::remove_reference<F>::type>
      , detail::bound_functor2<
            typename detail::remove_reference<F>::type
          , typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type
        >
    >::type
    bind(
        BOOST_FWD_REF(F) f
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1
    )
    {
        return
            detail::bound_functor2<
                typename detail::remove_reference<F>::type
              , typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type
            >(
                boost::forward<F>(f)
              , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )
            );
    }
}}
namespace boost {
    template <
        typename F
      , typename Arg0 , typename Arg1
    >
    struct result_of<
        hpx::util::detail::bound_functor2<
            F
          , Arg0 , Arg1
        >()
    >
    {
        typedef
            typename hpx::util::detail::result_of::
                bound_functor2<
                    F()
                  , Arg0 , Arg1
                >::type
            type;
    };
}
namespace boost { namespace serialization
{
    
    
    template <typename F, typename Arg0 , typename Arg1>
    void serialize(hpx::util::portable_binary_iarchive& ar
      , hpx::util::detail::bound_functor2<
            F, Arg0 , Arg1
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0; ar & bound.arg1;
    }
    template <typename F, typename Arg0 , typename Arg1>
    void serialize(hpx::util::portable_binary_oarchive& ar
      , hpx::util::detail::bound_functor2<
            F, Arg0 , Arg1
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0; ar & bound.arg1;
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <
            typename R
          , typename T0 , typename T1 , typename T2
          , typename Arg0 , typename Arg1 , typename Arg2
        >
        struct bound_function3
        {
            typedef R result_type;
            typedef R(*function_pointer_type)(T0 , T1 , T2);
            function_pointer_type f;
            bound_function3(
                    bound_function3 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2)
            {}
            bound_function3(
                    BOOST_RV_REF(bound_function3) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2))
            {}
            bound_function3 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_function3) other)
            {
                f = other.f;
                arg0 = other.arg0; arg1 = other.arg1; arg2 = other.arg2;
                return *this;
            }
            bound_function3 & operator=(
                BOOST_RV_REF(bound_function3) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0); arg1 = boost::move(other.arg1); arg2 = boost::move(other.arg2);
                return *this;
            }
            template <typename A0 , typename A1 , typename A2>
            bound_function3(
                function_pointer_type f
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2
            )
                : f(f)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2))
            {}
            BOOST_FORCEINLINE R operator()() const
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return f(::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2));
            }
            BOOST_FORCEINLINE R operator()()
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return f(::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2));
            }
            template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) const { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0; typename boost::remove_const< typename decay<Arg1>::type >::type arg1; typename boost::remove_const< typename decay<Arg2>::type >::type arg2;
        private:
            BOOST_COPYABLE_AND_MOVABLE(bound_function3);
        };
        namespace result_of
        {
            template <
                typename Env
              , typename R
              , typename T0 , typename T1 , typename T2
              , typename Arg0 , typename Arg1 , typename Arg2
            >
            struct eval<Env,
                detail::bound_function3<
                    R
                  , T0 , T1 , T2
                  , Arg0 , Arg1 , Arg2
                >
            >
            {
                typedef R type;
            };
        }
        template <
            typename Env
          , typename R
          , typename T0 , typename T1 , typename T2
          , typename Arg0 , typename Arg1 , typename Arg2
        >
        R
        eval(
            Env & env
          , detail::bound_function3<
                R
              , T0 , T1 , T2
              , Arg0 , Arg1 , Arg2
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_function3<
                        R
                      , T0 , T1 , T2
                      , Arg0 , Arg1 , Arg2
                    >
                >(f)(
                    env
                 );
        }
    }
    template <
        typename R
      , typename T0 , typename T1 , typename T2
      , typename A0 , typename A1 , typename A2
    >
    detail::bound_function3<
        R
      , T0 , T1 , T2
      , typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type
    >
    bind(
        R(*f)(T0 , T1 , T2)
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2
    )
    {
        return
            detail::bound_function3<
                R
              , T0 , T1 , T2
              , typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type
            >
            (f, boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ));
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <
            typename R
          , typename C
          , typename T0 , typename T1
          , typename Arg0 , typename Arg1 , typename Arg2
        >
        struct bound_member_function3
        {
            typedef R result_type;
            typedef R(C::*function_pointer_type)(
                T0 , T1);
            function_pointer_type f;
            template <typename A0 , typename A1 , typename A2>
            bound_member_function3(
                function_pointer_type f
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2
            )
                : f(f)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2))
            {}
            bound_member_function3(
                    bound_member_function3 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2)
            {}
            bound_member_function3(BOOST_RV_REF(
                    bound_member_function3) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2))
            {}
            bound_member_function3 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_member_function3) other)
            {
                f = other.f;
                arg0 = other.arg0; arg1 = other.arg1; arg2 = other.arg2;
                return *this;
            }
            bound_member_function3 & operator=(
                BOOST_RV_REF(bound_member_function3) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0); arg1 = boost::move(other.arg1); arg2 = boost::move(other.arg2);
                return *this;
            }
            BOOST_FORCEINLINE R operator()() const
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2));
            }
            BOOST_FORCEINLINE R operator()()
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2));
            }
    template <typename A0>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple1<
                typename detail::env_value_type<A0>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2));
    }
    template <typename A0>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple1<
                typename detail::env_value_type<A0>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2));
    }
    template <typename A0 , typename A1>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple2<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2));
    }
    template <typename A0 , typename A1>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple2<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2));
    }
    template <typename A0 , typename A1 , typename A2>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple3<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2));
    }
    template <typename A0 , typename A1 , typename A2>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple3<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple4<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple4<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple5<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple5<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple6<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple6<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple7<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple7<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple8<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type , typename detail::env_value_type<A7>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple8<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type , typename detail::env_value_type<A7>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2));
    }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0; typename boost::remove_const< typename decay<Arg1>::type >::type arg1; typename boost::remove_const< typename decay<Arg2>::type >::type arg2;
        };
        template <
            typename R
          , typename C
          , typename T0 , typename T1
          , typename Arg0 , typename Arg1 , typename Arg2
        >
        struct bound_member_function3<
            R
          , C const
          , T0 , T1
          , Arg0 , Arg1 , Arg2
        >
        {
            typedef R result_type;
            typedef R(C::*function_pointer_type)(
                T0 , T1) const;
            function_pointer_type f;
            template <typename A0 , typename A1 , typename A2>
            bound_member_function3(
                function_pointer_type f
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2
            )
                : f(f)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2))
            {}
            bound_member_function3(
                    bound_member_function3 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2)
            {}
            bound_member_function3(
                    BOOST_RV_REF(bound_member_function3) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2))
            {}
            bound_member_function3 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_member_function3) other)
            {
                f = other.f;
                arg0 = other.arg0; arg1 = other.arg1; arg2 = other.arg2;
                return *this;
            }
            bound_member_function3 & operator=(
                BOOST_RV_REF(bound_member_function3) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0); arg1 = boost::move(other.arg1); arg2 = boost::move(other.arg2);
                return *this;
            }
            BOOST_FORCEINLINE R operator()() const
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2));
            }
            BOOST_FORCEINLINE R operator()()
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2));
            }
            template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) { using detail::get_pointer; typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) const { using detail::get_pointer; typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { using detail::get_pointer; typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { using detail::get_pointer; typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { using detail::get_pointer; typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { using detail::get_pointer; typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { using detail::get_pointer; typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { using detail::get_pointer; typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { using detail::get_pointer; typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { using detail::get_pointer; typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { using detail::get_pointer; typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { using detail::get_pointer; typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { using detail::get_pointer; typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { using detail::get_pointer; typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0; typename boost::remove_const< typename decay<Arg1>::type >::type arg1; typename boost::remove_const< typename decay<Arg2>::type >::type arg2;
        };
        namespace result_of
        {
            template <
                typename Env
              , typename R
              , typename C
              , typename T0 , typename T1
              ,
                  typename Arg0 , typename Arg1 , typename Arg2
            >
            struct eval<Env,
                detail::bound_member_function3<
                    R
                  , C
                  , T0 , T1
                  , Arg0 , Arg1 , Arg2
                >
            >
            {
                typedef R type;
            };
        }
        template <
            typename Env
          , typename R
          , typename C
          , typename T0 , typename T1
          ,
              typename Arg0 , typename Arg1 , typename Arg2
        >
        R
        eval(
            Env & env
          , detail::bound_member_function3<
                R
              , C
              , T0 , T1
              , Arg0 , Arg1 , Arg2
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_member_function3<
                        R
                      , C
                      , T0 , T1
                        ,
                        Arg0 , Arg1 , Arg2
                    >
                >(f)(
                    env
                 );
        }
    }
    template <
        typename R
      , typename C
      , typename T0 , typename T1
      , typename A0 , typename A1 , typename A2
    >
    detail::bound_member_function3<
        R
      , C
      , T0 , T1
      ,
        typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type
    >
    bind(
        R(C::*f)(T0 , T1)
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2
    )
    {
        return
            detail::bound_member_function3<
                R
              , C
              , T0 , T1
                ,
                typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type
            >
            (f, boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ));
    }
    template <
        typename R
      , typename C
      , typename T0 , typename T1
      , typename A0 , typename A1 , typename A2
    >
    detail::bound_member_function3<
        R
      , C const
      , T0 , T1
      ,
        typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type
    >
    bind(
        R(C::*f)(T0 , T1) const
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2
    )
    {
        return
            detail::bound_member_function3<
                R
              , C const
              , T0 , T1
              ,
                  typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type
            >
            (f, boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ));
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        namespace result_of
        {
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2
              , typename Enable = typename boost::mpl::fold<
                    boost::mpl::vector<Arg0 , Arg1 , Arg2>
                  , boost::mpl::false_
                  , boost::mpl::or_<
                        placeholders::is_placeholder<boost::mpl::_2>
                      , boost::mpl::_1
                    >
                >::type
            >
            struct bound_functor3;
            template < typename F , typename A0 , typename Arg0 , typename Arg1 , typename Arg2 > struct bound_functor3< F(A0) , Arg0 , Arg1 , Arg2 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple1< typename detail::env_value_type<A0>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename Arg0 , typename Arg1 , typename Arg2 > struct bound_functor3< F(A0 , A1) , Arg0 , Arg1 , Arg2 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename Arg0 , typename Arg1 , typename Arg2 > struct bound_functor3< F(A0 , A1 , A2) , Arg0 , Arg1 , Arg2 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename Arg0 , typename Arg1 , typename Arg2 > struct bound_functor3< F(A0 , A1 , A2 , A3) , Arg0 , Arg1 , Arg2 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename Arg0 , typename Arg1 , typename Arg2 > struct bound_functor3< F(A0 , A1 , A2 , A3 , A4) , Arg0 , Arg1 , Arg2 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename Arg0 , typename Arg1 , typename Arg2 > struct bound_functor3< F(A0 , A1 , A2 , A3 , A4 , A5) , Arg0 , Arg1 , Arg2 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename Arg0 , typename Arg1 , typename Arg2 > struct bound_functor3< F(A0 , A1 , A2 , A3 , A4 , A5 , A6) , Arg0 , Arg1 , Arg2 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type ) >::type type; };
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2
            >
            struct bound_functor3<
                F()
              , Arg0 , Arg1 , Arg2, boost::mpl::false_>
            {
                typedef
                    typename boost::result_of<
                        typename boost::remove_reference<
                            typename detail::result_of::eval<
                                hpx::util::tuple0<>
                              , F
                            >::type
                        >::type(
                            typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type
                        )
                    >::type
                    type;
            };
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2
            >
            struct bound_functor3<
                F()
              , Arg0 , Arg1 , Arg2
              , boost::mpl::true_
            >
            {
                typedef
                    detail::not_enough_parameters
                    type;
            };
        }
        template <
            typename F
          , typename Arg0 , typename Arg1 , typename Arg2
        >
        struct bound_functor3
        {
            typedef typename boost::remove_const<F>::type functor_type;
            functor_type f;
            template <typename Sig>
            struct result;
            template <typename This>
            struct result<This()>
            {
                typedef
                    typename result_of::bound_functor3<
                        F()
                      , Arg0 , Arg1 , Arg2
                    >::type
                    type;
            };
            
            bound_functor3()
            {}
            template <typename A0 , typename A1 , typename A2>
            bound_functor3(
                BOOST_RV_REF(F) f_
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2
            )
                : f(boost::move(f_))
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2))
            {}
            template <typename A0 , typename A1 , typename A2>
            bound_functor3(
                F const & f_
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2
            )
                : f(f_)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2))
            {}
            bound_functor3(
                    bound_functor3 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2)
            {}
            bound_functor3(
                    BOOST_RV_REF(bound_functor3) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2))
            {}
            bound_functor3 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_functor3) other)
            {
                f = other.f;
                arg0 = other.arg0; arg1 = other.arg1; arg2 = other.arg2;
                return *this;
            }
            bound_functor3 & operator=(
                BOOST_RV_REF(bound_functor3) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0); arg1 = boost::move(other.arg1); arg2 = boost::move(other.arg2);
                return *this;
            }
            BOOST_FORCEINLINE
            typename result_of::bound_functor3<
                F()
              , Arg0 , Arg1 , Arg2
            >::type
            operator()()
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return eval(env, f)(::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2));
            }
            BOOST_FORCEINLINE
            typename result_of::bound_functor3<
                F()
              , Arg0 , Arg1 , Arg2
            >::type
            operator()() const
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return eval(env, f)(::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2));
            }
            template <typename This, typename A0> struct result<This(A0)> { typedef typename result_of::bound_functor3< F(A0), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type type; }; template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor3< F(A0), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) const { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor3< F(A0), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename This, typename A0 , typename A1> struct result<This(A0 , A1)> { typedef typename result_of::bound_functor3< F(A0 , A1), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type type; }; template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor3< F(A0 , A1), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor3< F(A0 , A1), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename This, typename A0 , typename A1 , typename A2> struct result<This(A0 , A1 , A2)> { typedef typename result_of::bound_functor3< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor3< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor3< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3> struct result<This(A0 , A1 , A2 , A3)> { typedef typename result_of::bound_functor3< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor3< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor3< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4> struct result<This(A0 , A1 , A2 , A3 , A4)> { typedef typename result_of::bound_functor3< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor3< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor3< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> struct result<This(A0 , A1 , A2 , A3 , A4 , A5)> { typedef typename result_of::bound_functor3< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor3< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor3< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> struct result<This(A0 , A1 , A2 , A3 , A4 , A5 , A6)> { typedef typename result_of::bound_functor3< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor3< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor3< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0; typename boost::remove_const< typename decay<Arg1>::type >::type arg1; typename boost::remove_const< typename decay<Arg2>::type >::type arg2;
        };
        namespace result_of
        {
            template <typename Env
              , typename F
              , typename Arg0 , typename Arg1 , typename Arg2
            >
            struct eval<
                Env
              , detail::bound_functor3<
                    F
                  , Arg0 , Arg1 , Arg2
                >
            >
            {
                typedef
                    typename boost::result_of<
                        boost::fusion::fused<
                            detail::bound_functor3<
                                F
                              , Arg0 , Arg1 , Arg2
                            >
                        >(Env &)
                    >::type
                    type;
            };
        }
        template <
            typename Env
          , typename F
          , typename Arg0 , typename Arg1 , typename Arg2
        >
        typename boost::result_of<
            boost::fusion::fused<
                detail::bound_functor3<
                    F
                  , Arg0 , Arg1 , Arg2
                >
            >(Env &)
        >::type
        eval(
            Env & env
          , detail::bound_functor3<
                F
              , Arg0 , Arg1 , Arg2
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_functor3<
                        F
                      , Arg0 , Arg1 , Arg2
                    >
                >(f)(
                    env
                 );
        }
    }
    template <typename F
      , typename A0 , typename A1 , typename A2
    >
    typename boost::disable_if<
        hpx::traits::is_action<typename detail::remove_reference<F>::type>
      , detail::bound_functor3<
            typename detail::remove_reference<F>::type
          , typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type
        >
    >::type
    bind(
        BOOST_FWD_REF(F) f
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2
    )
    {
        return
            detail::bound_functor3<
                typename detail::remove_reference<F>::type
              , typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type
            >(
                boost::forward<F>(f)
              , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )
            );
    }
}}
namespace boost {
    template <
        typename F
      , typename Arg0 , typename Arg1 , typename Arg2
    >
    struct result_of<
        hpx::util::detail::bound_functor3<
            F
          , Arg0 , Arg1 , Arg2
        >()
    >
    {
        typedef
            typename hpx::util::detail::result_of::
                bound_functor3<
                    F()
                  , Arg0 , Arg1 , Arg2
                >::type
            type;
    };
}
namespace boost { namespace serialization
{
    
    
    template <typename F, typename Arg0 , typename Arg1 , typename Arg2>
    void serialize(hpx::util::portable_binary_iarchive& ar
      , hpx::util::detail::bound_functor3<
            F, Arg0 , Arg1 , Arg2
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0; ar & bound.arg1; ar & bound.arg2;
    }
    template <typename F, typename Arg0 , typename Arg1 , typename Arg2>
    void serialize(hpx::util::portable_binary_oarchive& ar
      , hpx::util::detail::bound_functor3<
            F, Arg0 , Arg1 , Arg2
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0; ar & bound.arg1; ar & bound.arg2;
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <
            typename R
          , typename T0 , typename T1 , typename T2 , typename T3
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3
        >
        struct bound_function4
        {
            typedef R result_type;
            typedef R(*function_pointer_type)(T0 , T1 , T2 , T3);
            function_pointer_type f;
            bound_function4(
                    bound_function4 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2) , arg3(other.arg3)
            {}
            bound_function4(
                    BOOST_RV_REF(bound_function4) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2)) , arg3(boost::move(other.arg3))
            {}
            bound_function4 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_function4) other)
            {
                f = other.f;
                arg0 = other.arg0; arg1 = other.arg1; arg2 = other.arg2; arg3 = other.arg3;
                return *this;
            }
            bound_function4 & operator=(
                BOOST_RV_REF(bound_function4) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0); arg1 = boost::move(other.arg1); arg2 = boost::move(other.arg2); arg3 = boost::move(other.arg3);
                return *this;
            }
            template <typename A0 , typename A1 , typename A2 , typename A3>
            bound_function4(
                function_pointer_type f
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3
            )
                : f(f)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3))
            {}
            BOOST_FORCEINLINE R operator()() const
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return f(::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3));
            }
            BOOST_FORCEINLINE R operator()()
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return f(::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3));
            }
            template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) const { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0; typename boost::remove_const< typename decay<Arg1>::type >::type arg1; typename boost::remove_const< typename decay<Arg2>::type >::type arg2; typename boost::remove_const< typename decay<Arg3>::type >::type arg3;
        private:
            BOOST_COPYABLE_AND_MOVABLE(bound_function4);
        };
        namespace result_of
        {
            template <
                typename Env
              , typename R
              , typename T0 , typename T1 , typename T2 , typename T3
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3
            >
            struct eval<Env,
                detail::bound_function4<
                    R
                  , T0 , T1 , T2 , T3
                  , Arg0 , Arg1 , Arg2 , Arg3
                >
            >
            {
                typedef R type;
            };
        }
        template <
            typename Env
          , typename R
          , typename T0 , typename T1 , typename T2 , typename T3
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3
        >
        R
        eval(
            Env & env
          , detail::bound_function4<
                R
              , T0 , T1 , T2 , T3
              , Arg0 , Arg1 , Arg2 , Arg3
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_function4<
                        R
                      , T0 , T1 , T2 , T3
                      , Arg0 , Arg1 , Arg2 , Arg3
                    >
                >(f)(
                    env
                 );
        }
    }
    template <
        typename R
      , typename T0 , typename T1 , typename T2 , typename T3
      , typename A0 , typename A1 , typename A2 , typename A3
    >
    detail::bound_function4<
        R
      , T0 , T1 , T2 , T3
      , typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type
    >
    bind(
        R(*f)(T0 , T1 , T2 , T3)
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3
    )
    {
        return
            detail::bound_function4<
                R
              , T0 , T1 , T2 , T3
              , typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type
            >
            (f, boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ));
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <
            typename R
          , typename C
          , typename T0 , typename T1 , typename T2
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3
        >
        struct bound_member_function4
        {
            typedef R result_type;
            typedef R(C::*function_pointer_type)(
                T0 , T1 , T2);
            function_pointer_type f;
            template <typename A0 , typename A1 , typename A2 , typename A3>
            bound_member_function4(
                function_pointer_type f
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3
            )
                : f(f)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3))
            {}
            bound_member_function4(
                    bound_member_function4 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2) , arg3(other.arg3)
            {}
            bound_member_function4(BOOST_RV_REF(
                    bound_member_function4) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2)) , arg3(boost::move(other.arg3))
            {}
            bound_member_function4 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_member_function4) other)
            {
                f = other.f;
                arg0 = other.arg0; arg1 = other.arg1; arg2 = other.arg2; arg3 = other.arg3;
                return *this;
            }
            bound_member_function4 & operator=(
                BOOST_RV_REF(bound_member_function4) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0); arg1 = boost::move(other.arg1); arg2 = boost::move(other.arg2); arg3 = boost::move(other.arg3);
                return *this;
            }
            BOOST_FORCEINLINE R operator()() const
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3));
            }
            BOOST_FORCEINLINE R operator()()
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3));
            }
    template <typename A0>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple1<
                typename detail::env_value_type<A0>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3));
    }
    template <typename A0>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple1<
                typename detail::env_value_type<A0>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3));
    }
    template <typename A0 , typename A1>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple2<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3));
    }
    template <typename A0 , typename A1>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple2<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3));
    }
    template <typename A0 , typename A1 , typename A2>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple3<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3));
    }
    template <typename A0 , typename A1 , typename A2>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple3<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple4<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple4<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple5<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple5<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple6<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple6<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple7<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple7<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple8<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type , typename detail::env_value_type<A7>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple8<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type , typename detail::env_value_type<A7>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3));
    }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0; typename boost::remove_const< typename decay<Arg1>::type >::type arg1; typename boost::remove_const< typename decay<Arg2>::type >::type arg2; typename boost::remove_const< typename decay<Arg3>::type >::type arg3;
        };
        template <
            typename R
          , typename C
          , typename T0 , typename T1 , typename T2
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3
        >
        struct bound_member_function4<
            R
          , C const
          , T0 , T1 , T2
          , Arg0 , Arg1 , Arg2 , Arg3
        >
        {
            typedef R result_type;
            typedef R(C::*function_pointer_type)(
                T0 , T1 , T2) const;
            function_pointer_type f;
            template <typename A0 , typename A1 , typename A2 , typename A3>
            bound_member_function4(
                function_pointer_type f
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3
            )
                : f(f)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3))
            {}
            bound_member_function4(
                    bound_member_function4 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2) , arg3(other.arg3)
            {}
            bound_member_function4(
                    BOOST_RV_REF(bound_member_function4) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2)) , arg3(boost::move(other.arg3))
            {}
            bound_member_function4 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_member_function4) other)
            {
                f = other.f;
                arg0 = other.arg0; arg1 = other.arg1; arg2 = other.arg2; arg3 = other.arg3;
                return *this;
            }
            bound_member_function4 & operator=(
                BOOST_RV_REF(bound_member_function4) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0); arg1 = boost::move(other.arg1); arg2 = boost::move(other.arg2); arg3 = boost::move(other.arg3);
                return *this;
            }
            BOOST_FORCEINLINE R operator()() const
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3));
            }
            BOOST_FORCEINLINE R operator()()
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3));
            }
            template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) { using detail::get_pointer; typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) const { using detail::get_pointer; typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { using detail::get_pointer; typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { using detail::get_pointer; typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { using detail::get_pointer; typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { using detail::get_pointer; typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { using detail::get_pointer; typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { using detail::get_pointer; typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { using detail::get_pointer; typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { using detail::get_pointer; typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { using detail::get_pointer; typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { using detail::get_pointer; typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { using detail::get_pointer; typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { using detail::get_pointer; typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0; typename boost::remove_const< typename decay<Arg1>::type >::type arg1; typename boost::remove_const< typename decay<Arg2>::type >::type arg2; typename boost::remove_const< typename decay<Arg3>::type >::type arg3;
        };
        namespace result_of
        {
            template <
                typename Env
              , typename R
              , typename C
              , typename T0 , typename T1 , typename T2
              ,
                  typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3
            >
            struct eval<Env,
                detail::bound_member_function4<
                    R
                  , C
                  , T0 , T1 , T2
                  , Arg0 , Arg1 , Arg2 , Arg3
                >
            >
            {
                typedef R type;
            };
        }
        template <
            typename Env
          , typename R
          , typename C
          , typename T0 , typename T1 , typename T2
          ,
              typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3
        >
        R
        eval(
            Env & env
          , detail::bound_member_function4<
                R
              , C
              , T0 , T1 , T2
              , Arg0 , Arg1 , Arg2 , Arg3
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_member_function4<
                        R
                      , C
                      , T0 , T1 , T2
                        ,
                        Arg0 , Arg1 , Arg2 , Arg3
                    >
                >(f)(
                    env
                 );
        }
    }
    template <
        typename R
      , typename C
      , typename T0 , typename T1 , typename T2
      , typename A0 , typename A1 , typename A2 , typename A3
    >
    detail::bound_member_function4<
        R
      , C
      , T0 , T1 , T2
      ,
        typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type
    >
    bind(
        R(C::*f)(T0 , T1 , T2)
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3
    )
    {
        return
            detail::bound_member_function4<
                R
              , C
              , T0 , T1 , T2
                ,
                typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type
            >
            (f, boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ));
    }
    template <
        typename R
      , typename C
      , typename T0 , typename T1 , typename T2
      , typename A0 , typename A1 , typename A2 , typename A3
    >
    detail::bound_member_function4<
        R
      , C const
      , T0 , T1 , T2
      ,
        typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type
    >
    bind(
        R(C::*f)(T0 , T1 , T2) const
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3
    )
    {
        return
            detail::bound_member_function4<
                R
              , C const
              , T0 , T1 , T2
              ,
                  typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type
            >
            (f, boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ));
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        namespace result_of
        {
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3
              , typename Enable = typename boost::mpl::fold<
                    boost::mpl::vector<Arg0 , Arg1 , Arg2 , Arg3>
                  , boost::mpl::false_
                  , boost::mpl::or_<
                        placeholders::is_placeholder<boost::mpl::_2>
                      , boost::mpl::_1
                    >
                >::type
            >
            struct bound_functor4;
            template < typename F , typename A0 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 > struct bound_functor4< F(A0) , Arg0 , Arg1 , Arg2 , Arg3 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple1< typename detail::env_value_type<A0>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 > struct bound_functor4< F(A0 , A1) , Arg0 , Arg1 , Arg2 , Arg3 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 > struct bound_functor4< F(A0 , A1 , A2) , Arg0 , Arg1 , Arg2 , Arg3 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 > struct bound_functor4< F(A0 , A1 , A2 , A3) , Arg0 , Arg1 , Arg2 , Arg3 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 > struct bound_functor4< F(A0 , A1 , A2 , A3 , A4) , Arg0 , Arg1 , Arg2 , Arg3 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 > struct bound_functor4< F(A0 , A1 , A2 , A3 , A4 , A5) , Arg0 , Arg1 , Arg2 , Arg3 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 > struct bound_functor4< F(A0 , A1 , A2 , A3 , A4 , A5 , A6) , Arg0 , Arg1 , Arg2 , Arg3 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type ) >::type type; };
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3
            >
            struct bound_functor4<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>
            {
                typedef
                    typename boost::result_of<
                        typename boost::remove_reference<
                            typename detail::result_of::eval<
                                hpx::util::tuple0<>
                              , F
                            >::type
                        >::type(
                            typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type
                        )
                    >::type
                    type;
            };
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3
            >
            struct bound_functor4<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3
              , boost::mpl::true_
            >
            {
                typedef
                    detail::not_enough_parameters
                    type;
            };
        }
        template <
            typename F
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3
        >
        struct bound_functor4
        {
            typedef typename boost::remove_const<F>::type functor_type;
            functor_type f;
            template <typename Sig>
            struct result;
            template <typename This>
            struct result<This()>
            {
                typedef
                    typename result_of::bound_functor4<
                        F()
                      , Arg0 , Arg1 , Arg2 , Arg3
                    >::type
                    type;
            };
            
            bound_functor4()
            {}
            template <typename A0 , typename A1 , typename A2 , typename A3>
            bound_functor4(
                BOOST_RV_REF(F) f_
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3
            )
                : f(boost::move(f_))
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3))
            {}
            template <typename A0 , typename A1 , typename A2 , typename A3>
            bound_functor4(
                F const & f_
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3
            )
                : f(f_)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3))
            {}
            bound_functor4(
                    bound_functor4 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2) , arg3(other.arg3)
            {}
            bound_functor4(
                    BOOST_RV_REF(bound_functor4) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2)) , arg3(boost::move(other.arg3))
            {}
            bound_functor4 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_functor4) other)
            {
                f = other.f;
                arg0 = other.arg0; arg1 = other.arg1; arg2 = other.arg2; arg3 = other.arg3;
                return *this;
            }
            bound_functor4 & operator=(
                BOOST_RV_REF(bound_functor4) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0); arg1 = boost::move(other.arg1); arg2 = boost::move(other.arg2); arg3 = boost::move(other.arg3);
                return *this;
            }
            BOOST_FORCEINLINE
            typename result_of::bound_functor4<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3
            >::type
            operator()()
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return eval(env, f)(::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3));
            }
            BOOST_FORCEINLINE
            typename result_of::bound_functor4<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3
            >::type
            operator()() const
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return eval(env, f)(::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3));
            }
            template <typename This, typename A0> struct result<This(A0)> { typedef typename result_of::bound_functor4< F(A0), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type type; }; template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor4< F(A0), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) const { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor4< F(A0), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename This, typename A0 , typename A1> struct result<This(A0 , A1)> { typedef typename result_of::bound_functor4< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type type; }; template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor4< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor4< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename This, typename A0 , typename A1 , typename A2> struct result<This(A0 , A1 , A2)> { typedef typename result_of::bound_functor4< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor4< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor4< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3> struct result<This(A0 , A1 , A2 , A3)> { typedef typename result_of::bound_functor4< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor4< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor4< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4> struct result<This(A0 , A1 , A2 , A3 , A4)> { typedef typename result_of::bound_functor4< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor4< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor4< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> struct result<This(A0 , A1 , A2 , A3 , A4 , A5)> { typedef typename result_of::bound_functor4< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor4< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor4< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> struct result<This(A0 , A1 , A2 , A3 , A4 , A5 , A6)> { typedef typename result_of::bound_functor4< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor4< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor4< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0; typename boost::remove_const< typename decay<Arg1>::type >::type arg1; typename boost::remove_const< typename decay<Arg2>::type >::type arg2; typename boost::remove_const< typename decay<Arg3>::type >::type arg3;
        };
        namespace result_of
        {
            template <typename Env
              , typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3
            >
            struct eval<
                Env
              , detail::bound_functor4<
                    F
                  , Arg0 , Arg1 , Arg2 , Arg3
                >
            >
            {
                typedef
                    typename boost::result_of<
                        boost::fusion::fused<
                            detail::bound_functor4<
                                F
                              , Arg0 , Arg1 , Arg2 , Arg3
                            >
                        >(Env &)
                    >::type
                    type;
            };
        }
        template <
            typename Env
          , typename F
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3
        >
        typename boost::result_of<
            boost::fusion::fused<
                detail::bound_functor4<
                    F
                  , Arg0 , Arg1 , Arg2 , Arg3
                >
            >(Env &)
        >::type
        eval(
            Env & env
          , detail::bound_functor4<
                F
              , Arg0 , Arg1 , Arg2 , Arg3
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_functor4<
                        F
                      , Arg0 , Arg1 , Arg2 , Arg3
                    >
                >(f)(
                    env
                 );
        }
    }
    template <typename F
      , typename A0 , typename A1 , typename A2 , typename A3
    >
    typename boost::disable_if<
        hpx::traits::is_action<typename detail::remove_reference<F>::type>
      , detail::bound_functor4<
            typename detail::remove_reference<F>::type
          , typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type
        >
    >::type
    bind(
        BOOST_FWD_REF(F) f
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3
    )
    {
        return
            detail::bound_functor4<
                typename detail::remove_reference<F>::type
              , typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type
            >(
                boost::forward<F>(f)
              , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )
            );
    }
}}
namespace boost {
    template <
        typename F
      , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3
    >
    struct result_of<
        hpx::util::detail::bound_functor4<
            F
          , Arg0 , Arg1 , Arg2 , Arg3
        >()
    >
    {
        typedef
            typename hpx::util::detail::result_of::
                bound_functor4<
                    F()
                  , Arg0 , Arg1 , Arg2 , Arg3
                >::type
            type;
    };
}
namespace boost { namespace serialization
{
    
    
    template <typename F, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3>
    void serialize(hpx::util::portable_binary_iarchive& ar
      , hpx::util::detail::bound_functor4<
            F, Arg0 , Arg1 , Arg2 , Arg3
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0; ar & bound.arg1; ar & bound.arg2; ar & bound.arg3;
    }
    template <typename F, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3>
    void serialize(hpx::util::portable_binary_oarchive& ar
      , hpx::util::detail::bound_functor4<
            F, Arg0 , Arg1 , Arg2 , Arg3
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0; ar & bound.arg1; ar & bound.arg2; ar & bound.arg3;
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <
            typename R
          , typename T0 , typename T1 , typename T2 , typename T3 , typename T4
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4
        >
        struct bound_function5
        {
            typedef R result_type;
            typedef R(*function_pointer_type)(T0 , T1 , T2 , T3 , T4);
            function_pointer_type f;
            bound_function5(
                    bound_function5 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2) , arg3(other.arg3) , arg4(other.arg4)
            {}
            bound_function5(
                    BOOST_RV_REF(bound_function5) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2)) , arg3(boost::move(other.arg3)) , arg4(boost::move(other.arg4))
            {}
            bound_function5 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_function5) other)
            {
                f = other.f;
                arg0 = other.arg0; arg1 = other.arg1; arg2 = other.arg2; arg3 = other.arg3; arg4 = other.arg4;
                return *this;
            }
            bound_function5 & operator=(
                BOOST_RV_REF(bound_function5) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0); arg1 = boost::move(other.arg1); arg2 = boost::move(other.arg2); arg3 = boost::move(other.arg3); arg4 = boost::move(other.arg4);
                return *this;
            }
            template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
            bound_function5(
                function_pointer_type f
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4
            )
                : f(f)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3)) , arg4(boost::forward<A4>(a4))
            {}
            BOOST_FORCEINLINE R operator()() const
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return f(::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4));
            }
            BOOST_FORCEINLINE R operator()()
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return f(::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4));
            }
            template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) const { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0; typename boost::remove_const< typename decay<Arg1>::type >::type arg1; typename boost::remove_const< typename decay<Arg2>::type >::type arg2; typename boost::remove_const< typename decay<Arg3>::type >::type arg3; typename boost::remove_const< typename decay<Arg4>::type >::type arg4;
        private:
            BOOST_COPYABLE_AND_MOVABLE(bound_function5);
        };
        namespace result_of
        {
            template <
                typename Env
              , typename R
              , typename T0 , typename T1 , typename T2 , typename T3 , typename T4
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4
            >
            struct eval<Env,
                detail::bound_function5<
                    R
                  , T0 , T1 , T2 , T3 , T4
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
                >
            >
            {
                typedef R type;
            };
        }
        template <
            typename Env
          , typename R
          , typename T0 , typename T1 , typename T2 , typename T3 , typename T4
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4
        >
        R
        eval(
            Env & env
          , detail::bound_function5<
                R
              , T0 , T1 , T2 , T3 , T4
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_function5<
                        R
                      , T0 , T1 , T2 , T3 , T4
                      , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
                    >
                >(f)(
                    env
                 );
        }
    }
    template <
        typename R
      , typename T0 , typename T1 , typename T2 , typename T3 , typename T4
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4
    >
    detail::bound_function5<
        R
      , T0 , T1 , T2 , T3 , T4
      , typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type
    >
    bind(
        R(*f)(T0 , T1 , T2 , T3 , T4)
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4
    )
    {
        return
            detail::bound_function5<
                R
              , T0 , T1 , T2 , T3 , T4
              , typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type
            >
            (f, boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ));
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <
            typename R
          , typename C
          , typename T0 , typename T1 , typename T2 , typename T3
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4
        >
        struct bound_member_function5
        {
            typedef R result_type;
            typedef R(C::*function_pointer_type)(
                T0 , T1 , T2 , T3);
            function_pointer_type f;
            template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
            bound_member_function5(
                function_pointer_type f
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4
            )
                : f(f)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3)) , arg4(boost::forward<A4>(a4))
            {}
            bound_member_function5(
                    bound_member_function5 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2) , arg3(other.arg3) , arg4(other.arg4)
            {}
            bound_member_function5(BOOST_RV_REF(
                    bound_member_function5) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2)) , arg3(boost::move(other.arg3)) , arg4(boost::move(other.arg4))
            {}
            bound_member_function5 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_member_function5) other)
            {
                f = other.f;
                arg0 = other.arg0; arg1 = other.arg1; arg2 = other.arg2; arg3 = other.arg3; arg4 = other.arg4;
                return *this;
            }
            bound_member_function5 & operator=(
                BOOST_RV_REF(bound_member_function5) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0); arg1 = boost::move(other.arg1); arg2 = boost::move(other.arg2); arg3 = boost::move(other.arg3); arg4 = boost::move(other.arg4);
                return *this;
            }
            BOOST_FORCEINLINE R operator()() const
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4));
            }
            BOOST_FORCEINLINE R operator()()
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4));
            }
    template <typename A0>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple1<
                typename detail::env_value_type<A0>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4));
    }
    template <typename A0>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple1<
                typename detail::env_value_type<A0>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4));
    }
    template <typename A0 , typename A1>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple2<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4));
    }
    template <typename A0 , typename A1>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple2<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4));
    }
    template <typename A0 , typename A1 , typename A2>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple3<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4));
    }
    template <typename A0 , typename A1 , typename A2>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple3<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple4<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple4<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple5<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple5<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple6<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple6<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple7<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple7<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple8<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type , typename detail::env_value_type<A7>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple8<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type , typename detail::env_value_type<A7>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4));
    }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0; typename boost::remove_const< typename decay<Arg1>::type >::type arg1; typename boost::remove_const< typename decay<Arg2>::type >::type arg2; typename boost::remove_const< typename decay<Arg3>::type >::type arg3; typename boost::remove_const< typename decay<Arg4>::type >::type arg4;
        };
        template <
            typename R
          , typename C
          , typename T0 , typename T1 , typename T2 , typename T3
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4
        >
        struct bound_member_function5<
            R
          , C const
          , T0 , T1 , T2 , T3
          , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
        >
        {
            typedef R result_type;
            typedef R(C::*function_pointer_type)(
                T0 , T1 , T2 , T3) const;
            function_pointer_type f;
            template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
            bound_member_function5(
                function_pointer_type f
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4
            )
                : f(f)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3)) , arg4(boost::forward<A4>(a4))
            {}
            bound_member_function5(
                    bound_member_function5 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2) , arg3(other.arg3) , arg4(other.arg4)
            {}
            bound_member_function5(
                    BOOST_RV_REF(bound_member_function5) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2)) , arg3(boost::move(other.arg3)) , arg4(boost::move(other.arg4))
            {}
            bound_member_function5 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_member_function5) other)
            {
                f = other.f;
                arg0 = other.arg0; arg1 = other.arg1; arg2 = other.arg2; arg3 = other.arg3; arg4 = other.arg4;
                return *this;
            }
            bound_member_function5 & operator=(
                BOOST_RV_REF(bound_member_function5) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0); arg1 = boost::move(other.arg1); arg2 = boost::move(other.arg2); arg3 = boost::move(other.arg3); arg4 = boost::move(other.arg4);
                return *this;
            }
            BOOST_FORCEINLINE R operator()() const
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4));
            }
            BOOST_FORCEINLINE R operator()()
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4));
            }
            template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) { using detail::get_pointer; typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) const { using detail::get_pointer; typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { using detail::get_pointer; typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { using detail::get_pointer; typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { using detail::get_pointer; typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { using detail::get_pointer; typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { using detail::get_pointer; typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { using detail::get_pointer; typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { using detail::get_pointer; typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { using detail::get_pointer; typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { using detail::get_pointer; typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { using detail::get_pointer; typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { using detail::get_pointer; typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { using detail::get_pointer; typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0; typename boost::remove_const< typename decay<Arg1>::type >::type arg1; typename boost::remove_const< typename decay<Arg2>::type >::type arg2; typename boost::remove_const< typename decay<Arg3>::type >::type arg3; typename boost::remove_const< typename decay<Arg4>::type >::type arg4;
        };
        namespace result_of
        {
            template <
                typename Env
              , typename R
              , typename C
              , typename T0 , typename T1 , typename T2 , typename T3
              ,
                  typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4
            >
            struct eval<Env,
                detail::bound_member_function5<
                    R
                  , C
                  , T0 , T1 , T2 , T3
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
                >
            >
            {
                typedef R type;
            };
        }
        template <
            typename Env
          , typename R
          , typename C
          , typename T0 , typename T1 , typename T2 , typename T3
          ,
              typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4
        >
        R
        eval(
            Env & env
          , detail::bound_member_function5<
                R
              , C
              , T0 , T1 , T2 , T3
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_member_function5<
                        R
                      , C
                      , T0 , T1 , T2 , T3
                        ,
                        Arg0 , Arg1 , Arg2 , Arg3 , Arg4
                    >
                >(f)(
                    env
                 );
        }
    }
    template <
        typename R
      , typename C
      , typename T0 , typename T1 , typename T2 , typename T3
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4
    >
    detail::bound_member_function5<
        R
      , C
      , T0 , T1 , T2 , T3
      ,
        typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type
    >
    bind(
        R(C::*f)(T0 , T1 , T2 , T3)
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4
    )
    {
        return
            detail::bound_member_function5<
                R
              , C
              , T0 , T1 , T2 , T3
                ,
                typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type
            >
            (f, boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ));
    }
    template <
        typename R
      , typename C
      , typename T0 , typename T1 , typename T2 , typename T3
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4
    >
    detail::bound_member_function5<
        R
      , C const
      , T0 , T1 , T2 , T3
      ,
        typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type
    >
    bind(
        R(C::*f)(T0 , T1 , T2 , T3) const
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4
    )
    {
        return
            detail::bound_member_function5<
                R
              , C const
              , T0 , T1 , T2 , T3
              ,
                  typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type
            >
            (f, boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ));
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        namespace result_of
        {
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4
              , typename Enable = typename boost::mpl::fold<
                    boost::mpl::vector<Arg0 , Arg1 , Arg2 , Arg3 , Arg4>
                  , boost::mpl::false_
                  , boost::mpl::or_<
                        placeholders::is_placeholder<boost::mpl::_2>
                      , boost::mpl::_1
                    >
                >::type
            >
            struct bound_functor5;
            template < typename F , typename A0 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 > struct bound_functor5< F(A0) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple1< typename detail::env_value_type<A0>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 > struct bound_functor5< F(A0 , A1) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 > struct bound_functor5< F(A0 , A1 , A2) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 > struct bound_functor5< F(A0 , A1 , A2 , A3) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 > struct bound_functor5< F(A0 , A1 , A2 , A3 , A4) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 > struct bound_functor5< F(A0 , A1 , A2 , A3 , A4 , A5) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 > struct bound_functor5< F(A0 , A1 , A2 , A3 , A4 , A5 , A6) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type ) >::type type; };
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4
            >
            struct bound_functor5<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>
            {
                typedef
                    typename boost::result_of<
                        typename boost::remove_reference<
                            typename detail::result_of::eval<
                                hpx::util::tuple0<>
                              , F
                            >::type
                        >::type(
                            typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type
                        )
                    >::type
                    type;
            };
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4
            >
            struct bound_functor5<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
              , boost::mpl::true_
            >
            {
                typedef
                    detail::not_enough_parameters
                    type;
            };
        }
        template <
            typename F
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4
        >
        struct bound_functor5
        {
            typedef typename boost::remove_const<F>::type functor_type;
            functor_type f;
            template <typename Sig>
            struct result;
            template <typename This>
            struct result<This()>
            {
                typedef
                    typename result_of::bound_functor5<
                        F()
                      , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
                    >::type
                    type;
            };
            
            bound_functor5()
            {}
            template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
            bound_functor5(
                BOOST_RV_REF(F) f_
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4
            )
                : f(boost::move(f_))
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3)) , arg4(boost::forward<A4>(a4))
            {}
            template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
            bound_functor5(
                F const & f_
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4
            )
                : f(f_)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3)) , arg4(boost::forward<A4>(a4))
            {}
            bound_functor5(
                    bound_functor5 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2) , arg3(other.arg3) , arg4(other.arg4)
            {}
            bound_functor5(
                    BOOST_RV_REF(bound_functor5) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2)) , arg3(boost::move(other.arg3)) , arg4(boost::move(other.arg4))
            {}
            bound_functor5 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_functor5) other)
            {
                f = other.f;
                arg0 = other.arg0; arg1 = other.arg1; arg2 = other.arg2; arg3 = other.arg3; arg4 = other.arg4;
                return *this;
            }
            bound_functor5 & operator=(
                BOOST_RV_REF(bound_functor5) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0); arg1 = boost::move(other.arg1); arg2 = boost::move(other.arg2); arg3 = boost::move(other.arg3); arg4 = boost::move(other.arg4);
                return *this;
            }
            BOOST_FORCEINLINE
            typename result_of::bound_functor5<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
            >::type
            operator()()
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return eval(env, f)(::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4));
            }
            BOOST_FORCEINLINE
            typename result_of::bound_functor5<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
            >::type
            operator()() const
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return eval(env, f)(::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4));
            }
            template <typename This, typename A0> struct result<This(A0)> { typedef typename result_of::bound_functor5< F(A0), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type type; }; template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor5< F(A0), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) const { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor5< F(A0), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename This, typename A0 , typename A1> struct result<This(A0 , A1)> { typedef typename result_of::bound_functor5< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type type; }; template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor5< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor5< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename This, typename A0 , typename A1 , typename A2> struct result<This(A0 , A1 , A2)> { typedef typename result_of::bound_functor5< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor5< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor5< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3> struct result<This(A0 , A1 , A2 , A3)> { typedef typename result_of::bound_functor5< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor5< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor5< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4> struct result<This(A0 , A1 , A2 , A3 , A4)> { typedef typename result_of::bound_functor5< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor5< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor5< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> struct result<This(A0 , A1 , A2 , A3 , A4 , A5)> { typedef typename result_of::bound_functor5< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor5< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor5< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> struct result<This(A0 , A1 , A2 , A3 , A4 , A5 , A6)> { typedef typename result_of::bound_functor5< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor5< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor5< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0; typename boost::remove_const< typename decay<Arg1>::type >::type arg1; typename boost::remove_const< typename decay<Arg2>::type >::type arg2; typename boost::remove_const< typename decay<Arg3>::type >::type arg3; typename boost::remove_const< typename decay<Arg4>::type >::type arg4;
        };
        namespace result_of
        {
            template <typename Env
              , typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4
            >
            struct eval<
                Env
              , detail::bound_functor5<
                    F
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
                >
            >
            {
                typedef
                    typename boost::result_of<
                        boost::fusion::fused<
                            detail::bound_functor5<
                                F
                              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
                            >
                        >(Env &)
                    >::type
                    type;
            };
        }
        template <
            typename Env
          , typename F
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4
        >
        typename boost::result_of<
            boost::fusion::fused<
                detail::bound_functor5<
                    F
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
                >
            >(Env &)
        >::type
        eval(
            Env & env
          , detail::bound_functor5<
                F
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_functor5<
                        F
                      , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
                    >
                >(f)(
                    env
                 );
        }
    }
    template <typename F
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4
    >
    typename boost::disable_if<
        hpx::traits::is_action<typename detail::remove_reference<F>::type>
      , detail::bound_functor5<
            typename detail::remove_reference<F>::type
          , typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type
        >
    >::type
    bind(
        BOOST_FWD_REF(F) f
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4
    )
    {
        return
            detail::bound_functor5<
                typename detail::remove_reference<F>::type
              , typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type
            >(
                boost::forward<F>(f)
              , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )
            );
    }
}}
namespace boost {
    template <
        typename F
      , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4
    >
    struct result_of<
        hpx::util::detail::bound_functor5<
            F
          , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
        >()
    >
    {
        typedef
            typename hpx::util::detail::result_of::
                bound_functor5<
                    F()
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
                >::type
            type;
    };
}
namespace boost { namespace serialization
{
    
    
    template <typename F, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4>
    void serialize(hpx::util::portable_binary_iarchive& ar
      , hpx::util::detail::bound_functor5<
            F, Arg0 , Arg1 , Arg2 , Arg3 , Arg4
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0; ar & bound.arg1; ar & bound.arg2; ar & bound.arg3; ar & bound.arg4;
    }
    template <typename F, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4>
    void serialize(hpx::util::portable_binary_oarchive& ar
      , hpx::util::detail::bound_functor5<
            F, Arg0 , Arg1 , Arg2 , Arg3 , Arg4
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0; ar & bound.arg1; ar & bound.arg2; ar & bound.arg3; ar & bound.arg4;
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <
            typename R
          , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5
        >
        struct bound_function6
        {
            typedef R result_type;
            typedef R(*function_pointer_type)(T0 , T1 , T2 , T3 , T4 , T5);
            function_pointer_type f;
            bound_function6(
                    bound_function6 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2) , arg3(other.arg3) , arg4(other.arg4) , arg5(other.arg5)
            {}
            bound_function6(
                    BOOST_RV_REF(bound_function6) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2)) , arg3(boost::move(other.arg3)) , arg4(boost::move(other.arg4)) , arg5(boost::move(other.arg5))
            {}
            bound_function6 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_function6) other)
            {
                f = other.f;
                arg0 = other.arg0; arg1 = other.arg1; arg2 = other.arg2; arg3 = other.arg3; arg4 = other.arg4; arg5 = other.arg5;
                return *this;
            }
            bound_function6 & operator=(
                BOOST_RV_REF(bound_function6) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0); arg1 = boost::move(other.arg1); arg2 = boost::move(other.arg2); arg3 = boost::move(other.arg3); arg4 = boost::move(other.arg4); arg5 = boost::move(other.arg5);
                return *this;
            }
            template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
            bound_function6(
                function_pointer_type f
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5
            )
                : f(f)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3)) , arg4(boost::forward<A4>(a4)) , arg5(boost::forward<A5>(a5))
            {}
            BOOST_FORCEINLINE R operator()() const
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return f(::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5));
            }
            BOOST_FORCEINLINE R operator()()
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return f(::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5));
            }
            template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) const { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0; typename boost::remove_const< typename decay<Arg1>::type >::type arg1; typename boost::remove_const< typename decay<Arg2>::type >::type arg2; typename boost::remove_const< typename decay<Arg3>::type >::type arg3; typename boost::remove_const< typename decay<Arg4>::type >::type arg4; typename boost::remove_const< typename decay<Arg5>::type >::type arg5;
        private:
            BOOST_COPYABLE_AND_MOVABLE(bound_function6);
        };
        namespace result_of
        {
            template <
                typename Env
              , typename R
              , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5
            >
            struct eval<Env,
                detail::bound_function6<
                    R
                  , T0 , T1 , T2 , T3 , T4 , T5
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
                >
            >
            {
                typedef R type;
            };
        }
        template <
            typename Env
          , typename R
          , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5
        >
        R
        eval(
            Env & env
          , detail::bound_function6<
                R
              , T0 , T1 , T2 , T3 , T4 , T5
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_function6<
                        R
                      , T0 , T1 , T2 , T3 , T4 , T5
                      , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
                    >
                >(f)(
                    env
                 );
        }
    }
    template <
        typename R
      , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5
    >
    detail::bound_function6<
        R
      , T0 , T1 , T2 , T3 , T4 , T5
      , typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type , typename detail::remove_reference<A5>::type
    >
    bind(
        R(*f)(T0 , T1 , T2 , T3 , T4 , T5)
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5
    )
    {
        return
            detail::bound_function6<
                R
              , T0 , T1 , T2 , T3 , T4 , T5
              , typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type , typename detail::remove_reference<A5>::type
            >
            (f, boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ));
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <
            typename R
          , typename C
          , typename T0 , typename T1 , typename T2 , typename T3 , typename T4
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5
        >
        struct bound_member_function6
        {
            typedef R result_type;
            typedef R(C::*function_pointer_type)(
                T0 , T1 , T2 , T3 , T4);
            function_pointer_type f;
            template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
            bound_member_function6(
                function_pointer_type f
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5
            )
                : f(f)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3)) , arg4(boost::forward<A4>(a4)) , arg5(boost::forward<A5>(a5))
            {}
            bound_member_function6(
                    bound_member_function6 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2) , arg3(other.arg3) , arg4(other.arg4) , arg5(other.arg5)
            {}
            bound_member_function6(BOOST_RV_REF(
                    bound_member_function6) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2)) , arg3(boost::move(other.arg3)) , arg4(boost::move(other.arg4)) , arg5(boost::move(other.arg5))
            {}
            bound_member_function6 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_member_function6) other)
            {
                f = other.f;
                arg0 = other.arg0; arg1 = other.arg1; arg2 = other.arg2; arg3 = other.arg3; arg4 = other.arg4; arg5 = other.arg5;
                return *this;
            }
            bound_member_function6 & operator=(
                BOOST_RV_REF(bound_member_function6) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0); arg1 = boost::move(other.arg1); arg2 = boost::move(other.arg2); arg3 = boost::move(other.arg3); arg4 = boost::move(other.arg4); arg5 = boost::move(other.arg5);
                return *this;
            }
            BOOST_FORCEINLINE R operator()() const
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5));
            }
            BOOST_FORCEINLINE R operator()()
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5));
            }
    template <typename A0>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple1<
                typename detail::env_value_type<A0>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5));
    }
    template <typename A0>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple1<
                typename detail::env_value_type<A0>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5));
    }
    template <typename A0 , typename A1>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple2<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5));
    }
    template <typename A0 , typename A1>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple2<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5));
    }
    template <typename A0 , typename A1 , typename A2>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple3<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5));
    }
    template <typename A0 , typename A1 , typename A2>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple3<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple4<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple4<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple5<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple5<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple6<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple6<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple7<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple7<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple8<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type , typename detail::env_value_type<A7>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple8<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type , typename detail::env_value_type<A7>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5));
    }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0; typename boost::remove_const< typename decay<Arg1>::type >::type arg1; typename boost::remove_const< typename decay<Arg2>::type >::type arg2; typename boost::remove_const< typename decay<Arg3>::type >::type arg3; typename boost::remove_const< typename decay<Arg4>::type >::type arg4; typename boost::remove_const< typename decay<Arg5>::type >::type arg5;
        };
        template <
            typename R
          , typename C
          , typename T0 , typename T1 , typename T2 , typename T3 , typename T4
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5
        >
        struct bound_member_function6<
            R
          , C const
          , T0 , T1 , T2 , T3 , T4
          , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
        >
        {
            typedef R result_type;
            typedef R(C::*function_pointer_type)(
                T0 , T1 , T2 , T3 , T4) const;
            function_pointer_type f;
            template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
            bound_member_function6(
                function_pointer_type f
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5
            )
                : f(f)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3)) , arg4(boost::forward<A4>(a4)) , arg5(boost::forward<A5>(a5))
            {}
            bound_member_function6(
                    bound_member_function6 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2) , arg3(other.arg3) , arg4(other.arg4) , arg5(other.arg5)
            {}
            bound_member_function6(
                    BOOST_RV_REF(bound_member_function6) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2)) , arg3(boost::move(other.arg3)) , arg4(boost::move(other.arg4)) , arg5(boost::move(other.arg5))
            {}
            bound_member_function6 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_member_function6) other)
            {
                f = other.f;
                arg0 = other.arg0; arg1 = other.arg1; arg2 = other.arg2; arg3 = other.arg3; arg4 = other.arg4; arg5 = other.arg5;
                return *this;
            }
            bound_member_function6 & operator=(
                BOOST_RV_REF(bound_member_function6) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0); arg1 = boost::move(other.arg1); arg2 = boost::move(other.arg2); arg3 = boost::move(other.arg3); arg4 = boost::move(other.arg4); arg5 = boost::move(other.arg5);
                return *this;
            }
            BOOST_FORCEINLINE R operator()() const
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5));
            }
            BOOST_FORCEINLINE R operator()()
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5));
            }
            template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) { using detail::get_pointer; typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) const { using detail::get_pointer; typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { using detail::get_pointer; typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { using detail::get_pointer; typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { using detail::get_pointer; typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { using detail::get_pointer; typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { using detail::get_pointer; typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { using detail::get_pointer; typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { using detail::get_pointer; typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { using detail::get_pointer; typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { using detail::get_pointer; typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { using detail::get_pointer; typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { using detail::get_pointer; typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { using detail::get_pointer; typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0; typename boost::remove_const< typename decay<Arg1>::type >::type arg1; typename boost::remove_const< typename decay<Arg2>::type >::type arg2; typename boost::remove_const< typename decay<Arg3>::type >::type arg3; typename boost::remove_const< typename decay<Arg4>::type >::type arg4; typename boost::remove_const< typename decay<Arg5>::type >::type arg5;
        };
        namespace result_of
        {
            template <
                typename Env
              , typename R
              , typename C
              , typename T0 , typename T1 , typename T2 , typename T3 , typename T4
              ,
                  typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5
            >
            struct eval<Env,
                detail::bound_member_function6<
                    R
                  , C
                  , T0 , T1 , T2 , T3 , T4
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
                >
            >
            {
                typedef R type;
            };
        }
        template <
            typename Env
          , typename R
          , typename C
          , typename T0 , typename T1 , typename T2 , typename T3 , typename T4
          ,
              typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5
        >
        R
        eval(
            Env & env
          , detail::bound_member_function6<
                R
              , C
              , T0 , T1 , T2 , T3 , T4
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_member_function6<
                        R
                      , C
                      , T0 , T1 , T2 , T3 , T4
                        ,
                        Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
                    >
                >(f)(
                    env
                 );
        }
    }
    template <
        typename R
      , typename C
      , typename T0 , typename T1 , typename T2 , typename T3 , typename T4
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5
    >
    detail::bound_member_function6<
        R
      , C
      , T0 , T1 , T2 , T3 , T4
      ,
        typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type , typename detail::remove_reference<A5>::type
    >
    bind(
        R(C::*f)(T0 , T1 , T2 , T3 , T4)
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5
    )
    {
        return
            detail::bound_member_function6<
                R
              , C
              , T0 , T1 , T2 , T3 , T4
                ,
                typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type , typename detail::remove_reference<A5>::type
            >
            (f, boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ));
    }
    template <
        typename R
      , typename C
      , typename T0 , typename T1 , typename T2 , typename T3 , typename T4
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5
    >
    detail::bound_member_function6<
        R
      , C const
      , T0 , T1 , T2 , T3 , T4
      ,
        typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type , typename detail::remove_reference<A5>::type
    >
    bind(
        R(C::*f)(T0 , T1 , T2 , T3 , T4) const
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5
    )
    {
        return
            detail::bound_member_function6<
                R
              , C const
              , T0 , T1 , T2 , T3 , T4
              ,
                  typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type , typename detail::remove_reference<A5>::type
            >
            (f, boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ));
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        namespace result_of
        {
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5
              , typename Enable = typename boost::mpl::fold<
                    boost::mpl::vector<Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5>
                  , boost::mpl::false_
                  , boost::mpl::or_<
                        placeholders::is_placeholder<boost::mpl::_2>
                      , boost::mpl::_1
                    >
                >::type
            >
            struct bound_functor6;
            template < typename F , typename A0 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 > struct bound_functor6< F(A0) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple1< typename detail::env_value_type<A0>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg5>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 > struct bound_functor6< F(A0 , A1) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg5>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 > struct bound_functor6< F(A0 , A1 , A2) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg5>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 > struct bound_functor6< F(A0 , A1 , A2 , A3) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg5>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 > struct bound_functor6< F(A0 , A1 , A2 , A3 , A4) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg5>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 > struct bound_functor6< F(A0 , A1 , A2 , A3 , A4 , A5) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg5>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 > struct bound_functor6< F(A0 , A1 , A2 , A3 , A4 , A5 , A6) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg5>::type >::type >::type ) >::type type; };
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5
            >
            struct bound_functor6<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>
            {
                typedef
                    typename boost::result_of<
                        typename boost::remove_reference<
                            typename detail::result_of::eval<
                                hpx::util::tuple0<>
                              , F
                            >::type
                        >::type(
                            typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg5>::type >::type >::type
                        )
                    >::type
                    type;
            };
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5
            >
            struct bound_functor6<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
              , boost::mpl::true_
            >
            {
                typedef
                    detail::not_enough_parameters
                    type;
            };
        }
        template <
            typename F
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5
        >
        struct bound_functor6
        {
            typedef typename boost::remove_const<F>::type functor_type;
            functor_type f;
            template <typename Sig>
            struct result;
            template <typename This>
            struct result<This()>
            {
                typedef
                    typename result_of::bound_functor6<
                        F()
                      , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
                    >::type
                    type;
            };
            
            bound_functor6()
            {}
            template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
            bound_functor6(
                BOOST_RV_REF(F) f_
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5
            )
                : f(boost::move(f_))
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3)) , arg4(boost::forward<A4>(a4)) , arg5(boost::forward<A5>(a5))
            {}
            template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
            bound_functor6(
                F const & f_
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5
            )
                : f(f_)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3)) , arg4(boost::forward<A4>(a4)) , arg5(boost::forward<A5>(a5))
            {}
            bound_functor6(
                    bound_functor6 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2) , arg3(other.arg3) , arg4(other.arg4) , arg5(other.arg5)
            {}
            bound_functor6(
                    BOOST_RV_REF(bound_functor6) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2)) , arg3(boost::move(other.arg3)) , arg4(boost::move(other.arg4)) , arg5(boost::move(other.arg5))
            {}
            bound_functor6 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_functor6) other)
            {
                f = other.f;
                arg0 = other.arg0; arg1 = other.arg1; arg2 = other.arg2; arg3 = other.arg3; arg4 = other.arg4; arg5 = other.arg5;
                return *this;
            }
            bound_functor6 & operator=(
                BOOST_RV_REF(bound_functor6) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0); arg1 = boost::move(other.arg1); arg2 = boost::move(other.arg2); arg3 = boost::move(other.arg3); arg4 = boost::move(other.arg4); arg5 = boost::move(other.arg5);
                return *this;
            }
            BOOST_FORCEINLINE
            typename result_of::bound_functor6<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
            >::type
            operator()()
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return eval(env, f)(::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5));
            }
            BOOST_FORCEINLINE
            typename result_of::bound_functor6<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
            >::type
            operator()() const
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return eval(env, f)(::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5));
            }
            template <typename This, typename A0> struct result<This(A0)> { typedef typename result_of::bound_functor6< F(A0), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type type; }; template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor6< F(A0), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) const { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor6< F(A0), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename This, typename A0 , typename A1> struct result<This(A0 , A1)> { typedef typename result_of::bound_functor6< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type type; }; template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor6< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor6< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename This, typename A0 , typename A1 , typename A2> struct result<This(A0 , A1 , A2)> { typedef typename result_of::bound_functor6< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor6< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor6< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3> struct result<This(A0 , A1 , A2 , A3)> { typedef typename result_of::bound_functor6< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor6< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor6< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4> struct result<This(A0 , A1 , A2 , A3 , A4)> { typedef typename result_of::bound_functor6< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor6< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor6< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> struct result<This(A0 , A1 , A2 , A3 , A4 , A5)> { typedef typename result_of::bound_functor6< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor6< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor6< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> struct result<This(A0 , A1 , A2 , A3 , A4 , A5 , A6)> { typedef typename result_of::bound_functor6< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor6< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor6< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0; typename boost::remove_const< typename decay<Arg1>::type >::type arg1; typename boost::remove_const< typename decay<Arg2>::type >::type arg2; typename boost::remove_const< typename decay<Arg3>::type >::type arg3; typename boost::remove_const< typename decay<Arg4>::type >::type arg4; typename boost::remove_const< typename decay<Arg5>::type >::type arg5;
        };
        namespace result_of
        {
            template <typename Env
              , typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5
            >
            struct eval<
                Env
              , detail::bound_functor6<
                    F
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
                >
            >
            {
                typedef
                    typename boost::result_of<
                        boost::fusion::fused<
                            detail::bound_functor6<
                                F
                              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
                            >
                        >(Env &)
                    >::type
                    type;
            };
        }
        template <
            typename Env
          , typename F
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5
        >
        typename boost::result_of<
            boost::fusion::fused<
                detail::bound_functor6<
                    F
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
                >
            >(Env &)
        >::type
        eval(
            Env & env
          , detail::bound_functor6<
                F
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_functor6<
                        F
                      , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
                    >
                >(f)(
                    env
                 );
        }
    }
    template <typename F
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5
    >
    typename boost::disable_if<
        hpx::traits::is_action<typename detail::remove_reference<F>::type>
      , detail::bound_functor6<
            typename detail::remove_reference<F>::type
          , typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type , typename detail::remove_reference<A5>::type
        >
    >::type
    bind(
        BOOST_FWD_REF(F) f
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5
    )
    {
        return
            detail::bound_functor6<
                typename detail::remove_reference<F>::type
              , typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type , typename detail::remove_reference<A5>::type
            >(
                boost::forward<F>(f)
              , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )
            );
    }
}}
namespace boost {
    template <
        typename F
      , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5
    >
    struct result_of<
        hpx::util::detail::bound_functor6<
            F
          , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
        >()
    >
    {
        typedef
            typename hpx::util::detail::result_of::
                bound_functor6<
                    F()
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
                >::type
            type;
    };
}
namespace boost { namespace serialization
{
    
    
    template <typename F, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5>
    void serialize(hpx::util::portable_binary_iarchive& ar
      , hpx::util::detail::bound_functor6<
            F, Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0; ar & bound.arg1; ar & bound.arg2; ar & bound.arg3; ar & bound.arg4; ar & bound.arg5;
    }
    template <typename F, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5>
    void serialize(hpx::util::portable_binary_oarchive& ar
      , hpx::util::detail::bound_functor6<
            F, Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0; ar & bound.arg1; ar & bound.arg2; ar & bound.arg3; ar & bound.arg4; ar & bound.arg5;
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <
            typename R
          , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6
        >
        struct bound_function7
        {
            typedef R result_type;
            typedef R(*function_pointer_type)(T0 , T1 , T2 , T3 , T4 , T5 , T6);
            function_pointer_type f;
            bound_function7(
                    bound_function7 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2) , arg3(other.arg3) , arg4(other.arg4) , arg5(other.arg5) , arg6(other.arg6)
            {}
            bound_function7(
                    BOOST_RV_REF(bound_function7) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2)) , arg3(boost::move(other.arg3)) , arg4(boost::move(other.arg4)) , arg5(boost::move(other.arg5)) , arg6(boost::move(other.arg6))
            {}
            bound_function7 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_function7) other)
            {
                f = other.f;
                arg0 = other.arg0; arg1 = other.arg1; arg2 = other.arg2; arg3 = other.arg3; arg4 = other.arg4; arg5 = other.arg5; arg6 = other.arg6;
                return *this;
            }
            bound_function7 & operator=(
                BOOST_RV_REF(bound_function7) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0); arg1 = boost::move(other.arg1); arg2 = boost::move(other.arg2); arg3 = boost::move(other.arg3); arg4 = boost::move(other.arg4); arg5 = boost::move(other.arg5); arg6 = boost::move(other.arg6);
                return *this;
            }
            template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
            bound_function7(
                function_pointer_type f
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6
            )
                : f(f)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3)) , arg4(boost::forward<A4>(a4)) , arg5(boost::forward<A5>(a5)) , arg6(boost::forward<A6>(a6))
            {}
            BOOST_FORCEINLINE R operator()() const
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return f(::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6));
            }
            BOOST_FORCEINLINE R operator()()
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return f(::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6));
            }
            template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) const { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0; typename boost::remove_const< typename decay<Arg1>::type >::type arg1; typename boost::remove_const< typename decay<Arg2>::type >::type arg2; typename boost::remove_const< typename decay<Arg3>::type >::type arg3; typename boost::remove_const< typename decay<Arg4>::type >::type arg4; typename boost::remove_const< typename decay<Arg5>::type >::type arg5; typename boost::remove_const< typename decay<Arg6>::type >::type arg6;
        private:
            BOOST_COPYABLE_AND_MOVABLE(bound_function7);
        };
        namespace result_of
        {
            template <
                typename Env
              , typename R
              , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6
            >
            struct eval<Env,
                detail::bound_function7<
                    R
                  , T0 , T1 , T2 , T3 , T4 , T5 , T6
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
                >
            >
            {
                typedef R type;
            };
        }
        template <
            typename Env
          , typename R
          , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6
        >
        R
        eval(
            Env & env
          , detail::bound_function7<
                R
              , T0 , T1 , T2 , T3 , T4 , T5 , T6
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_function7<
                        R
                      , T0 , T1 , T2 , T3 , T4 , T5 , T6
                      , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
                    >
                >(f)(
                    env
                 );
        }
    }
    template <
        typename R
      , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6
    >
    detail::bound_function7<
        R
      , T0 , T1 , T2 , T3 , T4 , T5 , T6
      , typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type , typename detail::remove_reference<A5>::type , typename detail::remove_reference<A6>::type
    >
    bind(
        R(*f)(T0 , T1 , T2 , T3 , T4 , T5 , T6)
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6
    )
    {
        return
            detail::bound_function7<
                R
              , T0 , T1 , T2 , T3 , T4 , T5 , T6
              , typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type , typename detail::remove_reference<A5>::type , typename detail::remove_reference<A6>::type
            >
            (f, boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ));
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <
            typename R
          , typename C
          , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6
        >
        struct bound_member_function7
        {
            typedef R result_type;
            typedef R(C::*function_pointer_type)(
                T0 , T1 , T2 , T3 , T4 , T5);
            function_pointer_type f;
            template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
            bound_member_function7(
                function_pointer_type f
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6
            )
                : f(f)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3)) , arg4(boost::forward<A4>(a4)) , arg5(boost::forward<A5>(a5)) , arg6(boost::forward<A6>(a6))
            {}
            bound_member_function7(
                    bound_member_function7 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2) , arg3(other.arg3) , arg4(other.arg4) , arg5(other.arg5) , arg6(other.arg6)
            {}
            bound_member_function7(BOOST_RV_REF(
                    bound_member_function7) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2)) , arg3(boost::move(other.arg3)) , arg4(boost::move(other.arg4)) , arg5(boost::move(other.arg5)) , arg6(boost::move(other.arg6))
            {}
            bound_member_function7 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_member_function7) other)
            {
                f = other.f;
                arg0 = other.arg0; arg1 = other.arg1; arg2 = other.arg2; arg3 = other.arg3; arg4 = other.arg4; arg5 = other.arg5; arg6 = other.arg6;
                return *this;
            }
            bound_member_function7 & operator=(
                BOOST_RV_REF(bound_member_function7) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0); arg1 = boost::move(other.arg1); arg2 = boost::move(other.arg2); arg3 = boost::move(other.arg3); arg4 = boost::move(other.arg4); arg5 = boost::move(other.arg5); arg6 = boost::move(other.arg6);
                return *this;
            }
            BOOST_FORCEINLINE R operator()() const
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6));
            }
            BOOST_FORCEINLINE R operator()()
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6));
            }
    template <typename A0>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple1<
                typename detail::env_value_type<A0>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6));
    }
    template <typename A0>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple1<
                typename detail::env_value_type<A0>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6));
    }
    template <typename A0 , typename A1>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple2<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6));
    }
    template <typename A0 , typename A1>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple2<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6));
    }
    template <typename A0 , typename A1 , typename A2>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple3<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6));
    }
    template <typename A0 , typename A1 , typename A2>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple3<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple4<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple4<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple5<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple5<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple6<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple6<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple7<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple7<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple8<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type , typename detail::env_value_type<A7>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple8<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type , typename detail::env_value_type<A7>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6));
    }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0; typename boost::remove_const< typename decay<Arg1>::type >::type arg1; typename boost::remove_const< typename decay<Arg2>::type >::type arg2; typename boost::remove_const< typename decay<Arg3>::type >::type arg3; typename boost::remove_const< typename decay<Arg4>::type >::type arg4; typename boost::remove_const< typename decay<Arg5>::type >::type arg5; typename boost::remove_const< typename decay<Arg6>::type >::type arg6;
        };
        template <
            typename R
          , typename C
          , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6
        >
        struct bound_member_function7<
            R
          , C const
          , T0 , T1 , T2 , T3 , T4 , T5
          , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
        >
        {
            typedef R result_type;
            typedef R(C::*function_pointer_type)(
                T0 , T1 , T2 , T3 , T4 , T5) const;
            function_pointer_type f;
            template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
            bound_member_function7(
                function_pointer_type f
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6
            )
                : f(f)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3)) , arg4(boost::forward<A4>(a4)) , arg5(boost::forward<A5>(a5)) , arg6(boost::forward<A6>(a6))
            {}
            bound_member_function7(
                    bound_member_function7 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2) , arg3(other.arg3) , arg4(other.arg4) , arg5(other.arg5) , arg6(other.arg6)
            {}
            bound_member_function7(
                    BOOST_RV_REF(bound_member_function7) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2)) , arg3(boost::move(other.arg3)) , arg4(boost::move(other.arg4)) , arg5(boost::move(other.arg5)) , arg6(boost::move(other.arg6))
            {}
            bound_member_function7 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_member_function7) other)
            {
                f = other.f;
                arg0 = other.arg0; arg1 = other.arg1; arg2 = other.arg2; arg3 = other.arg3; arg4 = other.arg4; arg5 = other.arg5; arg6 = other.arg6;
                return *this;
            }
            bound_member_function7 & operator=(
                BOOST_RV_REF(bound_member_function7) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0); arg1 = boost::move(other.arg1); arg2 = boost::move(other.arg2); arg3 = boost::move(other.arg3); arg4 = boost::move(other.arg4); arg5 = boost::move(other.arg5); arg6 = boost::move(other.arg6);
                return *this;
            }
            BOOST_FORCEINLINE R operator()() const
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6));
            }
            BOOST_FORCEINLINE R operator()()
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6));
            }
            template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) { using detail::get_pointer; typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) const { using detail::get_pointer; typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { using detail::get_pointer; typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { using detail::get_pointer; typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { using detail::get_pointer; typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { using detail::get_pointer; typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { using detail::get_pointer; typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { using detail::get_pointer; typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { using detail::get_pointer; typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { using detail::get_pointer; typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { using detail::get_pointer; typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { using detail::get_pointer; typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { using detail::get_pointer; typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { using detail::get_pointer; typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0; typename boost::remove_const< typename decay<Arg1>::type >::type arg1; typename boost::remove_const< typename decay<Arg2>::type >::type arg2; typename boost::remove_const< typename decay<Arg3>::type >::type arg3; typename boost::remove_const< typename decay<Arg4>::type >::type arg4; typename boost::remove_const< typename decay<Arg5>::type >::type arg5; typename boost::remove_const< typename decay<Arg6>::type >::type arg6;
        };
        namespace result_of
        {
            template <
                typename Env
              , typename R
              , typename C
              , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5
              ,
                  typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6
            >
            struct eval<Env,
                detail::bound_member_function7<
                    R
                  , C
                  , T0 , T1 , T2 , T3 , T4 , T5
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
                >
            >
            {
                typedef R type;
            };
        }
        template <
            typename Env
          , typename R
          , typename C
          , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5
          ,
              typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6
        >
        R
        eval(
            Env & env
          , detail::bound_member_function7<
                R
              , C
              , T0 , T1 , T2 , T3 , T4 , T5
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_member_function7<
                        R
                      , C
                      , T0 , T1 , T2 , T3 , T4 , T5
                        ,
                        Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
                    >
                >(f)(
                    env
                 );
        }
    }
    template <
        typename R
      , typename C
      , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6
    >
    detail::bound_member_function7<
        R
      , C
      , T0 , T1 , T2 , T3 , T4 , T5
      ,
        typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type , typename detail::remove_reference<A5>::type , typename detail::remove_reference<A6>::type
    >
    bind(
        R(C::*f)(T0 , T1 , T2 , T3 , T4 , T5)
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6
    )
    {
        return
            detail::bound_member_function7<
                R
              , C
              , T0 , T1 , T2 , T3 , T4 , T5
                ,
                typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type , typename detail::remove_reference<A5>::type , typename detail::remove_reference<A6>::type
            >
            (f, boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ));
    }
    template <
        typename R
      , typename C
      , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6
    >
    detail::bound_member_function7<
        R
      , C const
      , T0 , T1 , T2 , T3 , T4 , T5
      ,
        typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type , typename detail::remove_reference<A5>::type , typename detail::remove_reference<A6>::type
    >
    bind(
        R(C::*f)(T0 , T1 , T2 , T3 , T4 , T5) const
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6
    )
    {
        return
            detail::bound_member_function7<
                R
              , C const
              , T0 , T1 , T2 , T3 , T4 , T5
              ,
                  typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type , typename detail::remove_reference<A5>::type , typename detail::remove_reference<A6>::type
            >
            (f, boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ));
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        namespace result_of
        {
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6
              , typename Enable = typename boost::mpl::fold<
                    boost::mpl::vector<Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6>
                  , boost::mpl::false_
                  , boost::mpl::or_<
                        placeholders::is_placeholder<boost::mpl::_2>
                      , boost::mpl::_1
                    >
                >::type
            >
            struct bound_functor7;
            template < typename F , typename A0 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 > struct bound_functor7< F(A0) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple1< typename detail::env_value_type<A0>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg5>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg6>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 > struct bound_functor7< F(A0 , A1) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg5>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg6>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 > struct bound_functor7< F(A0 , A1 , A2) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg5>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg6>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 > struct bound_functor7< F(A0 , A1 , A2 , A3) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg5>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg6>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 > struct bound_functor7< F(A0 , A1 , A2 , A3 , A4) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg5>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg6>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 > struct bound_functor7< F(A0 , A1 , A2 , A3 , A4 , A5) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg5>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg6>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 > struct bound_functor7< F(A0 , A1 , A2 , A3 , A4 , A5 , A6) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg5>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg6>::type >::type >::type ) >::type type; };
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6
            >
            struct bound_functor7<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>
            {
                typedef
                    typename boost::result_of<
                        typename boost::remove_reference<
                            typename detail::result_of::eval<
                                hpx::util::tuple0<>
                              , F
                            >::type
                        >::type(
                            typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg5>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg6>::type >::type >::type
                        )
                    >::type
                    type;
            };
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6
            >
            struct bound_functor7<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
              , boost::mpl::true_
            >
            {
                typedef
                    detail::not_enough_parameters
                    type;
            };
        }
        template <
            typename F
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6
        >
        struct bound_functor7
        {
            typedef typename boost::remove_const<F>::type functor_type;
            functor_type f;
            template <typename Sig>
            struct result;
            template <typename This>
            struct result<This()>
            {
                typedef
                    typename result_of::bound_functor7<
                        F()
                      , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
                    >::type
                    type;
            };
            
            bound_functor7()
            {}
            template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
            bound_functor7(
                BOOST_RV_REF(F) f_
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6
            )
                : f(boost::move(f_))
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3)) , arg4(boost::forward<A4>(a4)) , arg5(boost::forward<A5>(a5)) , arg6(boost::forward<A6>(a6))
            {}
            template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
            bound_functor7(
                F const & f_
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6
            )
                : f(f_)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3)) , arg4(boost::forward<A4>(a4)) , arg5(boost::forward<A5>(a5)) , arg6(boost::forward<A6>(a6))
            {}
            bound_functor7(
                    bound_functor7 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2) , arg3(other.arg3) , arg4(other.arg4) , arg5(other.arg5) , arg6(other.arg6)
            {}
            bound_functor7(
                    BOOST_RV_REF(bound_functor7) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2)) , arg3(boost::move(other.arg3)) , arg4(boost::move(other.arg4)) , arg5(boost::move(other.arg5)) , arg6(boost::move(other.arg6))
            {}
            bound_functor7 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_functor7) other)
            {
                f = other.f;
                arg0 = other.arg0; arg1 = other.arg1; arg2 = other.arg2; arg3 = other.arg3; arg4 = other.arg4; arg5 = other.arg5; arg6 = other.arg6;
                return *this;
            }
            bound_functor7 & operator=(
                BOOST_RV_REF(bound_functor7) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0); arg1 = boost::move(other.arg1); arg2 = boost::move(other.arg2); arg3 = boost::move(other.arg3); arg4 = boost::move(other.arg4); arg5 = boost::move(other.arg5); arg6 = boost::move(other.arg6);
                return *this;
            }
            BOOST_FORCEINLINE
            typename result_of::bound_functor7<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
            >::type
            operator()()
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return eval(env, f)(::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6));
            }
            BOOST_FORCEINLINE
            typename result_of::bound_functor7<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
            >::type
            operator()() const
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return eval(env, f)(::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6));
            }
            template <typename This, typename A0> struct result<This(A0)> { typedef typename result_of::bound_functor7< F(A0), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type type; }; template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor7< F(A0), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) const { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor7< F(A0), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename This, typename A0 , typename A1> struct result<This(A0 , A1)> { typedef typename result_of::bound_functor7< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type type; }; template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor7< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor7< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename This, typename A0 , typename A1 , typename A2> struct result<This(A0 , A1 , A2)> { typedef typename result_of::bound_functor7< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor7< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor7< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3> struct result<This(A0 , A1 , A2 , A3)> { typedef typename result_of::bound_functor7< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor7< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor7< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4> struct result<This(A0 , A1 , A2 , A3 , A4)> { typedef typename result_of::bound_functor7< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor7< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor7< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> struct result<This(A0 , A1 , A2 , A3 , A4 , A5)> { typedef typename result_of::bound_functor7< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor7< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor7< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> struct result<This(A0 , A1 , A2 , A3 , A4 , A5 , A6)> { typedef typename result_of::bound_functor7< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor7< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor7< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0; typename boost::remove_const< typename decay<Arg1>::type >::type arg1; typename boost::remove_const< typename decay<Arg2>::type >::type arg2; typename boost::remove_const< typename decay<Arg3>::type >::type arg3; typename boost::remove_const< typename decay<Arg4>::type >::type arg4; typename boost::remove_const< typename decay<Arg5>::type >::type arg5; typename boost::remove_const< typename decay<Arg6>::type >::type arg6;
        };
        namespace result_of
        {
            template <typename Env
              , typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6
            >
            struct eval<
                Env
              , detail::bound_functor7<
                    F
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
                >
            >
            {
                typedef
                    typename boost::result_of<
                        boost::fusion::fused<
                            detail::bound_functor7<
                                F
                              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
                            >
                        >(Env &)
                    >::type
                    type;
            };
        }
        template <
            typename Env
          , typename F
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6
        >
        typename boost::result_of<
            boost::fusion::fused<
                detail::bound_functor7<
                    F
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
                >
            >(Env &)
        >::type
        eval(
            Env & env
          , detail::bound_functor7<
                F
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_functor7<
                        F
                      , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
                    >
                >(f)(
                    env
                 );
        }
    }
    template <typename F
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6
    >
    typename boost::disable_if<
        hpx::traits::is_action<typename detail::remove_reference<F>::type>
      , detail::bound_functor7<
            typename detail::remove_reference<F>::type
          , typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type , typename detail::remove_reference<A5>::type , typename detail::remove_reference<A6>::type
        >
    >::type
    bind(
        BOOST_FWD_REF(F) f
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6
    )
    {
        return
            detail::bound_functor7<
                typename detail::remove_reference<F>::type
              , typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type , typename detail::remove_reference<A5>::type , typename detail::remove_reference<A6>::type
            >(
                boost::forward<F>(f)
              , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )
            );
    }
}}
namespace boost {
    template <
        typename F
      , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6
    >
    struct result_of<
        hpx::util::detail::bound_functor7<
            F
          , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
        >()
    >
    {
        typedef
            typename hpx::util::detail::result_of::
                bound_functor7<
                    F()
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
                >::type
            type;
    };
}
namespace boost { namespace serialization
{
    
    
    template <typename F, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6>
    void serialize(hpx::util::portable_binary_iarchive& ar
      , hpx::util::detail::bound_functor7<
            F, Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0; ar & bound.arg1; ar & bound.arg2; ar & bound.arg3; ar & bound.arg4; ar & bound.arg5; ar & bound.arg6;
    }
    template <typename F, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6>
    void serialize(hpx::util::portable_binary_oarchive& ar
      , hpx::util::detail::bound_functor7<
            F, Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0; ar & bound.arg1; ar & bound.arg2; ar & bound.arg3; ar & bound.arg4; ar & bound.arg5; ar & bound.arg6;
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <
            typename R
          , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7
        >
        struct bound_function8
        {
            typedef R result_type;
            typedef R(*function_pointer_type)(T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7);
            function_pointer_type f;
            bound_function8(
                    bound_function8 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2) , arg3(other.arg3) , arg4(other.arg4) , arg5(other.arg5) , arg6(other.arg6) , arg7(other.arg7)
            {}
            bound_function8(
                    BOOST_RV_REF(bound_function8) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2)) , arg3(boost::move(other.arg3)) , arg4(boost::move(other.arg4)) , arg5(boost::move(other.arg5)) , arg6(boost::move(other.arg6)) , arg7(boost::move(other.arg7))
            {}
            bound_function8 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_function8) other)
            {
                f = other.f;
                arg0 = other.arg0; arg1 = other.arg1; arg2 = other.arg2; arg3 = other.arg3; arg4 = other.arg4; arg5 = other.arg5; arg6 = other.arg6; arg7 = other.arg7;
                return *this;
            }
            bound_function8 & operator=(
                BOOST_RV_REF(bound_function8) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0); arg1 = boost::move(other.arg1); arg2 = boost::move(other.arg2); arg3 = boost::move(other.arg3); arg4 = boost::move(other.arg4); arg5 = boost::move(other.arg5); arg6 = boost::move(other.arg6); arg7 = boost::move(other.arg7);
                return *this;
            }
            template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
            bound_function8(
                function_pointer_type f
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7
            )
                : f(f)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3)) , arg4(boost::forward<A4>(a4)) , arg5(boost::forward<A5>(a5)) , arg6(boost::forward<A6>(a6)) , arg7(boost::forward<A7>(a7))
            {}
            BOOST_FORCEINLINE R operator()() const
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return f(::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7));
            }
            BOOST_FORCEINLINE R operator()()
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return f(::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7));
            }
            template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) const { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0; typename boost::remove_const< typename decay<Arg1>::type >::type arg1; typename boost::remove_const< typename decay<Arg2>::type >::type arg2; typename boost::remove_const< typename decay<Arg3>::type >::type arg3; typename boost::remove_const< typename decay<Arg4>::type >::type arg4; typename boost::remove_const< typename decay<Arg5>::type >::type arg5; typename boost::remove_const< typename decay<Arg6>::type >::type arg6; typename boost::remove_const< typename decay<Arg7>::type >::type arg7;
        private:
            BOOST_COPYABLE_AND_MOVABLE(bound_function8);
        };
        namespace result_of
        {
            template <
                typename Env
              , typename R
              , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7
            >
            struct eval<Env,
                detail::bound_function8<
                    R
                  , T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
                >
            >
            {
                typedef R type;
            };
        }
        template <
            typename Env
          , typename R
          , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7
        >
        R
        eval(
            Env & env
          , detail::bound_function8<
                R
              , T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_function8<
                        R
                      , T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7
                      , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
                    >
                >(f)(
                    env
                 );
        }
    }
    template <
        typename R
      , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7
    >
    detail::bound_function8<
        R
      , T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7
      , typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type , typename detail::remove_reference<A5>::type , typename detail::remove_reference<A6>::type , typename detail::remove_reference<A7>::type
    >
    bind(
        R(*f)(T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7)
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7
    )
    {
        return
            detail::bound_function8<
                R
              , T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7
              , typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type , typename detail::remove_reference<A5>::type , typename detail::remove_reference<A6>::type , typename detail::remove_reference<A7>::type
            >
            (f, boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ));
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <
            typename R
          , typename C
          , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7
        >
        struct bound_member_function8
        {
            typedef R result_type;
            typedef R(C::*function_pointer_type)(
                T0 , T1 , T2 , T3 , T4 , T5 , T6);
            function_pointer_type f;
            template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
            bound_member_function8(
                function_pointer_type f
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7
            )
                : f(f)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3)) , arg4(boost::forward<A4>(a4)) , arg5(boost::forward<A5>(a5)) , arg6(boost::forward<A6>(a6)) , arg7(boost::forward<A7>(a7))
            {}
            bound_member_function8(
                    bound_member_function8 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2) , arg3(other.arg3) , arg4(other.arg4) , arg5(other.arg5) , arg6(other.arg6) , arg7(other.arg7)
            {}
            bound_member_function8(BOOST_RV_REF(
                    bound_member_function8) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2)) , arg3(boost::move(other.arg3)) , arg4(boost::move(other.arg4)) , arg5(boost::move(other.arg5)) , arg6(boost::move(other.arg6)) , arg7(boost::move(other.arg7))
            {}
            bound_member_function8 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_member_function8) other)
            {
                f = other.f;
                arg0 = other.arg0; arg1 = other.arg1; arg2 = other.arg2; arg3 = other.arg3; arg4 = other.arg4; arg5 = other.arg5; arg6 = other.arg6; arg7 = other.arg7;
                return *this;
            }
            bound_member_function8 & operator=(
                BOOST_RV_REF(bound_member_function8) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0); arg1 = boost::move(other.arg1); arg2 = boost::move(other.arg2); arg3 = boost::move(other.arg3); arg4 = boost::move(other.arg4); arg5 = boost::move(other.arg5); arg6 = boost::move(other.arg6); arg7 = boost::move(other.arg7);
                return *this;
            }
            BOOST_FORCEINLINE R operator()() const
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7));
            }
            BOOST_FORCEINLINE R operator()()
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7));
            }
    template <typename A0>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple1<
                typename detail::env_value_type<A0>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7));
    }
    template <typename A0>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple1<
                typename detail::env_value_type<A0>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7));
    }
    template <typename A0 , typename A1>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple2<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7));
    }
    template <typename A0 , typename A1>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple2<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7));
    }
    template <typename A0 , typename A1 , typename A2>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple3<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7));
    }
    template <typename A0 , typename A1 , typename A2>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple3<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple4<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple4<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple5<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple5<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple6<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple6<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple7<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple7<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7)
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple8<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type , typename detail::env_value_type<A7>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7));
    }
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
    BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7) const
    {
        using detail::get_pointer;
        typedef
            hpx::util::tuple8<
                typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type , typename detail::env_value_type<A7>::type
            >
            env_type;
        env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ));
        return
            (get_pointer(detail::eval(env, arg0))->*f)
                (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7));
    }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0; typename boost::remove_const< typename decay<Arg1>::type >::type arg1; typename boost::remove_const< typename decay<Arg2>::type >::type arg2; typename boost::remove_const< typename decay<Arg3>::type >::type arg3; typename boost::remove_const< typename decay<Arg4>::type >::type arg4; typename boost::remove_const< typename decay<Arg5>::type >::type arg5; typename boost::remove_const< typename decay<Arg6>::type >::type arg6; typename boost::remove_const< typename decay<Arg7>::type >::type arg7;
        };
        template <
            typename R
          , typename C
          , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7
        >
        struct bound_member_function8<
            R
          , C const
          , T0 , T1 , T2 , T3 , T4 , T5 , T6
          , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
        >
        {
            typedef R result_type;
            typedef R(C::*function_pointer_type)(
                T0 , T1 , T2 , T3 , T4 , T5 , T6) const;
            function_pointer_type f;
            template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
            bound_member_function8(
                function_pointer_type f
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7
            )
                : f(f)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3)) , arg4(boost::forward<A4>(a4)) , arg5(boost::forward<A5>(a5)) , arg6(boost::forward<A6>(a6)) , arg7(boost::forward<A7>(a7))
            {}
            bound_member_function8(
                    bound_member_function8 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2) , arg3(other.arg3) , arg4(other.arg4) , arg5(other.arg5) , arg6(other.arg6) , arg7(other.arg7)
            {}
            bound_member_function8(
                    BOOST_RV_REF(bound_member_function8) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2)) , arg3(boost::move(other.arg3)) , arg4(boost::move(other.arg4)) , arg5(boost::move(other.arg5)) , arg6(boost::move(other.arg6)) , arg7(boost::move(other.arg7))
            {}
            bound_member_function8 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_member_function8) other)
            {
                f = other.f;
                arg0 = other.arg0; arg1 = other.arg1; arg2 = other.arg2; arg3 = other.arg3; arg4 = other.arg4; arg5 = other.arg5; arg6 = other.arg6; arg7 = other.arg7;
                return *this;
            }
            bound_member_function8 & operator=(
                BOOST_RV_REF(bound_member_function8) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0); arg1 = boost::move(other.arg1); arg2 = boost::move(other.arg2); arg3 = boost::move(other.arg3); arg4 = boost::move(other.arg4); arg5 = boost::move(other.arg5); arg6 = boost::move(other.arg6); arg7 = boost::move(other.arg7);
                return *this;
            }
            BOOST_FORCEINLINE R operator()() const
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7));
            }
            BOOST_FORCEINLINE R operator()()
            {
                using detail::get_pointer;
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return
                    (get_pointer(detail::eval(env, arg0))->*f)
                        (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7));
            }
            template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) { using detail::get_pointer; typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0) const { using detail::get_pointer; typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { using detail::get_pointer; typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { using detail::get_pointer; typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { using detail::get_pointer; typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { using detail::get_pointer; typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { using detail::get_pointer; typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { using detail::get_pointer; typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { using detail::get_pointer; typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { using detail::get_pointer; typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { using detail::get_pointer; typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { using detail::get_pointer; typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { using detail::get_pointer; typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE result_type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { using detail::get_pointer; typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return (get_pointer(detail::eval(env, arg0))->*f) (::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0; typename boost::remove_const< typename decay<Arg1>::type >::type arg1; typename boost::remove_const< typename decay<Arg2>::type >::type arg2; typename boost::remove_const< typename decay<Arg3>::type >::type arg3; typename boost::remove_const< typename decay<Arg4>::type >::type arg4; typename boost::remove_const< typename decay<Arg5>::type >::type arg5; typename boost::remove_const< typename decay<Arg6>::type >::type arg6; typename boost::remove_const< typename decay<Arg7>::type >::type arg7;
        };
        namespace result_of
        {
            template <
                typename Env
              , typename R
              , typename C
              , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6
              ,
                  typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7
            >
            struct eval<Env,
                detail::bound_member_function8<
                    R
                  , C
                  , T0 , T1 , T2 , T3 , T4 , T5 , T6
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
                >
            >
            {
                typedef R type;
            };
        }
        template <
            typename Env
          , typename R
          , typename C
          , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6
          ,
              typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7
        >
        R
        eval(
            Env & env
          , detail::bound_member_function8<
                R
              , C
              , T0 , T1 , T2 , T3 , T4 , T5 , T6
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_member_function8<
                        R
                      , C
                      , T0 , T1 , T2 , T3 , T4 , T5 , T6
                        ,
                        Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
                    >
                >(f)(
                    env
                 );
        }
    }
    template <
        typename R
      , typename C
      , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7
    >
    detail::bound_member_function8<
        R
      , C
      , T0 , T1 , T2 , T3 , T4 , T5 , T6
      ,
        typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type , typename detail::remove_reference<A5>::type , typename detail::remove_reference<A6>::type , typename detail::remove_reference<A7>::type
    >
    bind(
        R(C::*f)(T0 , T1 , T2 , T3 , T4 , T5 , T6)
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7
    )
    {
        return
            detail::bound_member_function8<
                R
              , C
              , T0 , T1 , T2 , T3 , T4 , T5 , T6
                ,
                typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type , typename detail::remove_reference<A5>::type , typename detail::remove_reference<A6>::type , typename detail::remove_reference<A7>::type
            >
            (f, boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ));
    }
    template <
        typename R
      , typename C
      , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7
    >
    detail::bound_member_function8<
        R
      , C const
      , T0 , T1 , T2 , T3 , T4 , T5 , T6
      ,
        typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type , typename detail::remove_reference<A5>::type , typename detail::remove_reference<A6>::type , typename detail::remove_reference<A7>::type
    >
    bind(
        R(C::*f)(T0 , T1 , T2 , T3 , T4 , T5 , T6) const
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7
    )
    {
        return
            detail::bound_member_function8<
                R
              , C const
              , T0 , T1 , T2 , T3 , T4 , T5 , T6
              ,
                  typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type , typename detail::remove_reference<A5>::type , typename detail::remove_reference<A6>::type , typename detail::remove_reference<A7>::type
            >
            (f, boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ));
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        namespace result_of
        {
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7
              , typename Enable = typename boost::mpl::fold<
                    boost::mpl::vector<Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7>
                  , boost::mpl::false_
                  , boost::mpl::or_<
                        placeholders::is_placeholder<boost::mpl::_2>
                      , boost::mpl::_1
                    >
                >::type
            >
            struct bound_functor8;
            template < typename F , typename A0 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 > struct bound_functor8< F(A0) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple1< typename detail::env_value_type<A0>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg5>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg6>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple1< typename detail::env_value_type<A0>::type >)) , typename boost::remove_const< typename decay<Arg7>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 > struct bound_functor8< F(A0 , A1) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg5>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg6>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename boost::remove_const< typename decay<Arg7>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 > struct bound_functor8< F(A0 , A1 , A2) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg5>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg6>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename boost::remove_const< typename decay<Arg7>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 > struct bound_functor8< F(A0 , A1 , A2 , A3) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg5>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg6>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename boost::remove_const< typename decay<Arg7>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 > struct bound_functor8< F(A0 , A1 , A2 , A3 , A4) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg5>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg6>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename boost::remove_const< typename decay<Arg7>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 > struct bound_functor8< F(A0 , A1 , A2 , A3 , A4 , A5) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg5>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg6>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename boost::remove_const< typename decay<Arg7>::type >::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 > struct bound_functor8< F(A0 , A1 , A2 , A3 , A4 , A5 , A6) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7 , boost::mpl::false_ > { typedef typename boost::result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg5>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg6>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename boost::remove_const< typename decay<Arg7>::type >::type >::type ) >::type type; };
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7
            >
            struct bound_functor8<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>
            {
                typedef
                    typename boost::result_of<
                        typename boost::remove_reference<
                            typename detail::result_of::eval<
                                hpx::util::tuple0<>
                              , F
                            >::type
                        >::type(
                            typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg0>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg1>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg2>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg3>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg4>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg5>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg6>::type >::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple0<>) , typename boost::remove_const< typename decay<Arg7>::type >::type >::type
                        )
                    >::type
                    type;
            };
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7
            >
            struct bound_functor8<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
              , boost::mpl::true_
            >
            {
                typedef
                    detail::not_enough_parameters
                    type;
            };
        }
        template <
            typename F
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7
        >
        struct bound_functor8
        {
            typedef typename boost::remove_const<F>::type functor_type;
            functor_type f;
            template <typename Sig>
            struct result;
            template <typename This>
            struct result<This()>
            {
                typedef
                    typename result_of::bound_functor8<
                        F()
                      , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
                    >::type
                    type;
            };
            
            bound_functor8()
            {}
            template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
            bound_functor8(
                BOOST_RV_REF(F) f_
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7
            )
                : f(boost::move(f_))
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3)) , arg4(boost::forward<A4>(a4)) , arg5(boost::forward<A5>(a5)) , arg6(boost::forward<A6>(a6)) , arg7(boost::forward<A7>(a7))
            {}
            template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
            bound_functor8(
                F const & f_
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7
            )
                : f(f_)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3)) , arg4(boost::forward<A4>(a4)) , arg5(boost::forward<A5>(a5)) , arg6(boost::forward<A6>(a6)) , arg7(boost::forward<A7>(a7))
            {}
            bound_functor8(
                    bound_functor8 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2) , arg3(other.arg3) , arg4(other.arg4) , arg5(other.arg5) , arg6(other.arg6) , arg7(other.arg7)
            {}
            bound_functor8(
                    BOOST_RV_REF(bound_functor8) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2)) , arg3(boost::move(other.arg3)) , arg4(boost::move(other.arg4)) , arg5(boost::move(other.arg5)) , arg6(boost::move(other.arg6)) , arg7(boost::move(other.arg7))
            {}
            bound_functor8 & operator=(
                BOOST_COPY_ASSIGN_REF(bound_functor8) other)
            {
                f = other.f;
                arg0 = other.arg0; arg1 = other.arg1; arg2 = other.arg2; arg3 = other.arg3; arg4 = other.arg4; arg5 = other.arg5; arg6 = other.arg6; arg7 = other.arg7;
                return *this;
            }
            bound_functor8 & operator=(
                BOOST_RV_REF(bound_functor8) other)
            {
                f = boost::move(other.f);
                arg0 = boost::move(other.arg0); arg1 = boost::move(other.arg1); arg2 = boost::move(other.arg2); arg3 = boost::move(other.arg3); arg4 = boost::move(other.arg4); arg5 = boost::move(other.arg5); arg6 = boost::move(other.arg6); arg7 = boost::move(other.arg7);
                return *this;
            }
            BOOST_FORCEINLINE
            typename result_of::bound_functor8<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
            >::type
            operator()()
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return eval(env, f)(::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7));
            }
            BOOST_FORCEINLINE
            typename result_of::bound_functor8<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
            >::type
            operator()() const
            {
                typedef hpx::util::tuple0<> env_type;
                env_type env;
                return eval(env, f)(::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7));
            }
            template <typename This, typename A0> struct result<This(A0)> { typedef typename result_of::bound_functor8< F(A0), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type type; }; template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor8< F(A0), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) const { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor8< F(A0), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) { typedef hpx::util::tuple1< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename This, typename A0 , typename A1> struct result<This(A0 , A1)> { typedef typename result_of::bound_functor8< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type type; }; template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor8< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor8< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { typedef hpx::util::tuple2< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename This, typename A0 , typename A1 , typename A2> struct result<This(A0 , A1 , A2)> { typedef typename result_of::bound_functor8< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor8< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor8< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { typedef hpx::util::tuple3< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3> struct result<This(A0 , A1 , A2 , A3)> { typedef typename result_of::bound_functor8< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor8< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor8< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { typedef hpx::util::tuple4< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4> struct result<This(A0 , A1 , A2 , A3 , A4)> { typedef typename result_of::bound_functor8< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor8< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor8< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { typedef hpx::util::tuple5< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> struct result<This(A0 , A1 , A2 , A3 , A4 , A5)> { typedef typename result_of::bound_functor8< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor8< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor8< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { typedef hpx::util::tuple6< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> struct result<This(A0 , A1 , A2 , A3 , A4 , A5 , A6)> { typedef typename result_of::bound_functor8< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor8< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor8< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { typedef hpx::util::tuple7< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return eval(env, f) (::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); }
            typename boost::remove_const< typename decay<Arg0>::type >::type arg0; typename boost::remove_const< typename decay<Arg1>::type >::type arg1; typename boost::remove_const< typename decay<Arg2>::type >::type arg2; typename boost::remove_const< typename decay<Arg3>::type >::type arg3; typename boost::remove_const< typename decay<Arg4>::type >::type arg4; typename boost::remove_const< typename decay<Arg5>::type >::type arg5; typename boost::remove_const< typename decay<Arg6>::type >::type arg6; typename boost::remove_const< typename decay<Arg7>::type >::type arg7;
        };
        namespace result_of
        {
            template <typename Env
              , typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7
            >
            struct eval<
                Env
              , detail::bound_functor8<
                    F
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
                >
            >
            {
                typedef
                    typename boost::result_of<
                        boost::fusion::fused<
                            detail::bound_functor8<
                                F
                              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
                            >
                        >(Env &)
                    >::type
                    type;
            };
        }
        template <
            typename Env
          , typename F
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7
        >
        typename boost::result_of<
            boost::fusion::fused<
                detail::bound_functor8<
                    F
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
                >
            >(Env &)
        >::type
        eval(
            Env & env
          , detail::bound_functor8<
                F
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_functor8<
                        F
                      , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
                    >
                >(f)(
                    env
                 );
        }
    }
    template <typename F
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7
    >
    typename boost::disable_if<
        hpx::traits::is_action<typename detail::remove_reference<F>::type>
      , detail::bound_functor8<
            typename detail::remove_reference<F>::type
          , typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type , typename detail::remove_reference<A5>::type , typename detail::remove_reference<A6>::type , typename detail::remove_reference<A7>::type
        >
    >::type
    bind(
        BOOST_FWD_REF(F) f
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7
    )
    {
        return
            detail::bound_functor8<
                typename detail::remove_reference<F>::type
              , typename detail::remove_reference<A0>::type , typename detail::remove_reference<A1>::type , typename detail::remove_reference<A2>::type , typename detail::remove_reference<A3>::type , typename detail::remove_reference<A4>::type , typename detail::remove_reference<A5>::type , typename detail::remove_reference<A6>::type , typename detail::remove_reference<A7>::type
            >(
                boost::forward<F>(f)
              , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 )
            );
    }
}}
namespace boost {
    template <
        typename F
      , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7
    >
    struct result_of<
        hpx::util::detail::bound_functor8<
            F
          , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
        >()
    >
    {
        typedef
            typename hpx::util::detail::result_of::
                bound_functor8<
                    F()
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
                >::type
            type;
    };
}
namespace boost { namespace serialization
{
    
    
    template <typename F, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7>
    void serialize(hpx::util::portable_binary_iarchive& ar
      , hpx::util::detail::bound_functor8<
            F, Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0; ar & bound.arg1; ar & bound.arg2; ar & bound.arg3; ar & bound.arg4; ar & bound.arg5; ar & bound.arg6; ar & bound.arg7;
    }
    template <typename F, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7>
    void serialize(hpx::util::portable_binary_oarchive& ar
      , hpx::util::detail::bound_functor8<
            F, Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0; ar & bound.arg1; ar & bound.arg2; ar & bound.arg3; ar & bound.arg4; ar & bound.arg5; ar & bound.arg6; ar & bound.arg7;
    }
}}

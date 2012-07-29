// Copyright (c) 2007-2012 Hartmut Kaiser
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

// This file has been automatically generated using the Boost.Wave tool.
// Do not edit manually.


        template <typename A0>
        static inline lcos::future<naming::id_type, naming::gid_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0
          , boost::mpl::false_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_action3<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 )
                );
        }
        template <typename A0>
        static inline lcos::future<naming::id_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0
          , boost::mpl::true_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_direct_action3<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 )
                );
        }
        template <typename A0>
        dataflow(
            naming::id_type const & target
          , BOOST_FWD_REF(A0) a0
        )
            : base_type(
                create_component(target
                  , boost::forward<A0>( a0 )
                  , typename Action::direct_execution()
                )
            )
        {
        }
        template <typename A0 , typename A1>
        static inline lcos::future<naming::id_type, naming::gid_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1
          , boost::mpl::false_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_action4<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )
                );
        }
        template <typename A0 , typename A1>
        static inline lcos::future<naming::id_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1
          , boost::mpl::true_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_direct_action4<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )
                );
        }
        template <typename A0 , typename A1>
        dataflow(
            naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1
        )
            : base_type(
                create_component(target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )
                  , typename Action::direct_execution()
                )
            )
        {
        }
        template <typename A0 , typename A1 , typename A2>
        static inline lcos::future<naming::id_type, naming::gid_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2
          , boost::mpl::false_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_action5<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )
                );
        }
        template <typename A0 , typename A1 , typename A2>
        static inline lcos::future<naming::id_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2
          , boost::mpl::true_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_direct_action5<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )
                );
        }
        template <typename A0 , typename A1 , typename A2>
        dataflow(
            naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2
        )
            : base_type(
                create_component(target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )
                  , typename Action::direct_execution()
                )
            )
        {
        }
        template <typename A0 , typename A1 , typename A2 , typename A3>
        static inline lcos::future<naming::id_type, naming::gid_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3
          , boost::mpl::false_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_action6<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3>
        static inline lcos::future<naming::id_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3
          , boost::mpl::true_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_direct_action6<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3>
        dataflow(
            naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3
        )
            : base_type(
                create_component(target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )
                  , typename Action::direct_execution()
                )
            )
        {
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
        static inline lcos::future<naming::id_type, naming::gid_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4
          , boost::mpl::false_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_action7<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
        static inline lcos::future<naming::id_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4
          , boost::mpl::true_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_direct_action7<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
        dataflow(
            naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4
        )
            : base_type(
                create_component(target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )
                  , typename Action::direct_execution()
                )
            )
        {
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
        static inline lcos::future<naming::id_type, naming::gid_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5
          , boost::mpl::false_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_action8<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
        static inline lcos::future<naming::id_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5
          , boost::mpl::true_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_direct_action8<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
        dataflow(
            naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5
        )
            : base_type(
                create_component(target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )
                  , typename Action::direct_execution()
                )
            )
        {
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
        static inline lcos::future<naming::id_type, naming::gid_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6
          , boost::mpl::false_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_action9<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A6>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
        static inline lcos::future<naming::id_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6
          , boost::mpl::true_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_direct_action9<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A6>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
        dataflow(
            naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6
        )
            : base_type(
                create_component(target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )
                  , typename Action::direct_execution()
                )
            )
        {
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
        static inline lcos::future<naming::id_type, naming::gid_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7
          , boost::mpl::false_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_action10<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A6>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A7>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
        static inline lcos::future<naming::id_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7
          , boost::mpl::true_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_direct_action10<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A6>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A7>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
        dataflow(
            naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7
        )
            : base_type(
                create_component(target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 )
                  , typename Action::direct_execution()
                )
            )
        {
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8>
        static inline lcos::future<naming::id_type, naming::gid_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8
          , boost::mpl::false_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_action11<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A6>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A7>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A8>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8>
        static inline lcos::future<naming::id_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8
          , boost::mpl::true_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_direct_action11<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A6>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A7>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A8>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8>
        dataflow(
            naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8
        )
            : base_type(
                create_component(target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 )
                  , typename Action::direct_execution()
                )
            )
        {
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9>
        static inline lcos::future<naming::id_type, naming::gid_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9
          , boost::mpl::false_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_action12<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A6>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A7>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A8>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A9>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9>
        static inline lcos::future<naming::id_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9
          , boost::mpl::true_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_direct_action12<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A6>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A7>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A8>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A9>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9>
        dataflow(
            naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9
        )
            : base_type(
                create_component(target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 )
                  , typename Action::direct_execution()
                )
            )
        {
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10>
        static inline lcos::future<naming::id_type, naming::gid_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10
          , boost::mpl::false_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_action13<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A6>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A7>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A8>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A9>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A10>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10>
        static inline lcos::future<naming::id_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10
          , boost::mpl::true_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_direct_action13<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A6>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A7>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A8>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A9>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A10>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10>
        dataflow(
            naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10
        )
            : base_type(
                create_component(target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 )
                  , typename Action::direct_execution()
                )
            )
        {
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11>
        static inline lcos::future<naming::id_type, naming::gid_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10 , BOOST_FWD_REF(A11) a11
          , boost::mpl::false_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_action14<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A6>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A7>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A8>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A9>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A10>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A11>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11>
        static inline lcos::future<naming::id_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10 , BOOST_FWD_REF(A11) a11
          , boost::mpl::true_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_direct_action14<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A6>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A7>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A8>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A9>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A10>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A11>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11>
        dataflow(
            naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10 , BOOST_FWD_REF(A11) a11
        )
            : base_type(
                create_component(target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 )
                  , typename Action::direct_execution()
                )
            )
        {
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12>
        static inline lcos::future<naming::id_type, naming::gid_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10 , BOOST_FWD_REF(A11) a11 , BOOST_FWD_REF(A12) a12
          , boost::mpl::false_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_action15<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A6>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A7>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A8>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A9>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A10>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A11>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A12>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12>
        static inline lcos::future<naming::id_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10 , BOOST_FWD_REF(A11) a11 , BOOST_FWD_REF(A12) a12
          , boost::mpl::true_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_direct_action15<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A6>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A7>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A8>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A9>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A10>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A11>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A12>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12>
        dataflow(
            naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10 , BOOST_FWD_REF(A11) a11 , BOOST_FWD_REF(A12) a12
        )
            : base_type(
                create_component(target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 )
                  , typename Action::direct_execution()
                )
            )
        {
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13>
        static inline lcos::future<naming::id_type, naming::gid_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10 , BOOST_FWD_REF(A11) a11 , BOOST_FWD_REF(A12) a12 , BOOST_FWD_REF(A13) a13
          , boost::mpl::false_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_action16<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A6>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A7>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A8>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A9>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A10>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A11>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A12>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A13>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 ) , boost::forward<A13>( a13 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13>
        static inline lcos::future<naming::id_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10 , BOOST_FWD_REF(A11) a11 , BOOST_FWD_REF(A12) a12 , BOOST_FWD_REF(A13) a13
          , boost::mpl::true_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_direct_action16<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A6>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A7>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A8>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A9>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A10>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A11>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A12>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A13>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 ) , boost::forward<A13>( a13 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13>
        dataflow(
            naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10 , BOOST_FWD_REF(A11) a11 , BOOST_FWD_REF(A12) a12 , BOOST_FWD_REF(A13) a13
        )
            : base_type(
                create_component(target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 ) , boost::forward<A13>( a13 )
                  , typename Action::direct_execution()
                )
            )
        {
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14>
        static inline lcos::future<naming::id_type, naming::gid_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10 , BOOST_FWD_REF(A11) a11 , BOOST_FWD_REF(A12) a12 , BOOST_FWD_REF(A13) a13 , BOOST_FWD_REF(A14) a14
          , boost::mpl::false_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_action17<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A6>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A7>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A8>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A9>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A10>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A11>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A12>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A13>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A14>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 ) , boost::forward<A13>( a13 ) , boost::forward<A14>( a14 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14>
        static inline lcos::future<naming::id_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10 , BOOST_FWD_REF(A11) a11 , BOOST_FWD_REF(A12) a12 , BOOST_FWD_REF(A13) a13 , BOOST_FWD_REF(A14) a14
          , boost::mpl::true_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_direct_action17<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A6>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A7>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A8>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A9>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A10>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A11>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A12>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A13>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A14>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 ) , boost::forward<A13>( a13 ) , boost::forward<A14>( a14 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14>
        dataflow(
            naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10 , BOOST_FWD_REF(A11) a11 , BOOST_FWD_REF(A12) a12 , BOOST_FWD_REF(A13) a13 , BOOST_FWD_REF(A14) a14
        )
            : base_type(
                create_component(target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 ) , boost::forward<A13>( a13 ) , boost::forward<A14>( a14 )
                  , typename Action::direct_execution()
                )
            )
        {
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15>
        static inline lcos::future<naming::id_type, naming::gid_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10 , BOOST_FWD_REF(A11) a11 , BOOST_FWD_REF(A12) a12 , BOOST_FWD_REF(A13) a13 , BOOST_FWD_REF(A14) a14 , BOOST_FWD_REF(A15) a15
          , boost::mpl::false_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_action18<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A6>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A7>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A8>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A9>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A10>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A11>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A12>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A13>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A14>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A15>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 ) , boost::forward<A13>( a13 ) , boost::forward<A14>( a14 ) , boost::forward<A15>( a15 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15>
        static inline lcos::future<naming::id_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10 , BOOST_FWD_REF(A11) a11 , BOOST_FWD_REF(A12) a12 , BOOST_FWD_REF(A13) a13 , BOOST_FWD_REF(A14) a14 , BOOST_FWD_REF(A15) a15
          , boost::mpl::true_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_direct_action18<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A6>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A7>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A8>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A9>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A10>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A11>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A12>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A13>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A14>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A15>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 ) , boost::forward<A13>( a13 ) , boost::forward<A14>( a14 ) , boost::forward<A15>( a15 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15>
        dataflow(
            naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10 , BOOST_FWD_REF(A11) a11 , BOOST_FWD_REF(A12) a12 , BOOST_FWD_REF(A13) a13 , BOOST_FWD_REF(A14) a14 , BOOST_FWD_REF(A15) a15
        )
            : base_type(
                create_component(target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 ) , boost::forward<A13>( a13 ) , boost::forward<A14>( a14 ) , boost::forward<A15>( a15 )
                  , typename Action::direct_execution()
                )
            )
        {
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16>
        static inline lcos::future<naming::id_type, naming::gid_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10 , BOOST_FWD_REF(A11) a11 , BOOST_FWD_REF(A12) a12 , BOOST_FWD_REF(A13) a13 , BOOST_FWD_REF(A14) a14 , BOOST_FWD_REF(A15) a15 , BOOST_FWD_REF(A16) a16
          , boost::mpl::false_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_action19<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A6>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A7>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A8>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A9>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A10>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A11>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A12>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A13>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A14>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A15>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A16>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 ) , boost::forward<A13>( a13 ) , boost::forward<A14>( a14 ) , boost::forward<A15>( a15 ) , boost::forward<A16>( a16 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16>
        static inline lcos::future<naming::id_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10 , BOOST_FWD_REF(A11) a11 , BOOST_FWD_REF(A12) a12 , BOOST_FWD_REF(A13) a13 , BOOST_FWD_REF(A14) a14 , BOOST_FWD_REF(A15) a15 , BOOST_FWD_REF(A16) a16
          , boost::mpl::true_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_direct_action19<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A6>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A7>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A8>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A9>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A10>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A11>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A12>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A13>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A14>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A15>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A16>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 ) , boost::forward<A13>( a13 ) , boost::forward<A14>( a14 ) , boost::forward<A15>( a15 ) , boost::forward<A16>( a16 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16>
        dataflow(
            naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10 , BOOST_FWD_REF(A11) a11 , BOOST_FWD_REF(A12) a12 , BOOST_FWD_REF(A13) a13 , BOOST_FWD_REF(A14) a14 , BOOST_FWD_REF(A15) a15 , BOOST_FWD_REF(A16) a16
        )
            : base_type(
                create_component(target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 ) , boost::forward<A13>( a13 ) , boost::forward<A14>( a14 ) , boost::forward<A15>( a15 ) , boost::forward<A16>( a16 )
                  , typename Action::direct_execution()
                )
            )
        {
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17>
        static inline lcos::future<naming::id_type, naming::gid_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10 , BOOST_FWD_REF(A11) a11 , BOOST_FWD_REF(A12) a12 , BOOST_FWD_REF(A13) a13 , BOOST_FWD_REF(A14) a14 , BOOST_FWD_REF(A15) a15 , BOOST_FWD_REF(A16) a16 , BOOST_FWD_REF(A17) a17
          , boost::mpl::false_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_action20<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A6>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A7>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A8>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A9>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A10>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A11>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A12>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A13>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A14>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A15>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A16>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A17>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 ) , boost::forward<A13>( a13 ) , boost::forward<A14>( a14 ) , boost::forward<A15>( a15 ) , boost::forward<A16>( a16 ) , boost::forward<A17>( a17 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17>
        static inline lcos::future<naming::id_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10 , BOOST_FWD_REF(A11) a11 , BOOST_FWD_REF(A12) a12 , BOOST_FWD_REF(A13) a13 , BOOST_FWD_REF(A14) a14 , BOOST_FWD_REF(A15) a15 , BOOST_FWD_REF(A16) a16 , BOOST_FWD_REF(A17) a17
          , boost::mpl::true_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_direct_action20<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A6>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A7>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A8>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A9>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A10>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A11>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A12>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A13>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A14>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A15>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A16>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A17>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 ) , boost::forward<A13>( a13 ) , boost::forward<A14>( a14 ) , boost::forward<A15>( a15 ) , boost::forward<A16>( a16 ) , boost::forward<A17>( a17 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17>
        dataflow(
            naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10 , BOOST_FWD_REF(A11) a11 , BOOST_FWD_REF(A12) a12 , BOOST_FWD_REF(A13) a13 , BOOST_FWD_REF(A14) a14 , BOOST_FWD_REF(A15) a15 , BOOST_FWD_REF(A16) a16 , BOOST_FWD_REF(A17) a17
        )
            : base_type(
                create_component(target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 ) , boost::forward<A13>( a13 ) , boost::forward<A14>( a14 ) , boost::forward<A15>( a15 ) , boost::forward<A16>( a16 ) , boost::forward<A17>( a17 )
                  , typename Action::direct_execution()
                )
            )
        {
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18>
        static inline lcos::future<naming::id_type, naming::gid_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10 , BOOST_FWD_REF(A11) a11 , BOOST_FWD_REF(A12) a12 , BOOST_FWD_REF(A13) a13 , BOOST_FWD_REF(A14) a14 , BOOST_FWD_REF(A15) a15 , BOOST_FWD_REF(A16) a16 , BOOST_FWD_REF(A17) a17 , BOOST_FWD_REF(A18) a18
          , boost::mpl::false_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_action21<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A6>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A7>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A8>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A9>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A10>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A11>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A12>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A13>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A14>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A15>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A16>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A17>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A18>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 ) , boost::forward<A13>( a13 ) , boost::forward<A14>( a14 ) , boost::forward<A15>( a15 ) , boost::forward<A16>( a16 ) , boost::forward<A17>( a17 ) , boost::forward<A18>( a18 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18>
        static inline lcos::future<naming::id_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10 , BOOST_FWD_REF(A11) a11 , BOOST_FWD_REF(A12) a12 , BOOST_FWD_REF(A13) a13 , BOOST_FWD_REF(A14) a14 , BOOST_FWD_REF(A15) a15 , BOOST_FWD_REF(A16) a16 , BOOST_FWD_REF(A17) a17 , BOOST_FWD_REF(A18) a18
          , boost::mpl::true_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_direct_action21<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A6>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A7>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A8>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A9>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A10>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A11>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A12>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A13>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A14>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A15>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A16>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A17>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A18>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 ) , boost::forward<A13>( a13 ) , boost::forward<A14>( a14 ) , boost::forward<A15>( a15 ) , boost::forward<A16>( a16 ) , boost::forward<A17>( a17 ) , boost::forward<A18>( a18 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18>
        dataflow(
            naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10 , BOOST_FWD_REF(A11) a11 , BOOST_FWD_REF(A12) a12 , BOOST_FWD_REF(A13) a13 , BOOST_FWD_REF(A14) a14 , BOOST_FWD_REF(A15) a15 , BOOST_FWD_REF(A16) a16 , BOOST_FWD_REF(A17) a17 , BOOST_FWD_REF(A18) a18
        )
            : base_type(
                create_component(target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 ) , boost::forward<A13>( a13 ) , boost::forward<A14>( a14 ) , boost::forward<A15>( a15 ) , boost::forward<A16>( a16 ) , boost::forward<A17>( a17 ) , boost::forward<A18>( a18 )
                  , typename Action::direct_execution()
                )
            )
        {
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19>
        static inline lcos::future<naming::id_type, naming::gid_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10 , BOOST_FWD_REF(A11) a11 , BOOST_FWD_REF(A12) a12 , BOOST_FWD_REF(A13) a13 , BOOST_FWD_REF(A14) a14 , BOOST_FWD_REF(A15) a15 , BOOST_FWD_REF(A16) a16 , BOOST_FWD_REF(A17) a17 , BOOST_FWD_REF(A18) a18 , BOOST_FWD_REF(A19) a19
          , boost::mpl::false_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_action22<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A6>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A7>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A8>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A9>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A10>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A11>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A12>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A13>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A14>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A15>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A16>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A17>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A18>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A19>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 ) , boost::forward<A13>( a13 ) , boost::forward<A14>( a14 ) , boost::forward<A15>( a15 ) , boost::forward<A16>( a16 ) , boost::forward<A17>( a17 ) , boost::forward<A18>( a18 ) , boost::forward<A19>( a19 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19>
        static inline lcos::future<naming::id_type>
        create_component(naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10 , BOOST_FWD_REF(A11) a11 , BOOST_FWD_REF(A12) a12 , BOOST_FWD_REF(A13) a13 , BOOST_FWD_REF(A14) a14 , BOOST_FWD_REF(A15) a15 , BOOST_FWD_REF(A16) a16 , BOOST_FWD_REF(A17) a17 , BOOST_FWD_REF(A18) a18 , BOOST_FWD_REF(A19) a19
          , boost::mpl::true_
        )
        {
            typedef
                typename hpx::components::server::create_one_component_direct_action22<
                    components::managed_component<server::dataflow>
                  , detail::action_wrapper<Action> const &
                  , naming::id_type const &
                  , typename boost::remove_const< typename hpx::util::detail::remove_reference< A0>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A1>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A2>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A3>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A4>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A5>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A6>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A7>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A8>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A9>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A10>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A11>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A12>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A13>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A14>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A15>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A16>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A17>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A18>::type>::type const & , typename boost::remove_const< typename hpx::util::detail::remove_reference< A19>::type>::type const &
                >::type
                create_component_action;
            return
                async<create_component_action>(
                    naming::get_locality_from_id(target)
                  , stub_type::get_component_type()
                  , detail::action_wrapper<Action>()
                  , target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 ) , boost::forward<A13>( a13 ) , boost::forward<A14>( a14 ) , boost::forward<A15>( a15 ) , boost::forward<A16>( a16 ) , boost::forward<A17>( a17 ) , boost::forward<A18>( a18 ) , boost::forward<A19>( a19 )
                );
        }
        template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19>
        dataflow(
            naming::id_type const & target
          , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7 , BOOST_FWD_REF(A8) a8 , BOOST_FWD_REF(A9) a9 , BOOST_FWD_REF(A10) a10 , BOOST_FWD_REF(A11) a11 , BOOST_FWD_REF(A12) a12 , BOOST_FWD_REF(A13) a13 , BOOST_FWD_REF(A14) a14 , BOOST_FWD_REF(A15) a15 , BOOST_FWD_REF(A16) a16 , BOOST_FWD_REF(A17) a17 , BOOST_FWD_REF(A18) a18 , BOOST_FWD_REF(A19) a19
        )
            : base_type(
                create_component(target
                  , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 ) , boost::forward<A13>( a13 ) , boost::forward<A14>( a14 ) , boost::forward<A15>( a15 ) , boost::forward<A16>( a16 ) , boost::forward<A17>( a17 ) , boost::forward<A18>( a18 ) , boost::forward<A19>( a19 )
                  , typename Action::direct_execution()
                )
            )
        {
        }
// from server: 100% by tester
// roc 2008-06 004ad6c0  unit: RBX::Network::Replicator::ChangePropertyItem  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ad6c0
//
// 004ad6c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004ad6c4  83f803               cmp eax, 3
// 004ad6c7  741e                 je 0x4ad6e7
// 004ad6c9  8b542408             mov edx, dword ptr [esp + 8]
// 004ad6cd  c644240c00           mov byte ptr [esp + 0xc], 0
// 004ad6d2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ad6d6  51                   push ecx
// 004ad6d7  50                   push eax
// 004ad6d8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004ad6dc  52                   push edx
// 004ad6dd  50                   push eax
// 004ad6de  e8cdefffff           call 0x4ac6b0
// 004ad6e3  83c410               add esp, 0x10
// 004ad6e6  c3                   ret 
// 004ad6e7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ad6eb  c701f8af9300         mov dword ptr [ecx], 0x93aff8
// 004ad6f1  c3                   ret 

#include <typeinfo>
#include <memory>
#include <string>

namespace boost {
namespace detail {
namespace function {

union function_buffer
{
    void* obj_ptr;
    const void* const_obj_ptr;
    void (*func_ptr)();
    char data;
};

enum functor_manager_operation_type
{
    clone_functor_tag,
    destroy_functor_tag,
    check_functor_type_tag,
    get_functor_type_tag
};

struct function_obj_tag {};

template<typename Functor, typename Allocator>
struct functor_manager
{
    typedef Functor functor_type;

    static void manager(const function_buffer& in_buffer, function_buffer& out_buffer,
                        functor_manager_operation_type op, function_obj_tag);

    static void manage(const function_buffer& in_buffer, function_buffer& out_buffer,
                       functor_manager_operation_type op)
    {
        switch (op) {
        case get_functor_type_tag:
            out_buffer.const_obj_ptr = &typeid(functor_type);
            return;
        default:
            manager(in_buffer, out_buffer, op, function_obj_tag());
            return;
        }
    }
};

}
}
}
#include <vector>

namespace boost {
template<class T> class shared_ptr { T* px; void* pn; };
template<class T> class reference_wrapper { T* t_; };
template<int I> class arg {};

namespace _mfi {
template<class R, class T> class mf0 { R (T::*f_)(); };
template<class R, class T, class A1> class mf1 { R (T::*f_)(A1); };
template<class R, class T, class A1, class A2, class A3> class mf3 { R (T::*f_)(A1, A2, A3); };
}

namespace _bi {
template<class T> class value { T t_; };
template<class A1> class list1 { A1 a1_; };
template<class A1, class A2> class list2 { A1 a1_; A2 a2_; };
template<class A1, class A2, class A3> class list3 { A1 a1_; A2 a2_; A3 a3_; };
template<class A1, class A2, class A3, class A4> class list4 { A1 a1_; A2 a2_; A3 a3_; A4 a4_; };
template<class R, class F, class L> class bind_t { F f_; L l_; };
}
}

namespace RBX { class Instance; namespace Network { class Replicator; } }

template struct boost::detail::function::functor_manager<boost::_bi::bind_t<void, boost::_mfi::mf1<void, RBX::Network::Replicator, boost::shared_ptr<RBX::Instance>>, boost::_bi::list2<boost::_bi::value<RBX::Network::Replicator*>, boost::arg<1> > >, std::allocator<void> >;

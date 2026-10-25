// from server: 100% by tester
// roc 2008-06 0063c790  unit: RBX::VSeat::?$FactoryProduct  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063c790
//
// 0063c790  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063c794  83f803               cmp eax, 3
// 0063c797  741e                 je 0x63c7b7
// 0063c799  8b542408             mov edx, dword ptr [esp + 8]
// 0063c79d  c644240c00           mov byte ptr [esp + 0xc], 0
// 0063c7a2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063c7a6  51                   push ecx
// 0063c7a7  50                   push eax
// 0063c7a8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063c7ac  52                   push edx
// 0063c7ad  50                   push eax
// 0063c7ae  e87dfdffff           call 0x63c530
// 0063c7b3  83c410               add esp, 0x10
// 0063c7b6  c3                   ret 
// 0063c7b7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063c7bb  c701f0159600         mov dword ptr [ecx], 0x9615f0
// 0063c7c1  c3                   ret 

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

namespace RBX { class Seat; }

template struct boost::detail::function::functor_manager<boost::_bi::bind_t<void, boost::_mfi::mf1<void, RBX::Seat, bool>, boost::_bi::list2<boost::_bi::value<RBX::Seat*>, boost::arg<1> > >, std::allocator<void> >;

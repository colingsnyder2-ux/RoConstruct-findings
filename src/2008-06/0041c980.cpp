// from server: 100% by tester
// roc 2008-06 0041c980  unit: RBX::VDataModel::?$BoundFuncDesc  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041c980
//
// 0041c980  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041c984  83f803               cmp eax, 3
// 0041c987  741e                 je 0x41c9a7
// 0041c989  8b542408             mov edx, dword ptr [esp + 8]
// 0041c98d  c644240c00           mov byte ptr [esp + 0xc], 0
// 0041c992  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041c996  51                   push ecx
// 0041c997  50                   push eax
// 0041c998  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041c99c  52                   push edx
// 0041c99d  50                   push eax
// 0041c99e  e87debffff           call 0x41b520
// 0041c9a3  83c410               add esp, 0x10
// 0041c9a6  c3                   ret 
// 0041c9a7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041c9ab  c70108d29200         mov dword ptr [ecx], 0x92d208
// 0041c9b1  c3                   ret 

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

namespace RBX { class Instance; namespace Reflection { class PropertyDescriptor; } }
class DHTMLWindow;

template struct boost::detail::function::functor_manager<boost::_bi::bind_t<void, boost::_mfi::mf3<void, DHTMLWindow, boost::shared_ptr<RBX::Instance>, const RBX::Reflection::PropertyDescriptor&, std::string>, boost::_bi::list4<boost::_bi::value<boost::shared_ptr<DHTMLWindow> >, boost::_bi::value<boost::shared_ptr<RBX::Instance> >, boost::reference_wrapper<const RBX::Reflection::PropertyDescriptor>, boost::_bi::value<std::string> > >, std::allocator<void> >;

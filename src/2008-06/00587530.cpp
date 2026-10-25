// from server: 100% by tester
// roc 2008-06 00587530  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00587530
//
// 00587530  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00587534  85c0                 test eax, eax
// 00587536  7523                 jne 0x58755b
// 00587538  8b442408             mov eax, dword ptr [esp + 8]
// 0058753c  85c0                 test eax, eax
// 0058753e  7440                 je 0x587580
// 00587540  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00587544  8b11                 mov edx, dword ptr [ecx]
// 00587546  8910                 mov dword ptr [eax], edx
// 00587548  8b5104               mov edx, dword ptr [ecx + 4]
// 0058754b  895004               mov dword ptr [eax + 4], edx
// 0058754e  8b5108               mov edx, dword ptr [ecx + 8]
// 00587551  895008               mov dword ptr [eax + 8], edx
// 00587554  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00587557  89480c               mov dword ptr [eax + 0xc], ecx
// 0058755a  c3                   ret 
// 0058755b  83f801               cmp eax, 1
// 0058755e  7420                 je 0x587580
// 00587560  56                   push esi
// 00587561  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00587565  8b0e                 mov ecx, dword ptr [esi]
// 00587567  68488f9400           push 0x948f48
// 0058756c  ff1578288000         call dword ptr [0x802878]
// 00587572  0fb6d0               movzx edx, al
// 00587575  f7da                 neg edx
// 00587577  1bd2                 sbb edx, edx
// 00587579  23542408             and edx, dword ptr [esp + 8]
// 0058757d  8916                 mov dword ptr [esi], edx
// 0058757f  5e                   pop esi
// 00587580  c3                   ret 

#include <typeinfo>
#include <memory>
#include <new>
#include <string>

namespace boost {
namespace mpl {
template<bool C> struct bool_ {};
typedef bool_<true> true_;
typedef bool_<false> false_;
}

namespace detail {
namespace function {

class X;

union function_buffer
{
    void* obj_ptr;
    const void* const_obj_ptr;
    void (*func_ptr)();
    struct bound_memfunc_ptr_t
    {
        void (X::*memfunc_ptr)(int);
        void* obj_ptr;
    } bound_memfunc_ptr;
    mutable char data;
};

enum functor_manager_operation_type
{
    clone_functor_tag,
    destroy_functor_tag,
    check_functor_type_tag,
    get_functor_type_tag
};

template<typename Functor, typename Allocator>
struct functor_manager
{
    typedef Functor functor_type;

    static void manager(const function_buffer& in_buffer, function_buffer& out_buffer,
                        functor_manager_operation_type op, mpl::true_)
    {
        if (op == clone_functor_tag) {
            const functor_type* in_functor = reinterpret_cast<const functor_type*>(&in_buffer.data);
            new ((void*)&out_buffer.data) functor_type(*in_functor);
        } else if (op == destroy_functor_tag) {
            functor_type* out_functor = reinterpret_cast<functor_type*>(&out_buffer.data);
            out_functor->~Functor();
        } else {
            const std::type_info& check_type = *static_cast<const std::type_info*>(out_buffer.const_obj_ptr);
            if (check_type == typeid(Functor))
                out_buffer.obj_ptr = &in_buffer.data;
            else
                out_buffer.obj_ptr = 0;
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
template<class R, class T, class A1, class A2> class mf2 { R (T::*f_)(A1, A2); };
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

class Notifier { public: virtual ~Notifier(); };
class Listener { public: virtual ~Listener(); };
namespace RBX { class Instance; namespace Reflection { class PropertyDescriptor; } class ChangeHistoryService : public Notifier, public Listener {}; }

template struct boost::detail::function::functor_manager<boost::_bi::bind_t<void, boost::_mfi::mf2<void, RBX::ChangeHistoryService, boost::shared_ptr<RBX::Instance>, const RBX::Reflection::PropertyDescriptor*>, boost::_bi::list3<boost::_bi::value<RBX::ChangeHistoryService*>, boost::arg<1>, boost::arg<2> > >, std::allocator<void> >;

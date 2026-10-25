// from server: 100% by tester
// roc 2008-06 005b0ac0  unit: RBX::Accoutrement  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b0ac0
//
// 005b0ac0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005b0ac4  85c0                 test eax, eax
// 005b0ac6  752f                 jne 0x5b0af7
// 005b0ac8  8b442408             mov eax, dword ptr [esp + 8]
// 005b0acc  85c0                 test eax, eax
// 005b0ace  744c                 je 0x5b0b1c
// 005b0ad0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b0ad4  8b11                 mov edx, dword ptr [ecx]
// 005b0ad6  8910                 mov dword ptr [eax], edx
// 005b0ad8  8b5104               mov edx, dword ptr [ecx + 4]
// 005b0adb  895004               mov dword ptr [eax + 4], edx
// 005b0ade  8b5108               mov edx, dword ptr [ecx + 8]
// 005b0ae1  895008               mov dword ptr [eax + 8], edx
// 005b0ae4  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005b0ae7  89500c               mov dword ptr [eax + 0xc], edx
// 005b0aea  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005b0aed  895010               mov dword ptr [eax + 0x10], edx
// 005b0af0  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 005b0af3  894814               mov dword ptr [eax + 0x14], ecx
// 005b0af6  c3                   ret 
// 005b0af7  83f801               cmp eax, 1
// 005b0afa  7420                 je 0x5b0b1c
// 005b0afc  56                   push esi
// 005b0afd  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005b0b01  8b0e                 mov ecx, dword ptr [esi]
// 005b0b03  6878cc9400           push 0x94cc78
// 005b0b08  ff1578288000         call dword ptr [0x802878]
// 005b0b0e  0fb6d0               movzx edx, al
// 005b0b11  f7da                 neg edx
// 005b0b13  1bd2                 sbb edx, edx
// 005b0b15  23542408             and edx, dword ptr [esp + 8]
// 005b0b19  8916                 mov dword ptr [esi], edx
// 005b0b1b  5e                   pop esi
// 005b0b1c  c3                   ret 

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
namespace RBX { class Instance; class Accoutrement : public virtual Notifier {}; }

template struct boost::detail::function::functor_manager<boost::_bi::bind_t<void, boost::_mfi::mf1<void, RBX::Accoutrement, boost::shared_ptr<RBX::Instance>>, boost::_bi::list2<boost::_bi::value<RBX::Accoutrement*>, boost::arg<1> > >, std::allocator<void> >;

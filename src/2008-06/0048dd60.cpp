// from server: 100% by tester
// roc 2008-06 0048dd60  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048dd60
//
// 0048dd60  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0048dd64  85c0                 test eax, eax
// 0048dd66  7527                 jne 0x48dd8f
// 0048dd68  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048dd6c  85c9                 test ecx, ecx
// 0048dd6e  747a                 je 0x48ddea
// 0048dd70  8b442404             mov eax, dword ptr [esp + 4]
// 0048dd74  8b10                 mov edx, dword ptr [eax]
// 0048dd76  8911                 mov dword ptr [ecx], edx
// 0048dd78  8b4004               mov eax, dword ptr [eax + 4]
// 0048dd7b  894104               mov dword ptr [ecx + 4], eax
// 0048dd7e  85c0                 test eax, eax
// 0048dd80  7468                 je 0x48ddea
// 0048dd82  83c004               add eax, 4
// 0048dd85  b901000000           mov ecx, 1
// 0048dd8a  f00fc108             lock xadd dword ptr [eax], ecx
// 0048dd8e  c3                   ret 
// 0048dd8f  56                   push esi
// 0048dd90  83f801               cmp eax, 1
// 0048dd93  7536                 jne 0x48ddcb
// 0048dd95  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0048dd99  8b7204               mov esi, dword ptr [edx + 4]
// 0048dd9c  85f6                 test esi, esi
// 0048dd9e  7449                 je 0x48dde9
// 0048dda0  8d4604               lea eax, [esi + 4]
// 0048dda3  83c9ff               or ecx, 0xffffffff
// 0048dda6  f00fc108             lock xadd dword ptr [eax], ecx
// 0048ddaa  753d                 jne 0x48dde9
// 0048ddac  8b16                 mov edx, dword ptr [esi]
// 0048ddae  8b4204               mov eax, dword ptr [edx + 4]
// 0048ddb1  8bce                 mov ecx, esi
// 0048ddb3  ffd0                 call eax
// 0048ddb5  8d4e08               lea ecx, [esi + 8]
// 0048ddb8  83caff               or edx, 0xffffffff
// 0048ddbb  f00fc111             lock xadd dword ptr [ecx], edx
// 0048ddbf  7528                 jne 0x48dde9
// 0048ddc1  8b06                 mov eax, dword ptr [esi]
// 0048ddc3  8b5008               mov edx, dword ptr [eax + 8]
// 0048ddc6  8bce                 mov ecx, esi
// 0048ddc8  5e                   pop esi
// 0048ddc9  ffe2                 jmp edx
// 0048ddcb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0048ddcf  8b0e                 mov ecx, dword ptr [esi]
// 0048ddd1  68105b9300           push 0x935b10
// 0048ddd6  ff1578288000         call dword ptr [0x802878]
// 0048dddc  0fb6c0               movzx eax, al
// 0048dddf  f7d8                 neg eax
// 0048dde1  1bc0                 sbb eax, eax
// 0048dde3  23442408             and eax, dword ptr [esp + 8]
// 0048dde7  8906                 mov dword ptr [esi], eax
// 0048dde9  5e                   pop esi
// 0048ddea  c3                   ret 

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
#include <intrin.h>

namespace boost {
namespace detail {
class sp_counted_base
{
    long use_count_;
    long weak_count_;
public:
    virtual ~sp_counted_base() {}
    virtual void dispose() = 0;
    virtual void destroy() { delete this; }
    virtual void* get_deleter(const std::type_info& ti) = 0;

    void add_ref_copy() { _InterlockedIncrement(&use_count_); }
    void release()
    {
        if (_InterlockedDecrement(&use_count_) == 0) {
            dispose();
            weak_release();
        }
    }
    void weak_release()
    {
        if (_InterlockedDecrement(&weak_count_) == 0)
            destroy();
    }
};

class shared_count
{
    sp_counted_base* pi_;
public:
    shared_count(const shared_count& r) : pi_(r.pi_) { if (pi_ != 0) pi_->add_ref_copy(); }
    ~shared_count() { if (pi_ != 0) pi_->release(); }
};
}

template<class T>
class shared_ptr
{
    T* px;
    detail::shared_count pn;
};
}
namespace RBX { class Instance; }
namespace RBX {
namespace Reflection {
class SignalDescriptor;

template<int Arity, typename Signature>
class SignalDescImpl
{
public:
    class GenericSlotAdapter
    {
        boost::shared_ptr<SignalDescriptor> descriptor;
    };
};
}
}

template struct boost::detail::function::functor_manager<RBX::Reflection::SignalDescImpl<2, void(std::string, boost::shared_ptr<RBX::Instance>)>::GenericSlotAdapter, std::allocator<void> >;

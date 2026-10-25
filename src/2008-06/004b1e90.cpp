// from server: 100% by tester
// roc 2008-06 004b1e90  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b1e90
//
// 004b1e90  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004b1e94  85c0                 test eax, eax
// 004b1e96  7527                 jne 0x4b1ebf
// 004b1e98  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b1e9c  85c9                 test ecx, ecx
// 004b1e9e  747a                 je 0x4b1f1a
// 004b1ea0  8b442404             mov eax, dword ptr [esp + 4]
// 004b1ea4  8b10                 mov edx, dword ptr [eax]
// 004b1ea6  8911                 mov dword ptr [ecx], edx
// 004b1ea8  8b4004               mov eax, dword ptr [eax + 4]
// 004b1eab  894104               mov dword ptr [ecx + 4], eax
// 004b1eae  85c0                 test eax, eax
// 004b1eb0  7468                 je 0x4b1f1a
// 004b1eb2  83c004               add eax, 4
// 004b1eb5  b901000000           mov ecx, 1
// 004b1eba  f00fc108             lock xadd dword ptr [eax], ecx
// 004b1ebe  c3                   ret 
// 004b1ebf  56                   push esi
// 004b1ec0  83f801               cmp eax, 1
// 004b1ec3  7536                 jne 0x4b1efb
// 004b1ec5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004b1ec9  8b7204               mov esi, dword ptr [edx + 4]
// 004b1ecc  85f6                 test esi, esi
// 004b1ece  7449                 je 0x4b1f19
// 004b1ed0  8d4604               lea eax, [esi + 4]
// 004b1ed3  83c9ff               or ecx, 0xffffffff
// 004b1ed6  f00fc108             lock xadd dword ptr [eax], ecx
// 004b1eda  753d                 jne 0x4b1f19
// 004b1edc  8b16                 mov edx, dword ptr [esi]
// 004b1ede  8b4204               mov eax, dword ptr [edx + 4]
// 004b1ee1  8bce                 mov ecx, esi
// 004b1ee3  ffd0                 call eax
// 004b1ee5  8d4e08               lea ecx, [esi + 8]
// 004b1ee8  83caff               or edx, 0xffffffff
// 004b1eeb  f00fc111             lock xadd dword ptr [ecx], edx
// 004b1eef  7528                 jne 0x4b1f19
// 004b1ef1  8b06                 mov eax, dword ptr [esi]
// 004b1ef3  8b5008               mov edx, dword ptr [eax + 8]
// 004b1ef6  8bce                 mov ecx, esi
// 004b1ef8  5e                   pop esi
// 004b1ef9  ffe2                 jmp edx
// 004b1efb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004b1eff  8b0e                 mov ecx, dword ptr [esi]
// 004b1f01  6820b99300           push 0x93b920
// 004b1f06  ff1578288000         call dword ptr [0x802878]
// 004b1f0c  0fb6c0               movzx eax, al
// 004b1f0f  f7d8                 neg eax
// 004b1f11  1bc0                 sbb eax, eax
// 004b1f13  23442408             and eax, dword ptr [esp + 8]
// 004b1f17  8906                 mov dword ptr [esi], eax
// 004b1f19  5e                   pop esi
// 004b1f1a  c3                   ret 

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

template struct boost::detail::function::functor_manager<RBX::Reflection::SignalDescImpl<2, void(std::string, bool)>::GenericSlotAdapter, std::allocator<void> >;

// from server: 100% by tester
// roc 2008-06 00577c70  unit: RBX::VInstance::$$A6AXV?$shared_ptr::V?$function::?$holder  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00577c70
//
// 00577c70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00577c74  85c0                 test eax, eax
// 00577c76  7527                 jne 0x577c9f
// 00577c78  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00577c7c  85c9                 test ecx, ecx
// 00577c7e  747a                 je 0x577cfa
// 00577c80  8b442404             mov eax, dword ptr [esp + 4]
// 00577c84  8b10                 mov edx, dword ptr [eax]
// 00577c86  8911                 mov dword ptr [ecx], edx
// 00577c88  8b4004               mov eax, dword ptr [eax + 4]
// 00577c8b  894104               mov dword ptr [ecx + 4], eax
// 00577c8e  85c0                 test eax, eax
// 00577c90  7468                 je 0x577cfa
// 00577c92  83c004               add eax, 4
// 00577c95  b901000000           mov ecx, 1
// 00577c9a  f00fc108             lock xadd dword ptr [eax], ecx
// 00577c9e  c3                   ret 
// 00577c9f  56                   push esi
// 00577ca0  83f801               cmp eax, 1
// 00577ca3  7536                 jne 0x577cdb
// 00577ca5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00577ca9  8b7204               mov esi, dword ptr [edx + 4]
// 00577cac  85f6                 test esi, esi
// 00577cae  7449                 je 0x577cf9
// 00577cb0  8d4604               lea eax, [esi + 4]
// 00577cb3  83c9ff               or ecx, 0xffffffff
// 00577cb6  f00fc108             lock xadd dword ptr [eax], ecx
// 00577cba  753d                 jne 0x577cf9
// 00577cbc  8b16                 mov edx, dword ptr [esi]
// 00577cbe  8b4204               mov eax, dword ptr [edx + 4]
// 00577cc1  8bce                 mov ecx, esi
// 00577cc3  ffd0                 call eax
// 00577cc5  8d4e08               lea ecx, [esi + 8]
// 00577cc8  83caff               or edx, 0xffffffff
// 00577ccb  f00fc111             lock xadd dword ptr [ecx], edx
// 00577ccf  7528                 jne 0x577cf9
// 00577cd1  8b06                 mov eax, dword ptr [esi]
// 00577cd3  8b5008               mov edx, dword ptr [eax + 8]
// 00577cd6  8bce                 mov ecx, esi
// 00577cd8  5e                   pop esi
// 00577cd9  ffe2                 jmp edx
// 00577cdb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00577cdf  8b0e                 mov ecx, dword ptr [esi]
// 00577ce1  68806d9400           push 0x946d80
// 00577ce6  ff1578288000         call dword ptr [0x802878]
// 00577cec  0fb6c0               movzx eax, al
// 00577cef  f7d8                 neg eax
// 00577cf1  1bc0                 sbb eax, eax
// 00577cf3  23442408             and eax, dword ptr [esp + 8]
// 00577cf7  8906                 mov dword ptr [esi], eax
// 00577cf9  5e                   pop esi
// 00577cfa  c3                   ret 

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

namespace RBX{class Instance;}
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

namespace RBX{class Instance;namespace Reflection{class PropertyDescriptor;}}
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

template struct boost::detail::function::functor_manager<RBX::Reflection::SignalDescImpl<2, void(boost::shared_ptr<RBX::Instance>, const RBX::Reflection::PropertyDescriptor*)>::GenericSlotAdapter, std::allocator<void> >;

// from server: 100% by tester
// roc 2008-06 0062a430  unit: RBX::VInstance::$$A6AXV?$shared_ptr::V?$function::?$holder  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062a430
//
// 0062a430  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0062a434  85c0                 test eax, eax
// 0062a436  7527                 jne 0x62a45f
// 0062a438  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062a43c  85c9                 test ecx, ecx
// 0062a43e  747a                 je 0x62a4ba
// 0062a440  8b442404             mov eax, dword ptr [esp + 4]
// 0062a444  8b10                 mov edx, dword ptr [eax]
// 0062a446  8911                 mov dword ptr [ecx], edx
// 0062a448  8b4004               mov eax, dword ptr [eax + 4]
// 0062a44b  894104               mov dword ptr [ecx + 4], eax
// 0062a44e  85c0                 test eax, eax
// 0062a450  7468                 je 0x62a4ba
// 0062a452  83c004               add eax, 4
// 0062a455  b901000000           mov ecx, 1
// 0062a45a  f00fc108             lock xadd dword ptr [eax], ecx
// 0062a45e  c3                   ret 
// 0062a45f  56                   push esi
// 0062a460  83f801               cmp eax, 1
// 0062a463  7536                 jne 0x62a49b
// 0062a465  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0062a469  8b7204               mov esi, dword ptr [edx + 4]
// 0062a46c  85f6                 test esi, esi
// 0062a46e  7449                 je 0x62a4b9
// 0062a470  8d4604               lea eax, [esi + 4]
// 0062a473  83c9ff               or ecx, 0xffffffff
// 0062a476  f00fc108             lock xadd dword ptr [eax], ecx
// 0062a47a  753d                 jne 0x62a4b9
// 0062a47c  8b16                 mov edx, dword ptr [esi]
// 0062a47e  8b4204               mov eax, dword ptr [edx + 4]
// 0062a481  8bce                 mov ecx, esi
// 0062a483  ffd0                 call eax
// 0062a485  8d4e08               lea ecx, [esi + 8]
// 0062a488  83caff               or edx, 0xffffffff
// 0062a48b  f00fc111             lock xadd dword ptr [ecx], edx
// 0062a48f  7528                 jne 0x62a4b9
// 0062a491  8b06                 mov eax, dword ptr [esi]
// 0062a493  8b5008               mov edx, dword ptr [eax + 8]
// 0062a496  8bce                 mov ecx, esi
// 0062a498  5e                   pop esi
// 0062a499  ffe2                 jmp edx
// 0062a49b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062a49f  8b0e                 mov ecx, dword ptr [esi]
// 0062a4a1  6800ba9500           push 0x95ba00
// 0062a4a6  ff1578288000         call dword ptr [0x802878]
// 0062a4ac  0fb6c0               movzx eax, al
// 0062a4af  f7d8                 neg eax
// 0062a4b1  1bc0                 sbb eax, eax
// 0062a4b3  23442408             and eax, dword ptr [esp + 8]
// 0062a4b7  8906                 mov dword ptr [esi], eax
// 0062a4b9  5e                   pop esi
// 0062a4ba  c3                   ret 

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

namespace RBX{class Instance;}
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

template struct boost::detail::function::functor_manager<RBX::Reflection::SignalDescImpl<2, void(boost::shared_ptr<RBX::Instance>, float)>::GenericSlotAdapter, std::allocator<void> >;

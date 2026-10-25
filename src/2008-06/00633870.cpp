// from server: 100% by tester
// roc 2008-06 00633870  unit: std::X::ZV?$allocator::$$A6AXH::V?$function::?$holder  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00633870
//
// 00633870  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00633874  85c0                 test eax, eax
// 00633876  7527                 jne 0x63389f
// 00633878  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063387c  85c9                 test ecx, ecx
// 0063387e  747a                 je 0x6338fa
// 00633880  8b442404             mov eax, dword ptr [esp + 4]
// 00633884  8b10                 mov edx, dword ptr [eax]
// 00633886  8911                 mov dword ptr [ecx], edx
// 00633888  8b4004               mov eax, dword ptr [eax + 4]
// 0063388b  894104               mov dword ptr [ecx + 4], eax
// 0063388e  85c0                 test eax, eax
// 00633890  7468                 je 0x6338fa
// 00633892  83c004               add eax, 4
// 00633895  b901000000           mov ecx, 1
// 0063389a  f00fc108             lock xadd dword ptr [eax], ecx
// 0063389e  c3                   ret 
// 0063389f  56                   push esi
// 006338a0  83f801               cmp eax, 1
// 006338a3  7536                 jne 0x6338db
// 006338a5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006338a9  8b7204               mov esi, dword ptr [edx + 4]
// 006338ac  85f6                 test esi, esi
// 006338ae  7449                 je 0x6338f9
// 006338b0  8d4604               lea eax, [esi + 4]
// 006338b3  83c9ff               or ecx, 0xffffffff
// 006338b6  f00fc108             lock xadd dword ptr [eax], ecx
// 006338ba  753d                 jne 0x6338f9
// 006338bc  8b16                 mov edx, dword ptr [esi]
// 006338be  8b4204               mov eax, dword ptr [edx + 4]
// 006338c1  8bce                 mov ecx, esi
// 006338c3  ffd0                 call eax
// 006338c5  8d4e08               lea ecx, [esi + 8]
// 006338c8  83caff               or edx, 0xffffffff
// 006338cb  f00fc111             lock xadd dword ptr [ecx], edx
// 006338cf  7528                 jne 0x6338f9
// 006338d1  8b06                 mov eax, dword ptr [esi]
// 006338d3  8b5008               mov edx, dword ptr [eax + 8]
// 006338d6  8bce                 mov ecx, esi
// 006338d8  5e                   pop esi
// 006338d9  ffe2                 jmp edx
// 006338db  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006338df  8b0e                 mov ecx, dword ptr [esi]
// 006338e1  6858e09500           push 0x95e058
// 006338e6  ff1578288000         call dword ptr [0x802878]
// 006338ec  0fb6c0               movzx eax, al
// 006338ef  f7d8                 neg eax
// 006338f1  1bc0                 sbb eax, eax
// 006338f3  23442408             and eax, dword ptr [esp + 8]
// 006338f7  8906                 mov dword ptr [esi], eax
// 006338f9  5e                   pop esi
// 006338fa  c3                   ret 

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

template struct boost::detail::function::functor_manager<RBX::Reflection::SignalDescImpl<1, void(int)>::GenericSlotAdapter, std::allocator<void> >;

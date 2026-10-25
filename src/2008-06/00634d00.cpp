// from server: 100% by tester
// roc 2008-06 00634d00  unit: RBX::$$A6AXVBrickColor::V?$function::?$holder  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00634d00
//
// 00634d00  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00634d04  85c0                 test eax, eax
// 00634d06  7527                 jne 0x634d2f
// 00634d08  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00634d0c  85c9                 test ecx, ecx
// 00634d0e  747a                 je 0x634d8a
// 00634d10  8b442404             mov eax, dword ptr [esp + 4]
// 00634d14  8b10                 mov edx, dword ptr [eax]
// 00634d16  8911                 mov dword ptr [ecx], edx
// 00634d18  8b4004               mov eax, dword ptr [eax + 4]
// 00634d1b  894104               mov dword ptr [ecx + 4], eax
// 00634d1e  85c0                 test eax, eax
// 00634d20  7468                 je 0x634d8a
// 00634d22  83c004               add eax, 4
// 00634d25  b901000000           mov ecx, 1
// 00634d2a  f00fc108             lock xadd dword ptr [eax], ecx
// 00634d2e  c3                   ret 
// 00634d2f  56                   push esi
// 00634d30  83f801               cmp eax, 1
// 00634d33  7536                 jne 0x634d6b
// 00634d35  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00634d39  8b7204               mov esi, dword ptr [edx + 4]
// 00634d3c  85f6                 test esi, esi
// 00634d3e  7449                 je 0x634d89
// 00634d40  8d4604               lea eax, [esi + 4]
// 00634d43  83c9ff               or ecx, 0xffffffff
// 00634d46  f00fc108             lock xadd dword ptr [eax], ecx
// 00634d4a  753d                 jne 0x634d89
// 00634d4c  8b16                 mov edx, dword ptr [esi]
// 00634d4e  8b4204               mov eax, dword ptr [edx + 4]
// 00634d51  8bce                 mov ecx, esi
// 00634d53  ffd0                 call eax
// 00634d55  8d4e08               lea ecx, [esi + 8]
// 00634d58  83caff               or edx, 0xffffffff
// 00634d5b  f00fc111             lock xadd dword ptr [ecx], edx
// 00634d5f  7528                 jne 0x634d89
// 00634d61  8b06                 mov eax, dword ptr [esi]
// 00634d63  8b5008               mov edx, dword ptr [eax + 8]
// 00634d66  8bce                 mov ecx, esi
// 00634d68  5e                   pop esi
// 00634d69  ffe2                 jmp edx
// 00634d6b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00634d6f  8b0e                 mov ecx, dword ptr [esi]
// 00634d71  6880ef9500           push 0x95ef80
// 00634d76  ff1578288000         call dword ptr [0x802878]
// 00634d7c  0fb6c0               movzx eax, al
// 00634d7f  f7d8                 neg eax
// 00634d81  1bc0                 sbb eax, eax
// 00634d83  23442408             and eax, dword ptr [esp + 8]
// 00634d87  8906                 mov dword ptr [esi], eax
// 00634d89  5e                   pop esi
// 00634d8a  c3                   ret 

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

namespace RBX{class BrickColor{};}
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

template struct boost::detail::function::functor_manager<RBX::Reflection::SignalDescImpl<1, void(RBX::BrickColor)>::GenericSlotAdapter, std::allocator<void> >;

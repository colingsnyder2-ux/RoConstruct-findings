// from server: 100% by tester
// roc 2008-06 005da030  unit: RBX::VPartInstance::?$FilteredSelection  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005da030
//
// 005da030  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005da034  85c0                 test eax, eax
// 005da036  7527                 jne 0x5da05f
// 005da038  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005da03c  85c9                 test ecx, ecx
// 005da03e  747a                 je 0x5da0ba
// 005da040  8b442404             mov eax, dword ptr [esp + 4]
// 005da044  8b10                 mov edx, dword ptr [eax]
// 005da046  8911                 mov dword ptr [ecx], edx
// 005da048  8b4004               mov eax, dword ptr [eax + 4]
// 005da04b  894104               mov dword ptr [ecx + 4], eax
// 005da04e  85c0                 test eax, eax
// 005da050  7468                 je 0x5da0ba
// 005da052  83c004               add eax, 4
// 005da055  b901000000           mov ecx, 1
// 005da05a  f00fc108             lock xadd dword ptr [eax], ecx
// 005da05e  c3                   ret 
// 005da05f  56                   push esi
// 005da060  83f801               cmp eax, 1
// 005da063  7536                 jne 0x5da09b
// 005da065  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005da069  8b7204               mov esi, dword ptr [edx + 4]
// 005da06c  85f6                 test esi, esi
// 005da06e  7449                 je 0x5da0b9
// 005da070  8d4604               lea eax, [esi + 4]
// 005da073  83c9ff               or ecx, 0xffffffff
// 005da076  f00fc108             lock xadd dword ptr [eax], ecx
// 005da07a  753d                 jne 0x5da0b9
// 005da07c  8b16                 mov edx, dword ptr [esi]
// 005da07e  8b4204               mov eax, dword ptr [edx + 4]
// 005da081  8bce                 mov ecx, esi
// 005da083  ffd0                 call eax
// 005da085  8d4e08               lea ecx, [esi + 8]
// 005da088  83caff               or edx, 0xffffffff
// 005da08b  f00fc111             lock xadd dword ptr [ecx], edx
// 005da08f  7528                 jne 0x5da0b9
// 005da091  8b06                 mov eax, dword ptr [esi]
// 005da093  8b5008               mov edx, dword ptr [eax + 8]
// 005da096  8bce                 mov ecx, esi
// 005da098  5e                   pop esi
// 005da099  ffe2                 jmp edx
// 005da09b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005da09f  8b0e                 mov ecx, dword ptr [esi]
// 005da0a1  68083e9500           push 0x953e08
// 005da0a6  ff1578288000         call dword ptr [0x802878]
// 005da0ac  0fb6c0               movzx eax, al
// 005da0af  f7d8                 neg eax
// 005da0b1  1bc0                 sbb eax, eax
// 005da0b3  23442408             and eax, dword ptr [esp + 8]
// 005da0b7  8906                 mov dword ptr [esi], eax
// 005da0b9  5e                   pop esi
// 005da0ba  c3                   ret 

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

template struct boost::detail::function::functor_manager<RBX::Reflection::SignalDescImpl<1, void(bool)>::GenericSlotAdapter, std::allocator<void> >;

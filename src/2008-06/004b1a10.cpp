// from server: 100% by tester
// roc 2008-06 004b1a10  unit: std::X::$$A6AXXZV?$allocator::V?$function::?$holder  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b1a10
//
// 004b1a10  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004b1a14  85c0                 test eax, eax
// 004b1a16  7527                 jne 0x4b1a3f
// 004b1a18  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b1a1c  85c9                 test ecx, ecx
// 004b1a1e  747a                 je 0x4b1a9a
// 004b1a20  8b442404             mov eax, dword ptr [esp + 4]
// 004b1a24  8b10                 mov edx, dword ptr [eax]
// 004b1a26  8911                 mov dword ptr [ecx], edx
// 004b1a28  8b4004               mov eax, dword ptr [eax + 4]
// 004b1a2b  894104               mov dword ptr [ecx + 4], eax
// 004b1a2e  85c0                 test eax, eax
// 004b1a30  7468                 je 0x4b1a9a
// 004b1a32  83c004               add eax, 4
// 004b1a35  b901000000           mov ecx, 1
// 004b1a3a  f00fc108             lock xadd dword ptr [eax], ecx
// 004b1a3e  c3                   ret 
// 004b1a3f  56                   push esi
// 004b1a40  83f801               cmp eax, 1
// 004b1a43  7536                 jne 0x4b1a7b
// 004b1a45  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004b1a49  8b7204               mov esi, dword ptr [edx + 4]
// 004b1a4c  85f6                 test esi, esi
// 004b1a4e  7449                 je 0x4b1a99
// 004b1a50  8d4604               lea eax, [esi + 4]
// 004b1a53  83c9ff               or ecx, 0xffffffff
// 004b1a56  f00fc108             lock xadd dword ptr [eax], ecx
// 004b1a5a  753d                 jne 0x4b1a99
// 004b1a5c  8b16                 mov edx, dword ptr [esi]
// 004b1a5e  8b4204               mov eax, dword ptr [edx + 4]
// 004b1a61  8bce                 mov ecx, esi
// 004b1a63  ffd0                 call eax
// 004b1a65  8d4e08               lea ecx, [esi + 8]
// 004b1a68  83caff               or edx, 0xffffffff
// 004b1a6b  f00fc111             lock xadd dword ptr [ecx], edx
// 004b1a6f  7528                 jne 0x4b1a99
// 004b1a71  8b06                 mov eax, dword ptr [esi]
// 004b1a73  8b5008               mov edx, dword ptr [eax + 8]
// 004b1a76  8bce                 mov ecx, esi
// 004b1a78  5e                   pop esi
// 004b1a79  ffe2                 jmp edx
// 004b1a7b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004b1a7f  8b0e                 mov ecx, dword ptr [esi]
// 004b1a81  6890b59300           push 0x93b590
// 004b1a86  ff1578288000         call dword ptr [0x802878]
// 004b1a8c  0fb6c0               movzx eax, al
// 004b1a8f  f7d8                 neg eax
// 004b1a91  1bc0                 sbb eax, eax
// 004b1a93  23442408             and eax, dword ptr [esp + 8]
// 004b1a97  8906                 mov dword ptr [esi], eax
// 004b1a99  5e                   pop esi
// 004b1a9a  c3                   ret 

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

template struct boost::detail::function::functor_manager<RBX::Reflection::SignalDescImpl<0, void()>::GenericSlotAdapter, std::allocator<void> >;

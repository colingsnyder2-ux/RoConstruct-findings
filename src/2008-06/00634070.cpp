// from server: 100% by tester
// roc 2008-06 00634070  unit: G3D::$$A6AXVVector3::V?$function::?$holder  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00634070
//
// 00634070  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00634074  85c0                 test eax, eax
// 00634076  7527                 jne 0x63409f
// 00634078  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063407c  85c9                 test ecx, ecx
// 0063407e  747a                 je 0x6340fa
// 00634080  8b442404             mov eax, dword ptr [esp + 4]
// 00634084  8b10                 mov edx, dword ptr [eax]
// 00634086  8911                 mov dword ptr [ecx], edx
// 00634088  8b4004               mov eax, dword ptr [eax + 4]
// 0063408b  894104               mov dword ptr [ecx + 4], eax
// 0063408e  85c0                 test eax, eax
// 00634090  7468                 je 0x6340fa
// 00634092  83c004               add eax, 4
// 00634095  b901000000           mov ecx, 1
// 0063409a  f00fc108             lock xadd dword ptr [eax], ecx
// 0063409e  c3                   ret 
// 0063409f  56                   push esi
// 006340a0  83f801               cmp eax, 1
// 006340a3  7536                 jne 0x6340db
// 006340a5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006340a9  8b7204               mov esi, dword ptr [edx + 4]
// 006340ac  85f6                 test esi, esi
// 006340ae  7449                 je 0x6340f9
// 006340b0  8d4604               lea eax, [esi + 4]
// 006340b3  83c9ff               or ecx, 0xffffffff
// 006340b6  f00fc108             lock xadd dword ptr [eax], ecx
// 006340ba  753d                 jne 0x6340f9
// 006340bc  8b16                 mov edx, dword ptr [esi]
// 006340be  8b4204               mov eax, dword ptr [edx + 4]
// 006340c1  8bce                 mov ecx, esi
// 006340c3  ffd0                 call eax
// 006340c5  8d4e08               lea ecx, [esi + 8]
// 006340c8  83caff               or edx, 0xffffffff
// 006340cb  f00fc111             lock xadd dword ptr [ecx], edx
// 006340cf  7528                 jne 0x6340f9
// 006340d1  8b06                 mov eax, dword ptr [esi]
// 006340d3  8b5008               mov edx, dword ptr [eax + 8]
// 006340d6  8bce                 mov ecx, esi
// 006340d8  5e                   pop esi
// 006340d9  ffe2                 jmp edx
// 006340db  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006340df  8b0e                 mov ecx, dword ptr [esi]
// 006340e1  68c0e59500           push 0x95e5c0
// 006340e6  ff1578288000         call dword ptr [0x802878]
// 006340ec  0fb6c0               movzx eax, al
// 006340ef  f7d8                 neg eax
// 006340f1  1bc0                 sbb eax, eax
// 006340f3  23442408             and eax, dword ptr [esp + 8]
// 006340f7  8906                 mov dword ptr [esi], eax
// 006340f9  5e                   pop esi
// 006340fa  c3                   ret 

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

namespace G3D{class Vector3{};}
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

template struct boost::detail::function::functor_manager<RBX::Reflection::SignalDescImpl<1, void(G3D::Vector3)>::GenericSlotAdapter, std::allocator<void> >;

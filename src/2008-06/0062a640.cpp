// from server: 100% by tester
// roc 2008-06 0062a640  unit: RBX::VExplosion::?$SignalDesc  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062a640
//
// 0062a640  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0062a644  83f803               cmp eax, 3
// 0062a647  741e                 je 0x62a667
// 0062a649  8b542408             mov edx, dword ptr [esp + 8]
// 0062a64d  c644240c00           mov byte ptr [esp + 0xc], 0
// 0062a652  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062a656  51                   push ecx
// 0062a657  50                   push eax
// 0062a658  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0062a65c  52                   push edx
// 0062a65d  50                   push eax
// 0062a65e  e8cdfdffff           call 0x62a430
// 0062a663  83c410               add esp, 0x10
// 0062a666  c3                   ret 
// 0062a667  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062a66b  c70100ba9500         mov dword ptr [ecx], 0x95ba00
// 0062a671  c3                   ret 

#include <typeinfo>
#include <memory>
#include <string>

namespace boost {
namespace detail {
namespace function {

union function_buffer
{
    void* obj_ptr;
    const void* const_obj_ptr;
    void (*func_ptr)();
    char data;
};

enum functor_manager_operation_type
{
    clone_functor_tag,
    destroy_functor_tag,
    check_functor_type_tag,
    get_functor_type_tag
};

struct function_obj_tag {};

template<typename Functor, typename Allocator>
struct functor_manager
{
    typedef Functor functor_type;

    static void manager(const function_buffer& in_buffer, function_buffer& out_buffer,
                        functor_manager_operation_type op, function_obj_tag);

    static void manage(const function_buffer& in_buffer, function_buffer& out_buffer,
                       functor_manager_operation_type op)
    {
        switch (op) {
        case get_functor_type_tag:
            out_buffer.const_obj_ptr = &typeid(functor_type);
            return;
        default:
            manager(in_buffer, out_buffer, op, function_obj_tag());
            return;
        }
    }
};

}
}
}
namespace RBX { class Instance; namespace Reflection { class PropertyDescriptor; } }
namespace boost { template<class T> class shared_ptr { T* px; void* pn; }; }
namespace RBX {
namespace Reflection {
template<int Arity, typename Signature>
class SignalDescImpl
{
public:
    class GenericSlotAdapter
    {
        void* desc;
    };
};
}
}

template struct boost::detail::function::functor_manager<RBX::Reflection::SignalDescImpl<2, void(boost::shared_ptr<RBX::Instance>, float)>::GenericSlotAdapter, std::allocator<void> >;

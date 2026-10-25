// from server: 100% by tester
// roc 2008-06 00633e80  unit: RBX::VBrickColor::V?$Value::?$DescribedCreatable  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00633e80
//
// 00633e80  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00633e84  83f803               cmp eax, 3
// 00633e87  741e                 je 0x633ea7
// 00633e89  8b542408             mov edx, dword ptr [esp + 8]
// 00633e8d  c644240c00           mov byte ptr [esp + 0xc], 0
// 00633e92  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00633e96  51                   push ecx
// 00633e97  50                   push eax
// 00633e98  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00633e9c  52                   push edx
// 00633e9d  50                   push eax
// 00633e9e  e8cdfdffff           call 0x633c70
// 00633ea3  83c410               add esp, 0x10
// 00633ea6  c3                   ret 
// 00633ea7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00633eab  c701f0e29500         mov dword ptr [ecx], 0x95e2f0
// 00633eb1  c3                   ret 

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

template struct boost::detail::function::functor_manager<RBX::Reflection::SignalDescImpl<1, void(double)>::GenericSlotAdapter, std::allocator<void> >;

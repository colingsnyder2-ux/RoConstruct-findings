// from server: 100% by tester
// roc 2008-06 00634680  unit: RBX::VBrickColor::V?$Value::?$DescribedCreatable  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00634680
//
// 00634680  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00634684  83f803               cmp eax, 3
// 00634687  741e                 je 0x6346a7
// 00634689  8b542408             mov edx, dword ptr [esp + 8]
// 0063468d  c644240c00           mov byte ptr [esp + 0xc], 0
// 00634692  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00634696  51                   push ecx
// 00634697  50                   push eax
// 00634698  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063469c  52                   push edx
// 0063469d  50                   push eax
// 0063469e  e8cdfdffff           call 0x634470
// 006346a3  83c410               add esp, 0x10
// 006346a6  c3                   ret 
// 006346a7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006346ab  c70100e99500         mov dword ptr [ecx], 0x95e900
// 006346b1  c3                   ret 

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
namespace G3D { class Vector3 { public: float x, y, z; }; class Color3 { public: float r, g, b; }; class CoordinateFrame { public: float m[12]; }; }
namespace RBX { class BrickColor { int number; }; }
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

template struct boost::detail::function::functor_manager<RBX::Reflection::SignalDescImpl<1, void(G3D::CoordinateFrame)>::GenericSlotAdapter, std::allocator<void> >;

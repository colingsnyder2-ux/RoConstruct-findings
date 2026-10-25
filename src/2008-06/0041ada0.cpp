// from server: 100% by tester
// roc 2008-06 0041ada0  unit: VDHTMLWindow::?$BoundFuncDesc  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041ada0
//
// 0041ada0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041ada4  83f803               cmp eax, 3
// 0041ada7  741e                 je 0x41adc7
// 0041ada9  8b542408             mov edx, dword ptr [esp + 8]
// 0041adad  c644240c00           mov byte ptr [esp + 0xc], 0
// 0041adb2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041adb6  51                   push ecx
// 0041adb7  50                   push eax
// 0041adb8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041adbc  52                   push edx
// 0041adbd  50                   push eax
// 0041adbe  e88dfbffff           call 0x41a950
// 0041adc3  83c410               add esp, 0x10
// 0041adc6  c3                   ret 
// 0041adc7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041adcb  c701c0ce9200         mov dword ptr [ecx], 0x92cec0
// 0041add1  c3                   ret 

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

template struct boost::detail::function::functor_manager<RBX::Reflection::SignalDescImpl<1, void(std::string)>::GenericSlotAdapter, std::allocator<void> >;

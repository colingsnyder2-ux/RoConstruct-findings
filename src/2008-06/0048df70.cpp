// from server: 100% by tester
// roc 2008-06 0048df70  unit: RBX::Network::VPlayer::?$SignalDesc  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048df70
//
// 0048df70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0048df74  83f803               cmp eax, 3
// 0048df77  741e                 je 0x48df97
// 0048df79  8b542408             mov edx, dword ptr [esp + 8]
// 0048df7d  c644240c00           mov byte ptr [esp + 0xc], 0
// 0048df82  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048df86  51                   push ecx
// 0048df87  50                   push eax
// 0048df88  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0048df8c  52                   push edx
// 0048df8d  50                   push eax
// 0048df8e  e8cdfdffff           call 0x48dd60
// 0048df93  83c410               add esp, 0x10
// 0048df96  c3                   ret 
// 0048df97  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048df9b  c701105b9300         mov dword ptr [ecx], 0x935b10
// 0048dfa1  c3                   ret 

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

template struct boost::detail::function::functor_manager<RBX::Reflection::SignalDescImpl<2, void(std::string, boost::shared_ptr<RBX::Instance>)>::GenericSlotAdapter, std::allocator<void> >;

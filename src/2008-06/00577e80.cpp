// from server: 100% by tester
// roc 2008-06 00577e80  unit: RBX::VDataModel::?$SignalDesc  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00577e80
//
// 00577e80  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00577e84  83f803               cmp eax, 3
// 00577e87  741e                 je 0x577ea7
// 00577e89  8b542408             mov edx, dword ptr [esp + 8]
// 00577e8d  c644240c00           mov byte ptr [esp + 0xc], 0
// 00577e92  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00577e96  51                   push ecx
// 00577e97  50                   push eax
// 00577e98  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00577e9c  52                   push edx
// 00577e9d  50                   push eax
// 00577e9e  e8cdfdffff           call 0x577c70
// 00577ea3  83c410               add esp, 0x10
// 00577ea6  c3                   ret 
// 00577ea7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00577eab  c701806d9400         mov dword ptr [ecx], 0x946d80
// 00577eb1  c3                   ret 

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

template struct boost::detail::function::functor_manager<RBX::Reflection::SignalDescImpl<2, void(boost::shared_ptr<RBX::Instance>, const RBX::Reflection::PropertyDescriptor*)>::GenericSlotAdapter, std::allocator<void> >;

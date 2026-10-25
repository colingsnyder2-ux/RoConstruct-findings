// from server: 100% by tester
// roc 2008-06 0049f920  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$TSignalDesc::TSignalInstance  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049f920
//
// 0049f920  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0049f924  83f803               cmp eax, 3
// 0049f927  741e                 je 0x49f947
// 0049f929  8b542408             mov edx, dword ptr [esp + 8]
// 0049f92d  c644240c00           mov byte ptr [esp + 0xc], 0
// 0049f932  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049f936  51                   push ecx
// 0049f937  50                   push eax
// 0049f938  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0049f93c  52                   push edx
// 0049f93d  50                   push eax
// 0049f93e  e83dfdffff           call 0x49f680
// 0049f943  83c410               add esp, 0x10
// 0049f946  c3                   ret 
// 0049f947  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049f94b  c70140919300         mov dword ptr [ecx], 0x939140
// 0049f951  c3                   ret 

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

template struct boost::detail::function::functor_manager<RBX::Reflection::SignalDescImpl<3, void(std::string, int, std::string)>::GenericSlotAdapter, std::allocator<void> >;

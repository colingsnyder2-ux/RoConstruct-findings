// from server: 100% by tester
// roc 2008-06 0042a180  unit: ThreadLogManager  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042a180
//
// 0042a180  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042a184  83f803               cmp eax, 3
// 0042a187  741e                 je 0x42a1a7
// 0042a189  8b542408             mov edx, dword ptr [esp + 8]
// 0042a18d  c644240c00           mov byte ptr [esp + 0xc], 0
// 0042a192  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042a196  51                   push ecx
// 0042a197  50                   push eax
// 0042a198  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042a19c  52                   push edx
// 0042a19d  50                   push eax
// 0042a19e  e88df7ffff           call 0x429930
// 0042a1a3  83c410               add esp, 0x10
// 0042a1a6  c3                   ret 
// 0042a1a7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042a1ab  c701d0e59200         mov dword ptr [ecx], 0x92e5d0
// 0042a1b1  c3                   ret 

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

class ThreadLogManager;

namespace boost {
namespace detail {
template<typename T>
struct tss_adapter
{
    void* cleanup[4];
};
}
}

template struct boost::detail::function::functor_manager<boost::detail::tss_adapter<ThreadLogManager>, std::allocator<void> >;

// roc 2010-06 00467320  unit: CRobloxWnd::PartDropTarget  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00467320
//
// 00467320  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00467324  33c9                 xor ecx, ecx
// 00467326  3bc1                 cmp eax, ecx
// 00467328  7441                 je 0x46736b
// 0046732a  83f801               cmp eax, 1
// 0046732d  743c                 je 0x46736b
// 0046732f  83f802               cmp eax, 2
// 00467332  744d                 je 0x467381
// 00467334  83f803               cmp eax, 3
// 00467337  7521                 jne 0x46735a
// 00467339  56                   push esi
// 0046733a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0046733e  8b0e                 mov ecx, dword ptr [esi]
// 00467340  682845b800           push 0xb84528
// 00467345  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0046734b  0fb6c0               movzx eax, al
// 0046734e  f7d8                 neg eax
// 00467350  1bc0                 sbb eax, eax
// 00467352  23442408             and eax, dword ptr [esp + 8]
// 00467356  8906                 mov dword ptr [esi], eax
// 00467358  5e                   pop esi
// 00467359  c3                   ret 
// 0046735a  8b442408             mov eax, dword ptr [esp + 8]
// 0046735e  c7002845b800         mov dword ptr [eax], 0xb84528
// 00467364  884804               mov byte ptr [eax + 4], cl
// 00467367  884805               mov byte ptr [eax + 5], cl
// 0046736a  c3                   ret 
// 0046736b  8b442408             mov eax, dword ptr [esp + 8]
// 0046736f  3bc1                 cmp eax, ecx
// 00467371  740e                 je 0x467381
// 00467373  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00467377  8b11                 mov edx, dword ptr [ecx]
// 00467379  8910                 mov dword ptr [eax], edx
// 0046737b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0046737e  894804               mov dword ptr [eax + 4], ecx
// 00467381  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

#include <typeinfo>
#include <new>

// boost::detail::function::functor_manager<F>::manage for a small, trivially copyable functor
// stored in place; 0xb3346c is typeid(F)
extern const type_info type_descriptor_b3346c;

struct Functor
{
    int f0, f1;
};

union function_buffer
{
    void *obj_ptr;
    struct
    {
        const type_info *type;
        bool const_qualified;
        bool volatile_qualified;
    } type;
    char data[8];
};

enum functor_manager_operation_type
{
    clone_functor_tag,
    move_functor_tag,
    destroy_functor_tag,
    check_functor_type_tag,
    get_functor_type_tag
};

void manage(const function_buffer &in_buffer, function_buffer &out_buffer, functor_manager_operation_type op)
{
    if (op == clone_functor_tag || op == move_functor_tag) {
        const Functor *in_functor = reinterpret_cast<const Functor *>(&in_buffer.data);
        new ((void *)&out_buffer.data) Functor(*in_functor);
    } else if (op == destroy_functor_tag) {
    } else if (op == check_functor_type_tag) {
        const type_info &check_type = *out_buffer.type.type;
        if (check_type == type_descriptor_b3346c)
            out_buffer.obj_ptr = (void *)&in_buffer.data;
        else
            out_buffer.obj_ptr = 0;
    } else {
        out_buffer.type.type = &type_descriptor_b3346c;
        out_buffer.type.const_qualified = false;
        out_buffer.type.volatile_qualified = false;
    }
}
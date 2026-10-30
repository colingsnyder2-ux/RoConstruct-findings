// roc 2009-06 0045a660  unit: CRobloxWnd::PartDropTarget  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0045a660
//
// 0045a660  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0045a664  33c9                 xor ecx, ecx
// 0045a666  3bc1                 cmp eax, ecx
// 0045a668  7441                 je 0x45a6ab
// 0045a66a  83f801               cmp eax, 1
// 0045a66d  743c                 je 0x45a6ab
// 0045a66f  83f802               cmp eax, 2
// 0045a672  744d                 je 0x45a6c1
// 0045a674  83f803               cmp eax, 3
// 0045a677  7521                 jne 0x45a69a
// 0045a679  56                   push esi
// 0045a67a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0045a67e  8b0e                 mov ecx, dword ptr [esi]
// 0045a680  6800609e00           push 0x9e6000
// 0045a685  ff15a4e98900         call dword ptr [0x89e9a4]
// 0045a68b  0fb6c0               movzx eax, al
// 0045a68e  f7d8                 neg eax
// 0045a690  1bc0                 sbb eax, eax
// 0045a692  23442408             and eax, dword ptr [esp + 8]
// 0045a696  8906                 mov dword ptr [esi], eax
// 0045a698  5e                   pop esi
// 0045a699  c3                   ret 
// 0045a69a  8b442408             mov eax, dword ptr [esp + 8]
// 0045a69e  c70000609e00         mov dword ptr [eax], 0x9e6000
// 0045a6a4  884804               mov byte ptr [eax + 4], cl
// 0045a6a7  884805               mov byte ptr [eax + 5], cl
// 0045a6aa  c3                   ret 
// 0045a6ab  8b442408             mov eax, dword ptr [esp + 8]
// 0045a6af  3bc1                 cmp eax, ecx
// 0045a6b1  740e                 je 0x45a6c1
// 0045a6b3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0045a6b7  8b11                 mov edx, dword ptr [ecx]
// 0045a6b9  8910                 mov dword ptr [eax], edx
// 0045a6bb  8b4904               mov ecx, dword ptr [ecx + 4]
// 0045a6be  894804               mov dword ptr [eax + 4], ecx
// 0045a6c1  c3                   ret 
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
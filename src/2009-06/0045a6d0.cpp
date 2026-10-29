// roc 2009-06 0045a6d0  unit: CRobloxWnd::PartDropTarget  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0045a6d0
//
// 0045a6d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0045a6d4  33c9                 xor ecx, ecx
// 0045a6d6  3bc1                 cmp eax, ecx
// 0045a6d8  7441                 je 0x45a71b
// 0045a6da  83f801               cmp eax, 1
// 0045a6dd  743c                 je 0x45a71b
// 0045a6df  83f802               cmp eax, 2
// 0045a6e2  744d                 je 0x45a731
// 0045a6e4  83f803               cmp eax, 3
// 0045a6e7  7521                 jne 0x45a70a
// 0045a6e9  56                   push esi
// 0045a6ea  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0045a6ee  8b0e                 mov ecx, dword ptr [esi]
// 0045a6f0  6860609e00           push 0x9e6060
// 0045a6f5  ff15a4e98900         call dword ptr [0x89e9a4]
// 0045a6fb  0fb6c0               movzx eax, al
// 0045a6fe  f7d8                 neg eax
// 0045a700  1bc0                 sbb eax, eax
// 0045a702  23442408             and eax, dword ptr [esp + 8]
// 0045a706  8906                 mov dword ptr [esi], eax
// 0045a708  5e                   pop esi
// 0045a709  c3                   ret 
// 0045a70a  8b442408             mov eax, dword ptr [esp + 8]
// 0045a70e  c70060609e00         mov dword ptr [eax], 0x9e6060
// 0045a714  884804               mov byte ptr [eax + 4], cl
// 0045a717  884805               mov byte ptr [eax + 5], cl
// 0045a71a  c3                   ret 
// 0045a71b  8b442408             mov eax, dword ptr [esp + 8]
// 0045a71f  3bc1                 cmp eax, ecx
// 0045a721  740e                 je 0x45a731
// 0045a723  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0045a727  8b11                 mov edx, dword ptr [ecx]
// 0045a729  8910                 mov dword ptr [eax], edx
// 0045a72b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0045a72e  894804               mov dword ptr [eax + 4], ecx
// 0045a731  c3                   ret 
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
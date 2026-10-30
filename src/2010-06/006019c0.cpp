// roc 2010-06 006019c0  unit: RBX::Workspace  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006019c0
//
// 006019c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006019c4  33c9                 xor ecx, ecx
// 006019c6  3bc1                 cmp eax, ecx
// 006019c8  7441                 je 0x601a0b
// 006019ca  83f801               cmp eax, 1
// 006019cd  743c                 je 0x601a0b
// 006019cf  83f802               cmp eax, 2
// 006019d2  744d                 je 0x601a21
// 006019d4  83f803               cmp eax, 3
// 006019d7  7521                 jne 0x6019fa
// 006019d9  56                   push esi
// 006019da  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006019de  8b0e                 mov ecx, dword ptr [esi]
// 006019e0  6810e9ba00           push 0xbae910
// 006019e5  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 006019eb  0fb6c0               movzx eax, al
// 006019ee  f7d8                 neg eax
// 006019f0  1bc0                 sbb eax, eax
// 006019f2  23442408             and eax, dword ptr [esp + 8]
// 006019f6  8906                 mov dword ptr [esi], eax
// 006019f8  5e                   pop esi
// 006019f9  c3                   ret 
// 006019fa  8b442408             mov eax, dword ptr [esp + 8]
// 006019fe  c70010e9ba00         mov dword ptr [eax], 0xbae910
// 00601a04  884804               mov byte ptr [eax + 4], cl
// 00601a07  884805               mov byte ptr [eax + 5], cl
// 00601a0a  c3                   ret 
// 00601a0b  8b442408             mov eax, dword ptr [esp + 8]
// 00601a0f  3bc1                 cmp eax, ecx
// 00601a11  740e                 je 0x601a21
// 00601a13  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00601a17  8b11                 mov edx, dword ptr [ecx]
// 00601a19  8910                 mov dword ptr [eax], edx
// 00601a1b  8b4904               mov ecx, dword ptr [ecx + 4]
// 00601a1e  894804               mov dword ptr [eax + 4], ecx
// 00601a21  c3                   ret 
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
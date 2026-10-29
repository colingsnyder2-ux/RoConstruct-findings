// roc 2009-06 006c9be0  unit: seg_006c0000  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c9be0
//
// 006c9be0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006c9be4  33c9                 xor ecx, ecx
// 006c9be6  3bc1                 cmp eax, ecx
// 006c9be8  7441                 je 0x6c9c2b
// 006c9bea  83f801               cmp eax, 1
// 006c9bed  743c                 je 0x6c9c2b
// 006c9bef  83f802               cmp eax, 2
// 006c9bf2  744d                 je 0x6c9c41
// 006c9bf4  83f803               cmp eax, 3
// 006c9bf7  7521                 jne 0x6c9c1a
// 006c9bf9  56                   push esi
// 006c9bfa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c9bfe  8b0e                 mov ecx, dword ptr [esi]
// 006c9c00  68d02ea200           push 0xa22ed0
// 006c9c05  ff15a4e98900         call dword ptr [0x89e9a4]
// 006c9c0b  0fb6c0               movzx eax, al
// 006c9c0e  f7d8                 neg eax
// 006c9c10  1bc0                 sbb eax, eax
// 006c9c12  23442408             and eax, dword ptr [esp + 8]
// 006c9c16  8906                 mov dword ptr [esi], eax
// 006c9c18  5e                   pop esi
// 006c9c19  c3                   ret 
// 006c9c1a  8b442408             mov eax, dword ptr [esp + 8]
// 006c9c1e  c700d02ea200         mov dword ptr [eax], 0xa22ed0
// 006c9c24  884804               mov byte ptr [eax + 4], cl
// 006c9c27  884805               mov byte ptr [eax + 5], cl
// 006c9c2a  c3                   ret 
// 006c9c2b  8b442408             mov eax, dword ptr [esp + 8]
// 006c9c2f  3bc1                 cmp eax, ecx
// 006c9c31  740e                 je 0x6c9c41
// 006c9c33  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006c9c37  8b11                 mov edx, dword ptr [ecx]
// 006c9c39  8910                 mov dword ptr [eax], edx
// 006c9c3b  8b4904               mov ecx, dword ptr [ecx + 4]
// 006c9c3e  894804               mov dword ptr [eax + 4], ecx
// 006c9c41  c3                   ret 
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
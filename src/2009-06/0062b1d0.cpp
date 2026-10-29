// roc 2009-06 0062b1d0  unit: RBX::Workspace  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062b1d0
//
// 0062b1d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0062b1d4  33c9                 xor ecx, ecx
// 0062b1d6  3bc1                 cmp eax, ecx
// 0062b1d8  7441                 je 0x62b21b
// 0062b1da  83f801               cmp eax, 1
// 0062b1dd  743c                 je 0x62b21b
// 0062b1df  83f802               cmp eax, 2
// 0062b1e2  744d                 je 0x62b231
// 0062b1e4  83f803               cmp eax, 3
// 0062b1e7  7521                 jne 0x62b20a
// 0062b1e9  56                   push esi
// 0062b1ea  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062b1ee  8b0e                 mov ecx, dword ptr [esi]
// 0062b1f0  6848bda000           push 0xa0bd48
// 0062b1f5  ff15a4e98900         call dword ptr [0x89e9a4]
// 0062b1fb  0fb6c0               movzx eax, al
// 0062b1fe  f7d8                 neg eax
// 0062b200  1bc0                 sbb eax, eax
// 0062b202  23442408             and eax, dword ptr [esp + 8]
// 0062b206  8906                 mov dword ptr [esi], eax
// 0062b208  5e                   pop esi
// 0062b209  c3                   ret 
// 0062b20a  8b442408             mov eax, dword ptr [esp + 8]
// 0062b20e  c70048bda000         mov dword ptr [eax], 0xa0bd48
// 0062b214  884804               mov byte ptr [eax + 4], cl
// 0062b217  884805               mov byte ptr [eax + 5], cl
// 0062b21a  c3                   ret 
// 0062b21b  8b442408             mov eax, dword ptr [esp + 8]
// 0062b21f  3bc1                 cmp eax, ecx
// 0062b221  740e                 je 0x62b231
// 0062b223  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0062b227  8b11                 mov edx, dword ptr [ecx]
// 0062b229  8910                 mov dword ptr [eax], edx
// 0062b22b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0062b22e  894804               mov dword ptr [eax + 4], ecx
// 0062b231  c3                   ret 
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
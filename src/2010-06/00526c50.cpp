// roc 2010-06 00526c50  unit: RBX::ViewG3D  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00526c50
//
// 00526c50  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00526c54  33c9                 xor ecx, ecx
// 00526c56  3bc1                 cmp eax, ecx
// 00526c58  7441                 je 0x526c9b
// 00526c5a  83f801               cmp eax, 1
// 00526c5d  743c                 je 0x526c9b
// 00526c5f  83f802               cmp eax, 2
// 00526c62  744d                 je 0x526cb1
// 00526c64  83f803               cmp eax, 3
// 00526c67  7521                 jne 0x526c8a
// 00526c69  56                   push esi
// 00526c6a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00526c6e  8b0e                 mov ecx, dword ptr [esi]
// 00526c70  688091b900           push 0xb99180
// 00526c75  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 00526c7b  0fb6c0               movzx eax, al
// 00526c7e  f7d8                 neg eax
// 00526c80  1bc0                 sbb eax, eax
// 00526c82  23442408             and eax, dword ptr [esp + 8]
// 00526c86  8906                 mov dword ptr [esi], eax
// 00526c88  5e                   pop esi
// 00526c89  c3                   ret 
// 00526c8a  8b442408             mov eax, dword ptr [esp + 8]
// 00526c8e  c7008091b900         mov dword ptr [eax], 0xb99180
// 00526c94  884804               mov byte ptr [eax + 4], cl
// 00526c97  884805               mov byte ptr [eax + 5], cl
// 00526c9a  c3                   ret 
// 00526c9b  8b442408             mov eax, dword ptr [esp + 8]
// 00526c9f  3bc1                 cmp eax, ecx
// 00526ca1  740e                 je 0x526cb1
// 00526ca3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00526ca7  8b11                 mov edx, dword ptr [ecx]
// 00526ca9  8910                 mov dword ptr [eax], edx
// 00526cab  8b4904               mov ecx, dword ptr [ecx + 4]
// 00526cae  894804               mov dword ptr [eax + 4], ecx
// 00526cb1  c3                   ret 
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
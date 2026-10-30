// roc 2011-06 004c7500  unit: RBX::MeshAdapter  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c7500
//
// 004c7500  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004c7504  33c9                 xor ecx, ecx
// 004c7506  3bc1                 cmp eax, ecx
// 004c7508  7441                 je 0x4c754b
// 004c750a  83f801               cmp eax, 1
// 004c750d  743c                 je 0x4c754b
// 004c750f  83f802               cmp eax, 2
// 004c7512  744d                 je 0x4c7561
// 004c7514  83f803               cmp eax, 3
// 004c7517  7521                 jne 0x4c753a
// 004c7519  56                   push esi
// 004c751a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004c751e  8b0e                 mov ecx, dword ptr [esi]
// 004c7520  689027c200           push 0xc22790
// 004c7525  ff15500aa400         call dword ptr [0xa40a50]
// 004c752b  0fb6c0               movzx eax, al
// 004c752e  f7d8                 neg eax
// 004c7530  1bc0                 sbb eax, eax
// 004c7532  23442408             and eax, dword ptr [esp + 8]
// 004c7536  8906                 mov dword ptr [esi], eax
// 004c7538  5e                   pop esi
// 004c7539  c3                   ret 
// 004c753a  8b442408             mov eax, dword ptr [esp + 8]
// 004c753e  c7009027c200         mov dword ptr [eax], 0xc22790
// 004c7544  884804               mov byte ptr [eax + 4], cl
// 004c7547  884805               mov byte ptr [eax + 5], cl
// 004c754a  c3                   ret 
// 004c754b  8b442408             mov eax, dword ptr [esp + 8]
// 004c754f  3bc1                 cmp eax, ecx
// 004c7551  740e                 je 0x4c7561
// 004c7553  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004c7557  8b11                 mov edx, dword ptr [ecx]
// 004c7559  8910                 mov dword ptr [eax], edx
// 004c755b  8b4904               mov ecx, dword ptr [ecx + 4]
// 004c755e  894804               mov dword ptr [eax + 4], ecx
// 004c7561  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
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
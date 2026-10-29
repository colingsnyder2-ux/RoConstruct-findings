// roc 2011-06 006a6560  unit: RBX::VGuiTextButton::?$FactoryProduct  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a6560
//
// 006a6560  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006a6564  33c9                 xor ecx, ecx
// 006a6566  3bc1                 cmp eax, ecx
// 006a6568  7441                 je 0x6a65ab
// 006a656a  83f801               cmp eax, 1
// 006a656d  743c                 je 0x6a65ab
// 006a656f  83f802               cmp eax, 2
// 006a6572  744d                 je 0x6a65c1
// 006a6574  83f803               cmp eax, 3
// 006a6577  7521                 jne 0x6a659a
// 006a6579  56                   push esi
// 006a657a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006a657e  8b0e                 mov ecx, dword ptr [esi]
// 006a6580  68305fc600           push 0xc65f30
// 006a6585  ff15500aa400         call dword ptr [0xa40a50]
// 006a658b  0fb6c0               movzx eax, al
// 006a658e  f7d8                 neg eax
// 006a6590  1bc0                 sbb eax, eax
// 006a6592  23442408             and eax, dword ptr [esp + 8]
// 006a6596  8906                 mov dword ptr [esi], eax
// 006a6598  5e                   pop esi
// 006a6599  c3                   ret 
// 006a659a  8b442408             mov eax, dword ptr [esp + 8]
// 006a659e  c700305fc600         mov dword ptr [eax], 0xc65f30
// 006a65a4  884804               mov byte ptr [eax + 4], cl
// 006a65a7  884805               mov byte ptr [eax + 5], cl
// 006a65aa  c3                   ret 
// 006a65ab  8b442408             mov eax, dword ptr [esp + 8]
// 006a65af  3bc1                 cmp eax, ecx
// 006a65b1  740e                 je 0x6a65c1
// 006a65b3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006a65b7  8b11                 mov edx, dword ptr [ecx]
// 006a65b9  8910                 mov dword ptr [eax], edx
// 006a65bb  8b4904               mov ecx, dword ptr [ecx + 4]
// 006a65be  894804               mov dword ptr [eax + 4], ecx
// 006a65c1  c3                   ret 
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
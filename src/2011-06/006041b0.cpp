// roc 2011-06 006041b0  unit: RBX::SetManualJointToInfinite  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006041b0
//
// 006041b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006041b4  33c9                 xor ecx, ecx
// 006041b6  3bc1                 cmp eax, ecx
// 006041b8  7441                 je 0x6041fb
// 006041ba  83f801               cmp eax, 1
// 006041bd  743c                 je 0x6041fb
// 006041bf  83f802               cmp eax, 2
// 006041c2  744d                 je 0x604211
// 006041c4  83f803               cmp eax, 3
// 006041c7  7521                 jne 0x6041ea
// 006041c9  56                   push esi
// 006041ca  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006041ce  8b0e                 mov ecx, dword ptr [esi]
// 006041d0  68108cc400           push 0xc48c10
// 006041d5  ff15500aa400         call dword ptr [0xa40a50]
// 006041db  0fb6c0               movzx eax, al
// 006041de  f7d8                 neg eax
// 006041e0  1bc0                 sbb eax, eax
// 006041e2  23442408             and eax, dword ptr [esp + 8]
// 006041e6  8906                 mov dword ptr [esi], eax
// 006041e8  5e                   pop esi
// 006041e9  c3                   ret 
// 006041ea  8b442408             mov eax, dword ptr [esp + 8]
// 006041ee  c700108cc400         mov dword ptr [eax], 0xc48c10
// 006041f4  884804               mov byte ptr [eax + 4], cl
// 006041f7  884805               mov byte ptr [eax + 5], cl
// 006041fa  c3                   ret 
// 006041fb  8b442408             mov eax, dword ptr [esp + 8]
// 006041ff  3bc1                 cmp eax, ecx
// 00604201  740e                 je 0x604211
// 00604203  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00604207  8b11                 mov edx, dword ptr [ecx]
// 00604209  8910                 mov dword ptr [eax], edx
// 0060420b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0060420e  894804               mov dword ptr [eax + 4], ecx
// 00604211  c3                   ret 
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
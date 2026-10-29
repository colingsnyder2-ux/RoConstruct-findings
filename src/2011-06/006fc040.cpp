// roc 2011-06 006fc040  unit: RBX::Flag  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006fc040
//
// 006fc040  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006fc044  33c9                 xor ecx, ecx
// 006fc046  3bc1                 cmp eax, ecx
// 006fc048  7441                 je 0x6fc08b
// 006fc04a  83f801               cmp eax, 1
// 006fc04d  743c                 je 0x6fc08b
// 006fc04f  83f802               cmp eax, 2
// 006fc052  7459                 je 0x6fc0ad
// 006fc054  83f803               cmp eax, 3
// 006fc057  7521                 jne 0x6fc07a
// 006fc059  56                   push esi
// 006fc05a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006fc05e  8b0e                 mov ecx, dword ptr [esi]
// 006fc060  6870a2c700           push 0xc7a270
// 006fc065  ff15500aa400         call dword ptr [0xa40a50]
// 006fc06b  0fb6c0               movzx eax, al
// 006fc06e  f7d8                 neg eax
// 006fc070  1bc0                 sbb eax, eax
// 006fc072  23442408             and eax, dword ptr [esp + 8]
// 006fc076  8906                 mov dword ptr [esi], eax
// 006fc078  5e                   pop esi
// 006fc079  c3                   ret 
// 006fc07a  8b442408             mov eax, dword ptr [esp + 8]
// 006fc07e  c70070a2c700         mov dword ptr [eax], 0xc7a270
// 006fc084  884804               mov byte ptr [eax + 4], cl
// 006fc087  884805               mov byte ptr [eax + 5], cl
// 006fc08a  c3                   ret 
// 006fc08b  8b442408             mov eax, dword ptr [esp + 8]
// 006fc08f  3bc1                 cmp eax, ecx
// 006fc091  741a                 je 0x6fc0ad
// 006fc093  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fc097  8b11                 mov edx, dword ptr [ecx]
// 006fc099  8910                 mov dword ptr [eax], edx
// 006fc09b  8b5104               mov edx, dword ptr [ecx + 4]
// 006fc09e  895004               mov dword ptr [eax + 4], edx
// 006fc0a1  8b5108               mov edx, dword ptr [ecx + 8]
// 006fc0a4  895008               mov dword ptr [eax + 8], edx
// 006fc0a7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 006fc0aa  89480c               mov dword ptr [eax + 0xc], ecx
// 006fc0ad  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

#include <typeinfo>
#include <new>

// boost::detail::function::functor_manager<F>::manage for a small, trivially copyable functor
// stored in place; 0xb33668 is typeid(F)
extern const type_info type_descriptor_b33668;

struct Functor
{
    int f0, f1, f2, f3;
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
    char data[16];
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
        if (check_type == type_descriptor_b33668)
            out_buffer.obj_ptr = (void *)&in_buffer.data;
        else
            out_buffer.obj_ptr = 0;
    } else {
        out_buffer.type.type = &type_descriptor_b33668;
        out_buffer.type.const_qualified = false;
        out_buffer.type.volatile_qualified = false;
    }
}
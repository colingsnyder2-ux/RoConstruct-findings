// roc 2010-06 004c06e0  unit: RBX::Network::VPlayer::?$EventDesc  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c06e0
//
// 004c06e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004c06e4  33c9                 xor ecx, ecx
// 004c06e6  3bc1                 cmp eax, ecx
// 004c06e8  7441                 je 0x4c072b
// 004c06ea  83f801               cmp eax, 1
// 004c06ed  743c                 je 0x4c072b
// 004c06ef  83f802               cmp eax, 2
// 004c06f2  7459                 je 0x4c074d
// 004c06f4  83f803               cmp eax, 3
// 004c06f7  7521                 jne 0x4c071a
// 004c06f9  56                   push esi
// 004c06fa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004c06fe  8b0e                 mov ecx, dword ptr [esi]
// 004c0700  6808d4b800           push 0xb8d408
// 004c0705  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 004c070b  0fb6c0               movzx eax, al
// 004c070e  f7d8                 neg eax
// 004c0710  1bc0                 sbb eax, eax
// 004c0712  23442408             and eax, dword ptr [esp + 8]
// 004c0716  8906                 mov dword ptr [esi], eax
// 004c0718  5e                   pop esi
// 004c0719  c3                   ret 
// 004c071a  8b442408             mov eax, dword ptr [esp + 8]
// 004c071e  c70008d4b800         mov dword ptr [eax], 0xb8d408
// 004c0724  884804               mov byte ptr [eax + 4], cl
// 004c0727  884805               mov byte ptr [eax + 5], cl
// 004c072a  c3                   ret 
// 004c072b  8b442408             mov eax, dword ptr [esp + 8]
// 004c072f  3bc1                 cmp eax, ecx
// 004c0731  741a                 je 0x4c074d
// 004c0733  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004c0737  8b11                 mov edx, dword ptr [ecx]
// 004c0739  8910                 mov dword ptr [eax], edx
// 004c073b  8b5104               mov edx, dword ptr [ecx + 4]
// 004c073e  895004               mov dword ptr [eax + 4], edx
// 004c0741  8b5108               mov edx, dword ptr [ecx + 8]
// 004c0744  895008               mov dword ptr [eax + 8], edx
// 004c0747  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 004c074a  89480c               mov dword ptr [eax + 0xc], ecx
// 004c074d  c3                   ret 
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
// roc 2009-06 006e02e0  unit: RBX::ImageButton  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e02e0
//
// 006e02e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006e02e4  33c9                 xor ecx, ecx
// 006e02e6  3bc1                 cmp eax, ecx
// 006e02e8  7441                 je 0x6e032b
// 006e02ea  83f801               cmp eax, 1
// 006e02ed  743c                 je 0x6e032b
// 006e02ef  83f802               cmp eax, 2
// 006e02f2  7459                 je 0x6e034d
// 006e02f4  83f803               cmp eax, 3
// 006e02f7  7521                 jne 0x6e031a
// 006e02f9  56                   push esi
// 006e02fa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e02fe  8b0e                 mov ecx, dword ptr [esi]
// 006e0300  68e838a200           push 0xa238e8
// 006e0305  ff15a4e98900         call dword ptr [0x89e9a4]
// 006e030b  0fb6c0               movzx eax, al
// 006e030e  f7d8                 neg eax
// 006e0310  1bc0                 sbb eax, eax
// 006e0312  23442408             and eax, dword ptr [esp + 8]
// 006e0316  8906                 mov dword ptr [esi], eax
// 006e0318  5e                   pop esi
// 006e0319  c3                   ret 
// 006e031a  8b442408             mov eax, dword ptr [esp + 8]
// 006e031e  c700e838a200         mov dword ptr [eax], 0xa238e8
// 006e0324  884804               mov byte ptr [eax + 4], cl
// 006e0327  884805               mov byte ptr [eax + 5], cl
// 006e032a  c3                   ret 
// 006e032b  8b442408             mov eax, dword ptr [esp + 8]
// 006e032f  3bc1                 cmp eax, ecx
// 006e0331  741a                 je 0x6e034d
// 006e0333  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e0337  8b11                 mov edx, dword ptr [ecx]
// 006e0339  8910                 mov dword ptr [eax], edx
// 006e033b  8b5104               mov edx, dword ptr [ecx + 4]
// 006e033e  895004               mov dword ptr [eax + 4], edx
// 006e0341  8b5108               mov edx, dword ptr [ecx + 8]
// 006e0344  895008               mov dword ptr [eax + 8], edx
// 006e0347  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 006e034a  89480c               mov dword ptr [eax + 0xc], ecx
// 006e034d  c3                   ret 
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
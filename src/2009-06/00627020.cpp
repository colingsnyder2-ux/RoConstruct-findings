// roc 2009-06 00627020  unit: RBX::ToolMouseCommand  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00627020
//
// 00627020  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00627024  33c9                 xor ecx, ecx
// 00627026  3bc1                 cmp eax, ecx
// 00627028  7441                 je 0x62706b
// 0062702a  83f801               cmp eax, 1
// 0062702d  743c                 je 0x62706b
// 0062702f  83f802               cmp eax, 2
// 00627032  7459                 je 0x62708d
// 00627034  83f803               cmp eax, 3
// 00627037  7521                 jne 0x62705a
// 00627039  56                   push esi
// 0062703a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062703e  8b0e                 mov ecx, dword ptr [esi]
// 00627040  68a0b2a000           push 0xa0b2a0
// 00627045  ff15a4e98900         call dword ptr [0x89e9a4]
// 0062704b  0fb6c0               movzx eax, al
// 0062704e  f7d8                 neg eax
// 00627050  1bc0                 sbb eax, eax
// 00627052  23442408             and eax, dword ptr [esp + 8]
// 00627056  8906                 mov dword ptr [esi], eax
// 00627058  5e                   pop esi
// 00627059  c3                   ret 
// 0062705a  8b442408             mov eax, dword ptr [esp + 8]
// 0062705e  c700a0b2a000         mov dword ptr [eax], 0xa0b2a0
// 00627064  884804               mov byte ptr [eax + 4], cl
// 00627067  884805               mov byte ptr [eax + 5], cl
// 0062706a  c3                   ret 
// 0062706b  8b442408             mov eax, dword ptr [esp + 8]
// 0062706f  3bc1                 cmp eax, ecx
// 00627071  741a                 je 0x62708d
// 00627073  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00627077  8b11                 mov edx, dword ptr [ecx]
// 00627079  8910                 mov dword ptr [eax], edx
// 0062707b  8b5104               mov edx, dword ptr [ecx + 4]
// 0062707e  895004               mov dword ptr [eax + 4], edx
// 00627081  8b5108               mov edx, dword ptr [ecx + 8]
// 00627084  895008               mov dword ptr [eax + 8], edx
// 00627087  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0062708a  89480c               mov dword ptr [eax + 0xc], ecx
// 0062708d  c3                   ret 
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
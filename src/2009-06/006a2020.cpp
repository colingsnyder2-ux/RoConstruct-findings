// roc 2009-06 006a2020  unit: RBX::VehicleSeat  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a2020
//
// 006a2020  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006a2024  33c9                 xor ecx, ecx
// 006a2026  3bc1                 cmp eax, ecx
// 006a2028  7441                 je 0x6a206b
// 006a202a  83f801               cmp eax, 1
// 006a202d  743c                 je 0x6a206b
// 006a202f  83f802               cmp eax, 2
// 006a2032  7465                 je 0x6a2099
// 006a2034  83f803               cmp eax, 3
// 006a2037  7521                 jne 0x6a205a
// 006a2039  56                   push esi
// 006a203a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006a203e  8b0e                 mov ecx, dword ptr [esi]
// 006a2040  687011a200           push 0xa21170
// 006a2045  ff15a4e98900         call dword ptr [0x89e9a4]
// 006a204b  0fb6c0               movzx eax, al
// 006a204e  f7d8                 neg eax
// 006a2050  1bc0                 sbb eax, eax
// 006a2052  23442408             and eax, dword ptr [esp + 8]
// 006a2056  8906                 mov dword ptr [esi], eax
// 006a2058  5e                   pop esi
// 006a2059  c3                   ret 
// 006a205a  8b442408             mov eax, dword ptr [esp + 8]
// 006a205e  c7007011a200         mov dword ptr [eax], 0xa21170
// 006a2064  884804               mov byte ptr [eax + 4], cl
// 006a2067  884805               mov byte ptr [eax + 5], cl
// 006a206a  c3                   ret 
// 006a206b  8b442408             mov eax, dword ptr [esp + 8]
// 006a206f  3bc1                 cmp eax, ecx
// 006a2071  7426                 je 0x6a2099
// 006a2073  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006a2077  8b11                 mov edx, dword ptr [ecx]
// 006a2079  8910                 mov dword ptr [eax], edx
// 006a207b  8b5104               mov edx, dword ptr [ecx + 4]
// 006a207e  895004               mov dword ptr [eax + 4], edx
// 006a2081  8b5108               mov edx, dword ptr [ecx + 8]
// 006a2084  895008               mov dword ptr [eax + 8], edx
// 006a2087  8b510c               mov edx, dword ptr [ecx + 0xc]
// 006a208a  89500c               mov dword ptr [eax + 0xc], edx
// 006a208d  8b5110               mov edx, dword ptr [ecx + 0x10]
// 006a2090  895010               mov dword ptr [eax + 0x10], edx
// 006a2093  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 006a2096  894814               mov dword ptr [eax + 0x14], ecx
// 006a2099  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

#include <typeinfo>
#include <new>

// boost::detail::function::functor_manager<F>::manage for a small, trivially copyable functor
// stored in place; 0xb2f1b0 is typeid(F)
extern const type_info type_descriptor_b2f1b0;

struct Functor
{
    int f0, f1, f2, f3, f4, f5;
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
    char data[24];
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
        if (check_type == type_descriptor_b2f1b0)
            out_buffer.obj_ptr = (void *)&in_buffer.data;
        else
            out_buffer.obj_ptr = 0;
    } else {
        out_buffer.type.type = &type_descriptor_b2f1b0;
        out_buffer.type.const_qualified = false;
        out_buffer.type.volatile_qualified = false;
    }
}
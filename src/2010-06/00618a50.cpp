// roc 2010-06 00618a50  unit: RBX::Accoutrement  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00618a50
//
// 00618a50  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00618a54  33c9                 xor ecx, ecx
// 00618a56  3bc1                 cmp eax, ecx
// 00618a58  7441                 je 0x618a9b
// 00618a5a  83f801               cmp eax, 1
// 00618a5d  743c                 je 0x618a9b
// 00618a5f  83f802               cmp eax, 2
// 00618a62  7465                 je 0x618ac9
// 00618a64  83f803               cmp eax, 3
// 00618a67  7521                 jne 0x618a8a
// 00618a69  56                   push esi
// 00618a6a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00618a6e  8b0e                 mov ecx, dword ptr [esi]
// 00618a70  68b002bb00           push 0xbb02b0
// 00618a75  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 00618a7b  0fb6c0               movzx eax, al
// 00618a7e  f7d8                 neg eax
// 00618a80  1bc0                 sbb eax, eax
// 00618a82  23442408             and eax, dword ptr [esp + 8]
// 00618a86  8906                 mov dword ptr [esi], eax
// 00618a88  5e                   pop esi
// 00618a89  c3                   ret 
// 00618a8a  8b442408             mov eax, dword ptr [esp + 8]
// 00618a8e  c700b002bb00         mov dword ptr [eax], 0xbb02b0
// 00618a94  884804               mov byte ptr [eax + 4], cl
// 00618a97  884805               mov byte ptr [eax + 5], cl
// 00618a9a  c3                   ret 
// 00618a9b  8b442408             mov eax, dword ptr [esp + 8]
// 00618a9f  3bc1                 cmp eax, ecx
// 00618aa1  7426                 je 0x618ac9
// 00618aa3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00618aa7  8b11                 mov edx, dword ptr [ecx]
// 00618aa9  8910                 mov dword ptr [eax], edx
// 00618aab  8b5104               mov edx, dword ptr [ecx + 4]
// 00618aae  895004               mov dword ptr [eax + 4], edx
// 00618ab1  8b5108               mov edx, dword ptr [ecx + 8]
// 00618ab4  895008               mov dword ptr [eax + 8], edx
// 00618ab7  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00618aba  89500c               mov dword ptr [eax + 0xc], edx
// 00618abd  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00618ac0  895010               mov dword ptr [eax + 0x10], edx
// 00618ac3  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 00618ac6  894814               mov dword ptr [eax + 0x14], ecx
// 00618ac9  c3                   ret 
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
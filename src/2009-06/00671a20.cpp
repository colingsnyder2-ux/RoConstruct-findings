// roc 2009-06 00671a20  unit: RBX::Backpack  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00671a20
//
// 00671a20  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00671a24  33c9                 xor ecx, ecx
// 00671a26  3bc1                 cmp eax, ecx
// 00671a28  7441                 je 0x671a6b
// 00671a2a  83f801               cmp eax, 1
// 00671a2d  743c                 je 0x671a6b
// 00671a2f  83f802               cmp eax, 2
// 00671a32  7465                 je 0x671a99
// 00671a34  83f803               cmp eax, 3
// 00671a37  7521                 jne 0x671a5a
// 00671a39  56                   push esi
// 00671a3a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00671a3e  8b0e                 mov ecx, dword ptr [esi]
// 00671a40  68b86ca100           push 0xa16cb8
// 00671a45  ff15a4e98900         call dword ptr [0x89e9a4]
// 00671a4b  0fb6c0               movzx eax, al
// 00671a4e  f7d8                 neg eax
// 00671a50  1bc0                 sbb eax, eax
// 00671a52  23442408             and eax, dword ptr [esp + 8]
// 00671a56  8906                 mov dword ptr [esi], eax
// 00671a58  5e                   pop esi
// 00671a59  c3                   ret 
// 00671a5a  8b442408             mov eax, dword ptr [esp + 8]
// 00671a5e  c700b86ca100         mov dword ptr [eax], 0xa16cb8
// 00671a64  884804               mov byte ptr [eax + 4], cl
// 00671a67  884805               mov byte ptr [eax + 5], cl
// 00671a6a  c3                   ret 
// 00671a6b  8b442408             mov eax, dword ptr [esp + 8]
// 00671a6f  3bc1                 cmp eax, ecx
// 00671a71  7426                 je 0x671a99
// 00671a73  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00671a77  8b11                 mov edx, dword ptr [ecx]
// 00671a79  8910                 mov dword ptr [eax], edx
// 00671a7b  8b5104               mov edx, dword ptr [ecx + 4]
// 00671a7e  895004               mov dword ptr [eax + 4], edx
// 00671a81  8b5108               mov edx, dword ptr [ecx + 8]
// 00671a84  895008               mov dword ptr [eax + 8], edx
// 00671a87  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00671a8a  89500c               mov dword ptr [eax + 0xc], edx
// 00671a8d  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00671a90  895010               mov dword ptr [eax + 0x10], edx
// 00671a93  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 00671a96  894814               mov dword ptr [eax + 0x14], ecx
// 00671a99  c3                   ret 
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
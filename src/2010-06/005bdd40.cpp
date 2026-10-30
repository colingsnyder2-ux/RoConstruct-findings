// roc 2010-06 005bdd40  unit: RBX::VBasicPartInstance::?$ActionStation  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005bdd40
//
// 005bdd40  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005bdd44  33c9                 xor ecx, ecx
// 005bdd46  3bc1                 cmp eax, ecx
// 005bdd48  7441                 je 0x5bdd8b
// 005bdd4a  83f801               cmp eax, 1
// 005bdd4d  743c                 je 0x5bdd8b
// 005bdd4f  83f802               cmp eax, 2
// 005bdd52  7465                 je 0x5bddb9
// 005bdd54  83f803               cmp eax, 3
// 005bdd57  7521                 jne 0x5bdd7a
// 005bdd59  56                   push esi
// 005bdd5a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005bdd5e  8b0e                 mov ecx, dword ptr [esi]
// 005bdd60  688042ba00           push 0xba4280
// 005bdd65  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 005bdd6b  0fb6c0               movzx eax, al
// 005bdd6e  f7d8                 neg eax
// 005bdd70  1bc0                 sbb eax, eax
// 005bdd72  23442408             and eax, dword ptr [esp + 8]
// 005bdd76  8906                 mov dword ptr [esi], eax
// 005bdd78  5e                   pop esi
// 005bdd79  c3                   ret 
// 005bdd7a  8b442408             mov eax, dword ptr [esp + 8]
// 005bdd7e  c7008042ba00         mov dword ptr [eax], 0xba4280
// 005bdd84  884804               mov byte ptr [eax + 4], cl
// 005bdd87  884805               mov byte ptr [eax + 5], cl
// 005bdd8a  c3                   ret 
// 005bdd8b  8b442408             mov eax, dword ptr [esp + 8]
// 005bdd8f  3bc1                 cmp eax, ecx
// 005bdd91  7426                 je 0x5bddb9
// 005bdd93  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005bdd97  8b11                 mov edx, dword ptr [ecx]
// 005bdd99  8910                 mov dword ptr [eax], edx
// 005bdd9b  8b5104               mov edx, dword ptr [ecx + 4]
// 005bdd9e  895004               mov dword ptr [eax + 4], edx
// 005bdda1  8b5108               mov edx, dword ptr [ecx + 8]
// 005bdda4  895008               mov dword ptr [eax + 8], edx
// 005bdda7  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005bddaa  89500c               mov dword ptr [eax + 0xc], edx
// 005bddad  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005bddb0  895010               mov dword ptr [eax + 0x10], edx
// 005bddb3  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 005bddb6  894814               mov dword ptr [eax + 0x14], ecx
// 005bddb9  c3                   ret 
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
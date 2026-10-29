// roc 2009-06 004e3890  unit: RBX::Network::Replicator  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e3890
//
// 004e3890  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e3894  33c9                 xor ecx, ecx
// 004e3896  3bc1                 cmp eax, ecx
// 004e3898  7441                 je 0x4e38db
// 004e389a  83f801               cmp eax, 1
// 004e389d  743c                 je 0x4e38db
// 004e389f  83f802               cmp eax, 2
// 004e38a2  7459                 je 0x4e38fd
// 004e38a4  83f803               cmp eax, 3
// 004e38a7  7521                 jne 0x4e38ca
// 004e38a9  56                   push esi
// 004e38aa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004e38ae  8b0e                 mov ecx, dword ptr [esi]
// 004e38b0  6860439f00           push 0x9f4360
// 004e38b5  ff15a4e98900         call dword ptr [0x89e9a4]
// 004e38bb  0fb6c0               movzx eax, al
// 004e38be  f7d8                 neg eax
// 004e38c0  1bc0                 sbb eax, eax
// 004e38c2  23442408             and eax, dword ptr [esp + 8]
// 004e38c6  8906                 mov dword ptr [esi], eax
// 004e38c8  5e                   pop esi
// 004e38c9  c3                   ret 
// 004e38ca  8b442408             mov eax, dword ptr [esp + 8]
// 004e38ce  c70060439f00         mov dword ptr [eax], 0x9f4360
// 004e38d4  884804               mov byte ptr [eax + 4], cl
// 004e38d7  884805               mov byte ptr [eax + 5], cl
// 004e38da  c3                   ret 
// 004e38db  8b442408             mov eax, dword ptr [esp + 8]
// 004e38df  3bc1                 cmp eax, ecx
// 004e38e1  741a                 je 0x4e38fd
// 004e38e3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e38e7  8b11                 mov edx, dword ptr [ecx]
// 004e38e9  8910                 mov dword ptr [eax], edx
// 004e38eb  8b5104               mov edx, dword ptr [ecx + 4]
// 004e38ee  895004               mov dword ptr [eax + 4], edx
// 004e38f1  8b5108               mov edx, dword ptr [ecx + 8]
// 004e38f4  895008               mov dword ptr [eax + 8], edx
// 004e38f7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 004e38fa  89480c               mov dword ptr [eax + 0xc], ecx
// 004e38fd  c3                   ret 
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
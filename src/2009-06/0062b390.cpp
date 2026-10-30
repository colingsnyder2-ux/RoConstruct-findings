// roc 2009-06 0062b390  unit: RBX::Workspace  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062b390
//
// 0062b390  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0062b394  33c9                 xor ecx, ecx
// 0062b396  3bc1                 cmp eax, ecx
// 0062b398  7441                 je 0x62b3db
// 0062b39a  83f801               cmp eax, 1
// 0062b39d  743c                 je 0x62b3db
// 0062b39f  83f802               cmp eax, 2
// 0062b3a2  7465                 je 0x62b409
// 0062b3a4  83f803               cmp eax, 3
// 0062b3a7  7521                 jne 0x62b3ca
// 0062b3a9  56                   push esi
// 0062b3aa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062b3ae  8b0e                 mov ecx, dword ptr [esi]
// 0062b3b0  6878bfa000           push 0xa0bf78
// 0062b3b5  ff15a4e98900         call dword ptr [0x89e9a4]
// 0062b3bb  0fb6c0               movzx eax, al
// 0062b3be  f7d8                 neg eax
// 0062b3c0  1bc0                 sbb eax, eax
// 0062b3c2  23442408             and eax, dword ptr [esp + 8]
// 0062b3c6  8906                 mov dword ptr [esi], eax
// 0062b3c8  5e                   pop esi
// 0062b3c9  c3                   ret 
// 0062b3ca  8b442408             mov eax, dword ptr [esp + 8]
// 0062b3ce  c70078bfa000         mov dword ptr [eax], 0xa0bf78
// 0062b3d4  884804               mov byte ptr [eax + 4], cl
// 0062b3d7  884805               mov byte ptr [eax + 5], cl
// 0062b3da  c3                   ret 
// 0062b3db  8b442408             mov eax, dword ptr [esp + 8]
// 0062b3df  3bc1                 cmp eax, ecx
// 0062b3e1  7426                 je 0x62b409
// 0062b3e3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0062b3e7  8b11                 mov edx, dword ptr [ecx]
// 0062b3e9  8910                 mov dword ptr [eax], edx
// 0062b3eb  8b5104               mov edx, dword ptr [ecx + 4]
// 0062b3ee  895004               mov dword ptr [eax + 4], edx
// 0062b3f1  8b5108               mov edx, dword ptr [ecx + 8]
// 0062b3f4  895008               mov dword ptr [eax + 8], edx
// 0062b3f7  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0062b3fa  89500c               mov dword ptr [eax + 0xc], edx
// 0062b3fd  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0062b400  895010               mov dword ptr [eax + 0x10], edx
// 0062b403  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 0062b406  894814               mov dword ptr [eax + 0x14], ecx
// 0062b409  c3                   ret 
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
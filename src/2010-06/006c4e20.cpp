// roc 2010-06 006c4e20  unit: RBX::Flag  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c4e20
//
// 006c4e20  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006c4e24  33c9                 xor ecx, ecx
// 006c4e26  3bc1                 cmp eax, ecx
// 006c4e28  7441                 je 0x6c4e6b
// 006c4e2a  83f801               cmp eax, 1
// 006c4e2d  743c                 je 0x6c4e6b
// 006c4e2f  83f802               cmp eax, 2
// 006c4e32  7465                 je 0x6c4e99
// 006c4e34  83f803               cmp eax, 3
// 006c4e37  7521                 jne 0x6c4e5a
// 006c4e39  56                   push esi
// 006c4e3a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c4e3e  8b0e                 mov ecx, dword ptr [esi]
// 006c4e40  687008bd00           push 0xbd0870
// 006c4e45  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 006c4e4b  0fb6c0               movzx eax, al
// 006c4e4e  f7d8                 neg eax
// 006c4e50  1bc0                 sbb eax, eax
// 006c4e52  23442408             and eax, dword ptr [esp + 8]
// 006c4e56  8906                 mov dword ptr [esi], eax
// 006c4e58  5e                   pop esi
// 006c4e59  c3                   ret 
// 006c4e5a  8b442408             mov eax, dword ptr [esp + 8]
// 006c4e5e  c7007008bd00         mov dword ptr [eax], 0xbd0870
// 006c4e64  884804               mov byte ptr [eax + 4], cl
// 006c4e67  884805               mov byte ptr [eax + 5], cl
// 006c4e6a  c3                   ret 
// 006c4e6b  8b442408             mov eax, dword ptr [esp + 8]
// 006c4e6f  3bc1                 cmp eax, ecx
// 006c4e71  7426                 je 0x6c4e99
// 006c4e73  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006c4e77  8b11                 mov edx, dword ptr [ecx]
// 006c4e79  8910                 mov dword ptr [eax], edx
// 006c4e7b  8b5104               mov edx, dword ptr [ecx + 4]
// 006c4e7e  895004               mov dword ptr [eax + 4], edx
// 006c4e81  8b5108               mov edx, dword ptr [ecx + 8]
// 006c4e84  895008               mov dword ptr [eax + 8], edx
// 006c4e87  8b510c               mov edx, dword ptr [ecx + 0xc]
// 006c4e8a  89500c               mov dword ptr [eax + 0xc], edx
// 006c4e8d  8b5110               mov edx, dword ptr [ecx + 0x10]
// 006c4e90  895010               mov dword ptr [eax + 0x10], edx
// 006c4e93  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 006c4e96  894814               mov dword ptr [eax + 0x14], ecx
// 006c4e99  c3                   ret 
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
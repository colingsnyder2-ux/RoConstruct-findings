// roc 2009-06 004e37b0  unit: RBX::Network::Replicator  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e37b0
//
// 004e37b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e37b4  33c9                 xor ecx, ecx
// 004e37b6  3bc1                 cmp eax, ecx
// 004e37b8  7441                 je 0x4e37fb
// 004e37ba  83f801               cmp eax, 1
// 004e37bd  743c                 je 0x4e37fb
// 004e37bf  83f802               cmp eax, 2
// 004e37c2  744d                 je 0x4e3811
// 004e37c4  83f803               cmp eax, 3
// 004e37c7  7521                 jne 0x4e37ea
// 004e37c9  56                   push esi
// 004e37ca  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004e37ce  8b0e                 mov ecx, dword ptr [esi]
// 004e37d0  6820429f00           push 0x9f4220
// 004e37d5  ff15a4e98900         call dword ptr [0x89e9a4]
// 004e37db  0fb6c0               movzx eax, al
// 004e37de  f7d8                 neg eax
// 004e37e0  1bc0                 sbb eax, eax
// 004e37e2  23442408             and eax, dword ptr [esp + 8]
// 004e37e6  8906                 mov dword ptr [esi], eax
// 004e37e8  5e                   pop esi
// 004e37e9  c3                   ret 
// 004e37ea  8b442408             mov eax, dword ptr [esp + 8]
// 004e37ee  c70020429f00         mov dword ptr [eax], 0x9f4220
// 004e37f4  884804               mov byte ptr [eax + 4], cl
// 004e37f7  884805               mov byte ptr [eax + 5], cl
// 004e37fa  c3                   ret 
// 004e37fb  8b442408             mov eax, dword ptr [esp + 8]
// 004e37ff  3bc1                 cmp eax, ecx
// 004e3801  740e                 je 0x4e3811
// 004e3803  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e3807  8b11                 mov edx, dword ptr [ecx]
// 004e3809  8910                 mov dword ptr [eax], edx
// 004e380b  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e380e  894804               mov dword ptr [eax + 4], ecx
// 004e3811  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

#include <typeinfo>
#include <new>

// boost::detail::function::functor_manager<F>::manage for a small, trivially copyable functor
// stored in place; 0xb3346c is typeid(F)
extern const type_info type_descriptor_b3346c;

struct Functor
{
    int f0, f1;
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
    char data[8];
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
        if (check_type == type_descriptor_b3346c)
            out_buffer.obj_ptr = (void *)&in_buffer.data;
        else
            out_buffer.obj_ptr = 0;
    } else {
        out_buffer.type.type = &type_descriptor_b3346c;
        out_buffer.type.const_qualified = false;
        out_buffer.type.volatile_qualified = false;
    }
}
// roc 2009-06 00516c60  unit: RBX::MeshRefPartAdapter  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00516c60
//
// 00516c60  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00516c64  33c9                 xor ecx, ecx
// 00516c66  3bc1                 cmp eax, ecx
// 00516c68  7441                 je 0x516cab
// 00516c6a  83f801               cmp eax, 1
// 00516c6d  743c                 je 0x516cab
// 00516c6f  83f802               cmp eax, 2
// 00516c72  7459                 je 0x516ccd
// 00516c74  83f803               cmp eax, 3
// 00516c77  7521                 jne 0x516c9a
// 00516c79  56                   push esi
// 00516c7a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00516c7e  8b0e                 mov ecx, dword ptr [esi]
// 00516c80  6888a49f00           push 0x9fa488
// 00516c85  ff15a4e98900         call dword ptr [0x89e9a4]
// 00516c8b  0fb6c0               movzx eax, al
// 00516c8e  f7d8                 neg eax
// 00516c90  1bc0                 sbb eax, eax
// 00516c92  23442408             and eax, dword ptr [esp + 8]
// 00516c96  8906                 mov dword ptr [esi], eax
// 00516c98  5e                   pop esi
// 00516c99  c3                   ret 
// 00516c9a  8b442408             mov eax, dword ptr [esp + 8]
// 00516c9e  c70088a49f00         mov dword ptr [eax], 0x9fa488
// 00516ca4  884804               mov byte ptr [eax + 4], cl
// 00516ca7  884805               mov byte ptr [eax + 5], cl
// 00516caa  c3                   ret 
// 00516cab  8b442408             mov eax, dword ptr [esp + 8]
// 00516caf  3bc1                 cmp eax, ecx
// 00516cb1  741a                 je 0x516ccd
// 00516cb3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00516cb7  8b11                 mov edx, dword ptr [ecx]
// 00516cb9  8910                 mov dword ptr [eax], edx
// 00516cbb  8b5104               mov edx, dword ptr [ecx + 4]
// 00516cbe  895004               mov dword ptr [eax + 4], edx
// 00516cc1  8b5108               mov edx, dword ptr [ecx + 8]
// 00516cc4  895008               mov dword ptr [eax + 8], edx
// 00516cc7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00516cca  89480c               mov dword ptr [eax + 0xc], ecx
// 00516ccd  c3                   ret 
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
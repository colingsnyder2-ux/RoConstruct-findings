// roc 2009-06 00516f00  unit: RBX::MeshRefPartAdapter  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00516f00
//
// 00516f00  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00516f04  33c9                 xor ecx, ecx
// 00516f06  3bc1                 cmp eax, ecx
// 00516f08  7441                 je 0x516f4b
// 00516f0a  83f801               cmp eax, 1
// 00516f0d  743c                 je 0x516f4b
// 00516f0f  83f802               cmp eax, 2
// 00516f12  7459                 je 0x516f6d
// 00516f14  83f803               cmp eax, 3
// 00516f17  7521                 jne 0x516f3a
// 00516f19  56                   push esi
// 00516f1a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00516f1e  8b0e                 mov ecx, dword ptr [esi]
// 00516f20  6860a89f00           push 0x9fa860
// 00516f25  ff15a4e98900         call dword ptr [0x89e9a4]
// 00516f2b  0fb6c0               movzx eax, al
// 00516f2e  f7d8                 neg eax
// 00516f30  1bc0                 sbb eax, eax
// 00516f32  23442408             and eax, dword ptr [esp + 8]
// 00516f36  8906                 mov dword ptr [esi], eax
// 00516f38  5e                   pop esi
// 00516f39  c3                   ret 
// 00516f3a  8b442408             mov eax, dword ptr [esp + 8]
// 00516f3e  c70060a89f00         mov dword ptr [eax], 0x9fa860
// 00516f44  884804               mov byte ptr [eax + 4], cl
// 00516f47  884805               mov byte ptr [eax + 5], cl
// 00516f4a  c3                   ret 
// 00516f4b  8b442408             mov eax, dword ptr [esp + 8]
// 00516f4f  3bc1                 cmp eax, ecx
// 00516f51  741a                 je 0x516f6d
// 00516f53  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00516f57  8b11                 mov edx, dword ptr [ecx]
// 00516f59  8910                 mov dword ptr [eax], edx
// 00516f5b  8b5104               mov edx, dword ptr [ecx + 4]
// 00516f5e  895004               mov dword ptr [eax + 4], edx
// 00516f61  8b5108               mov edx, dword ptr [ecx + 8]
// 00516f64  895008               mov dword ptr [eax + 8], edx
// 00516f67  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00516f6a  89480c               mov dword ptr [eax + 0xc], ecx
// 00516f6d  c3                   ret 
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
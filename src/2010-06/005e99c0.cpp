// roc 2010-06 005e99c0  unit: RBX::VModelInstance::?$BoundFuncDesc  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e99c0
//
// 005e99c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005e99c4  33c9                 xor ecx, ecx
// 005e99c6  3bc1                 cmp eax, ecx
// 005e99c8  7441                 je 0x5e9a0b
// 005e99ca  83f801               cmp eax, 1
// 005e99cd  743c                 je 0x5e9a0b
// 005e99cf  83f802               cmp eax, 2
// 005e99d2  7459                 je 0x5e9a2d
// 005e99d4  83f803               cmp eax, 3
// 005e99d7  7521                 jne 0x5e99fa
// 005e99d9  56                   push esi
// 005e99da  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005e99de  8b0e                 mov ecx, dword ptr [esi]
// 005e99e0  6810b4ba00           push 0xbab410
// 005e99e5  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 005e99eb  0fb6c0               movzx eax, al
// 005e99ee  f7d8                 neg eax
// 005e99f0  1bc0                 sbb eax, eax
// 005e99f2  23442408             and eax, dword ptr [esp + 8]
// 005e99f6  8906                 mov dword ptr [esi], eax
// 005e99f8  5e                   pop esi
// 005e99f9  c3                   ret 
// 005e99fa  8b442408             mov eax, dword ptr [esp + 8]
// 005e99fe  c70010b4ba00         mov dword ptr [eax], 0xbab410
// 005e9a04  884804               mov byte ptr [eax + 4], cl
// 005e9a07  884805               mov byte ptr [eax + 5], cl
// 005e9a0a  c3                   ret 
// 005e9a0b  8b442408             mov eax, dword ptr [esp + 8]
// 005e9a0f  3bc1                 cmp eax, ecx
// 005e9a11  741a                 je 0x5e9a2d
// 005e9a13  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005e9a17  8b11                 mov edx, dword ptr [ecx]
// 005e9a19  8910                 mov dword ptr [eax], edx
// 005e9a1b  8b5104               mov edx, dword ptr [ecx + 4]
// 005e9a1e  895004               mov dword ptr [eax + 4], edx
// 005e9a21  8b5108               mov edx, dword ptr [ecx + 8]
// 005e9a24  895008               mov dword ptr [eax + 8], edx
// 005e9a27  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 005e9a2a  89480c               mov dword ptr [eax + 0xc], ecx
// 005e9a2d  c3                   ret 
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
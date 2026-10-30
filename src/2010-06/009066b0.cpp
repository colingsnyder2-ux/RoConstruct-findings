// roc 2010-06 009066b0  unit: RBX::RbxParticleEmitter  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009066b0
//
// 009066b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009066b4  33c9                 xor ecx, ecx
// 009066b6  3bc1                 cmp eax, ecx
// 009066b8  7441                 je 0x9066fb
// 009066ba  83f801               cmp eax, 1
// 009066bd  743c                 je 0x9066fb
// 009066bf  83f802               cmp eax, 2
// 009066c2  7459                 je 0x90671d
// 009066c4  83f803               cmp eax, 3
// 009066c7  7521                 jne 0x9066ea
// 009066c9  56                   push esi
// 009066ca  8b74240c             mov esi, dword ptr [esp + 0xc]
// 009066ce  8b0e                 mov ecx, dword ptr [esi]
// 009066d0  6818e6bf00           push 0xbfe618
// 009066d5  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 009066db  0fb6c0               movzx eax, al
// 009066de  f7d8                 neg eax
// 009066e0  1bc0                 sbb eax, eax
// 009066e2  23442408             and eax, dword ptr [esp + 8]
// 009066e6  8906                 mov dword ptr [esi], eax
// 009066e8  5e                   pop esi
// 009066e9  c3                   ret 
// 009066ea  8b442408             mov eax, dword ptr [esp + 8]
// 009066ee  c70018e6bf00         mov dword ptr [eax], 0xbfe618
// 009066f4  884804               mov byte ptr [eax + 4], cl
// 009066f7  884805               mov byte ptr [eax + 5], cl
// 009066fa  c3                   ret 
// 009066fb  8b442408             mov eax, dword ptr [esp + 8]
// 009066ff  3bc1                 cmp eax, ecx
// 00906701  741a                 je 0x90671d
// 00906703  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00906707  8b11                 mov edx, dword ptr [ecx]
// 00906709  8910                 mov dword ptr [eax], edx
// 0090670b  8b5104               mov edx, dword ptr [ecx + 4]
// 0090670e  895004               mov dword ptr [eax + 4], edx
// 00906711  8b5108               mov edx, dword ptr [ecx + 8]
// 00906714  895008               mov dword ptr [eax + 8], edx
// 00906717  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0090671a  89480c               mov dword ptr [eax + 0xc], ecx
// 0090671d  c3                   ret 
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
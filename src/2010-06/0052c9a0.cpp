// roc 2010-06 0052c9a0  unit: RBX::MeshRefPartAdapter  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052c9a0
//
// 0052c9a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0052c9a4  33c9                 xor ecx, ecx
// 0052c9a6  3bc1                 cmp eax, ecx
// 0052c9a8  7441                 je 0x52c9eb
// 0052c9aa  83f801               cmp eax, 1
// 0052c9ad  743c                 je 0x52c9eb
// 0052c9af  83f802               cmp eax, 2
// 0052c9b2  7459                 je 0x52ca0d
// 0052c9b4  83f803               cmp eax, 3
// 0052c9b7  7521                 jne 0x52c9da
// 0052c9b9  56                   push esi
// 0052c9ba  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0052c9be  8b0e                 mov ecx, dword ptr [esi]
// 0052c9c0  68709fb900           push 0xb99f70
// 0052c9c5  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0052c9cb  0fb6c0               movzx eax, al
// 0052c9ce  f7d8                 neg eax
// 0052c9d0  1bc0                 sbb eax, eax
// 0052c9d2  23442408             and eax, dword ptr [esp + 8]
// 0052c9d6  8906                 mov dword ptr [esi], eax
// 0052c9d8  5e                   pop esi
// 0052c9d9  c3                   ret 
// 0052c9da  8b442408             mov eax, dword ptr [esp + 8]
// 0052c9de  c700709fb900         mov dword ptr [eax], 0xb99f70
// 0052c9e4  884804               mov byte ptr [eax + 4], cl
// 0052c9e7  884805               mov byte ptr [eax + 5], cl
// 0052c9ea  c3                   ret 
// 0052c9eb  8b442408             mov eax, dword ptr [esp + 8]
// 0052c9ef  3bc1                 cmp eax, ecx
// 0052c9f1  741a                 je 0x52ca0d
// 0052c9f3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0052c9f7  8b11                 mov edx, dword ptr [ecx]
// 0052c9f9  8910                 mov dword ptr [eax], edx
// 0052c9fb  8b5104               mov edx, dword ptr [ecx + 4]
// 0052c9fe  895004               mov dword ptr [eax + 4], edx
// 0052ca01  8b5108               mov edx, dword ptr [ecx + 8]
// 0052ca04  895008               mov dword ptr [eax + 8], edx
// 0052ca07  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0052ca0a  89480c               mov dword ptr [eax + 0xc], ecx
// 0052ca0d  c3                   ret 
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
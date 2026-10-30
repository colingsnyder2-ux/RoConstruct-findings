// roc 2010-06 0052c850  unit: RBX::MeshRefPartAdapter  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052c850
//
// 0052c850  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0052c854  33c9                 xor ecx, ecx
// 0052c856  3bc1                 cmp eax, ecx
// 0052c858  7441                 je 0x52c89b
// 0052c85a  83f801               cmp eax, 1
// 0052c85d  743c                 je 0x52c89b
// 0052c85f  83f802               cmp eax, 2
// 0052c862  7459                 je 0x52c8bd
// 0052c864  83f803               cmp eax, 3
// 0052c867  7521                 jne 0x52c88a
// 0052c869  56                   push esi
// 0052c86a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0052c86e  8b0e                 mov ecx, dword ptr [esi]
// 0052c870  68589db900           push 0xb99d58
// 0052c875  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0052c87b  0fb6c0               movzx eax, al
// 0052c87e  f7d8                 neg eax
// 0052c880  1bc0                 sbb eax, eax
// 0052c882  23442408             and eax, dword ptr [esp + 8]
// 0052c886  8906                 mov dword ptr [esi], eax
// 0052c888  5e                   pop esi
// 0052c889  c3                   ret 
// 0052c88a  8b442408             mov eax, dword ptr [esp + 8]
// 0052c88e  c700589db900         mov dword ptr [eax], 0xb99d58
// 0052c894  884804               mov byte ptr [eax + 4], cl
// 0052c897  884805               mov byte ptr [eax + 5], cl
// 0052c89a  c3                   ret 
// 0052c89b  8b442408             mov eax, dword ptr [esp + 8]
// 0052c89f  3bc1                 cmp eax, ecx
// 0052c8a1  741a                 je 0x52c8bd
// 0052c8a3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0052c8a7  8b11                 mov edx, dword ptr [ecx]
// 0052c8a9  8910                 mov dword ptr [eax], edx
// 0052c8ab  8b5104               mov edx, dword ptr [ecx + 4]
// 0052c8ae  895004               mov dword ptr [eax + 4], edx
// 0052c8b1  8b5108               mov edx, dword ptr [ecx + 8]
// 0052c8b4  895008               mov dword ptr [eax + 8], edx
// 0052c8b7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0052c8ba  89480c               mov dword ptr [eax + 0xc], ecx
// 0052c8bd  c3                   ret 
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
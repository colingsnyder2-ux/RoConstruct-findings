// roc 2009-06 00457d30  unit: CRobloxView  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00457d30
//
// 00457d30  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00457d34  33c9                 xor ecx, ecx
// 00457d36  3bc1                 cmp eax, ecx
// 00457d38  7441                 je 0x457d7b
// 00457d3a  83f801               cmp eax, 1
// 00457d3d  743c                 je 0x457d7b
// 00457d3f  83f802               cmp eax, 2
// 00457d42  7459                 je 0x457d9d
// 00457d44  83f803               cmp eax, 3
// 00457d47  7521                 jne 0x457d6a
// 00457d49  56                   push esi
// 00457d4a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00457d4e  8b0e                 mov ecx, dword ptr [esi]
// 00457d50  68105a9e00           push 0x9e5a10
// 00457d55  ff15a4e98900         call dword ptr [0x89e9a4]
// 00457d5b  0fb6c0               movzx eax, al
// 00457d5e  f7d8                 neg eax
// 00457d60  1bc0                 sbb eax, eax
// 00457d62  23442408             and eax, dword ptr [esp + 8]
// 00457d66  8906                 mov dword ptr [esi], eax
// 00457d68  5e                   pop esi
// 00457d69  c3                   ret 
// 00457d6a  8b442408             mov eax, dword ptr [esp + 8]
// 00457d6e  c700105a9e00         mov dword ptr [eax], 0x9e5a10
// 00457d74  884804               mov byte ptr [eax + 4], cl
// 00457d77  884805               mov byte ptr [eax + 5], cl
// 00457d7a  c3                   ret 
// 00457d7b  8b442408             mov eax, dword ptr [esp + 8]
// 00457d7f  3bc1                 cmp eax, ecx
// 00457d81  741a                 je 0x457d9d
// 00457d83  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00457d87  8b11                 mov edx, dword ptr [ecx]
// 00457d89  8910                 mov dword ptr [eax], edx
// 00457d8b  8b5104               mov edx, dword ptr [ecx + 4]
// 00457d8e  895004               mov dword ptr [eax + 4], edx
// 00457d91  8b5108               mov edx, dword ptr [ecx + 8]
// 00457d94  895008               mov dword ptr [eax + 8], edx
// 00457d97  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00457d9a  89480c               mov dword ptr [eax + 0xc], ecx
// 00457d9d  c3                   ret 
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
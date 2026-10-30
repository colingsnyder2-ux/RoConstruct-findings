// roc 2010-06 00698be0  unit: RBX::JointsService  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00698be0
//
// 00698be0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00698be4  33c9                 xor ecx, ecx
// 00698be6  3bc1                 cmp eax, ecx
// 00698be8  7441                 je 0x698c2b
// 00698bea  83f801               cmp eax, 1
// 00698bed  743c                 je 0x698c2b
// 00698bef  83f802               cmp eax, 2
// 00698bf2  7459                 je 0x698c4d
// 00698bf4  83f803               cmp eax, 3
// 00698bf7  7521                 jne 0x698c1a
// 00698bf9  56                   push esi
// 00698bfa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00698bfe  8b0e                 mov ecx, dword ptr [esi]
// 00698c00  68b867bc00           push 0xbc67b8
// 00698c05  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 00698c0b  0fb6c0               movzx eax, al
// 00698c0e  f7d8                 neg eax
// 00698c10  1bc0                 sbb eax, eax
// 00698c12  23442408             and eax, dword ptr [esp + 8]
// 00698c16  8906                 mov dword ptr [esi], eax
// 00698c18  5e                   pop esi
// 00698c19  c3                   ret 
// 00698c1a  8b442408             mov eax, dword ptr [esp + 8]
// 00698c1e  c700b867bc00         mov dword ptr [eax], 0xbc67b8
// 00698c24  884804               mov byte ptr [eax + 4], cl
// 00698c27  884805               mov byte ptr [eax + 5], cl
// 00698c2a  c3                   ret 
// 00698c2b  8b442408             mov eax, dword ptr [esp + 8]
// 00698c2f  3bc1                 cmp eax, ecx
// 00698c31  741a                 je 0x698c4d
// 00698c33  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00698c37  8b11                 mov edx, dword ptr [ecx]
// 00698c39  8910                 mov dword ptr [eax], edx
// 00698c3b  8b5104               mov edx, dword ptr [ecx + 4]
// 00698c3e  895004               mov dword ptr [eax + 4], edx
// 00698c41  8b5108               mov edx, dword ptr [ecx + 8]
// 00698c44  895008               mov dword ptr [eax + 8], edx
// 00698c47  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00698c4a  89480c               mov dword ptr [eax + 0xc], ecx
// 00698c4d  c3                   ret 
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
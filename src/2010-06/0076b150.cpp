// roc 2010-06 0076b150  unit: RBX::ImageButton  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0076b150
//
// 0076b150  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0076b154  33c9                 xor ecx, ecx
// 0076b156  3bc1                 cmp eax, ecx
// 0076b158  7441                 je 0x76b19b
// 0076b15a  83f801               cmp eax, 1
// 0076b15d  743c                 je 0x76b19b
// 0076b15f  83f802               cmp eax, 2
// 0076b162  7459                 je 0x76b1bd
// 0076b164  83f803               cmp eax, 3
// 0076b167  7521                 jne 0x76b18a
// 0076b169  56                   push esi
// 0076b16a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0076b16e  8b0e                 mov ecx, dword ptr [esi]
// 0076b170  689041be00           push 0xbe4190
// 0076b175  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0076b17b  0fb6c0               movzx eax, al
// 0076b17e  f7d8                 neg eax
// 0076b180  1bc0                 sbb eax, eax
// 0076b182  23442408             and eax, dword ptr [esp + 8]
// 0076b186  8906                 mov dword ptr [esi], eax
// 0076b188  5e                   pop esi
// 0076b189  c3                   ret 
// 0076b18a  8b442408             mov eax, dword ptr [esp + 8]
// 0076b18e  c7009041be00         mov dword ptr [eax], 0xbe4190
// 0076b194  884804               mov byte ptr [eax + 4], cl
// 0076b197  884805               mov byte ptr [eax + 5], cl
// 0076b19a  c3                   ret 
// 0076b19b  8b442408             mov eax, dword ptr [esp + 8]
// 0076b19f  3bc1                 cmp eax, ecx
// 0076b1a1  741a                 je 0x76b1bd
// 0076b1a3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0076b1a7  8b11                 mov edx, dword ptr [ecx]
// 0076b1a9  8910                 mov dword ptr [eax], edx
// 0076b1ab  8b5104               mov edx, dword ptr [ecx + 4]
// 0076b1ae  895004               mov dword ptr [eax + 4], edx
// 0076b1b1  8b5108               mov edx, dword ptr [ecx + 8]
// 0076b1b4  895008               mov dword ptr [eax + 8], edx
// 0076b1b7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0076b1ba  89480c               mov dword ptr [eax + 0xc], ecx
// 0076b1bd  c3                   ret 
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
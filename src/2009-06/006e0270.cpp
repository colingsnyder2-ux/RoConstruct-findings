// roc 2009-06 006e0270  unit: RBX::ImageButton  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e0270
//
// 006e0270  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006e0274  33c9                 xor ecx, ecx
// 006e0276  3bc1                 cmp eax, ecx
// 006e0278  7441                 je 0x6e02bb
// 006e027a  83f801               cmp eax, 1
// 006e027d  743c                 je 0x6e02bb
// 006e027f  83f802               cmp eax, 2
// 006e0282  7459                 je 0x6e02dd
// 006e0284  83f803               cmp eax, 3
// 006e0287  7521                 jne 0x6e02aa
// 006e0289  56                   push esi
// 006e028a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e028e  8b0e                 mov ecx, dword ptr [esi]
// 006e0290  684838a200           push 0xa23848
// 006e0295  ff15a4e98900         call dword ptr [0x89e9a4]
// 006e029b  0fb6c0               movzx eax, al
// 006e029e  f7d8                 neg eax
// 006e02a0  1bc0                 sbb eax, eax
// 006e02a2  23442408             and eax, dword ptr [esp + 8]
// 006e02a6  8906                 mov dword ptr [esi], eax
// 006e02a8  5e                   pop esi
// 006e02a9  c3                   ret 
// 006e02aa  8b442408             mov eax, dword ptr [esp + 8]
// 006e02ae  c7004838a200         mov dword ptr [eax], 0xa23848
// 006e02b4  884804               mov byte ptr [eax + 4], cl
// 006e02b7  884805               mov byte ptr [eax + 5], cl
// 006e02ba  c3                   ret 
// 006e02bb  8b442408             mov eax, dword ptr [esp + 8]
// 006e02bf  3bc1                 cmp eax, ecx
// 006e02c1  741a                 je 0x6e02dd
// 006e02c3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e02c7  8b11                 mov edx, dword ptr [ecx]
// 006e02c9  8910                 mov dword ptr [eax], edx
// 006e02cb  8b5104               mov edx, dword ptr [ecx + 4]
// 006e02ce  895004               mov dword ptr [eax + 4], edx
// 006e02d1  8b5108               mov edx, dword ptr [ecx + 8]
// 006e02d4  895008               mov dword ptr [eax + 8], edx
// 006e02d7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 006e02da  89480c               mov dword ptr [eax + 0xc], ecx
// 006e02dd  c3                   ret 
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
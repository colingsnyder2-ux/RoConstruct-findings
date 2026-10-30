// roc 2010-06 009082e0  unit: Ogre::RbxCluster  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009082e0
//
// 009082e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009082e4  33c9                 xor ecx, ecx
// 009082e6  3bc1                 cmp eax, ecx
// 009082e8  7441                 je 0x90832b
// 009082ea  83f801               cmp eax, 1
// 009082ed  743c                 je 0x90832b
// 009082ef  83f802               cmp eax, 2
// 009082f2  7459                 je 0x90834d
// 009082f4  83f803               cmp eax, 3
// 009082f7  7521                 jne 0x90831a
// 009082f9  56                   push esi
// 009082fa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 009082fe  8b0e                 mov ecx, dword ptr [esi]
// 00908300  6888e9bf00           push 0xbfe988
// 00908305  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0090830b  0fb6c0               movzx eax, al
// 0090830e  f7d8                 neg eax
// 00908310  1bc0                 sbb eax, eax
// 00908312  23442408             and eax, dword ptr [esp + 8]
// 00908316  8906                 mov dword ptr [esi], eax
// 00908318  5e                   pop esi
// 00908319  c3                   ret 
// 0090831a  8b442408             mov eax, dword ptr [esp + 8]
// 0090831e  c70088e9bf00         mov dword ptr [eax], 0xbfe988
// 00908324  884804               mov byte ptr [eax + 4], cl
// 00908327  884805               mov byte ptr [eax + 5], cl
// 0090832a  c3                   ret 
// 0090832b  8b442408             mov eax, dword ptr [esp + 8]
// 0090832f  3bc1                 cmp eax, ecx
// 00908331  741a                 je 0x90834d
// 00908333  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00908337  8b11                 mov edx, dword ptr [ecx]
// 00908339  8910                 mov dword ptr [eax], edx
// 0090833b  8b5104               mov edx, dword ptr [ecx + 4]
// 0090833e  895004               mov dword ptr [eax + 4], edx
// 00908341  8b5108               mov edx, dword ptr [ecx + 8]
// 00908344  895008               mov dword ptr [eax + 8], edx
// 00908347  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0090834a  89480c               mov dword ptr [eax + 0xc], ecx
// 0090834d  c3                   ret 
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
// roc 2009-06 005f3050  unit: RBX::BasicPartInstance  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f3050
//
// 005f3050  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005f3054  33c9                 xor ecx, ecx
// 005f3056  3bc1                 cmp eax, ecx
// 005f3058  7441                 je 0x5f309b
// 005f305a  83f801               cmp eax, 1
// 005f305d  743c                 je 0x5f309b
// 005f305f  83f802               cmp eax, 2
// 005f3062  7465                 je 0x5f30c9
// 005f3064  83f803               cmp eax, 3
// 005f3067  7521                 jne 0x5f308a
// 005f3069  56                   push esi
// 005f306a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005f306e  8b0e                 mov ecx, dword ptr [esi]
// 005f3070  686838a000           push 0xa03868
// 005f3075  ff15a4e98900         call dword ptr [0x89e9a4]
// 005f307b  0fb6c0               movzx eax, al
// 005f307e  f7d8                 neg eax
// 005f3080  1bc0                 sbb eax, eax
// 005f3082  23442408             and eax, dword ptr [esp + 8]
// 005f3086  8906                 mov dword ptr [esi], eax
// 005f3088  5e                   pop esi
// 005f3089  c3                   ret 
// 005f308a  8b442408             mov eax, dword ptr [esp + 8]
// 005f308e  c7006838a000         mov dword ptr [eax], 0xa03868
// 005f3094  884804               mov byte ptr [eax + 4], cl
// 005f3097  884805               mov byte ptr [eax + 5], cl
// 005f309a  c3                   ret 
// 005f309b  8b442408             mov eax, dword ptr [esp + 8]
// 005f309f  3bc1                 cmp eax, ecx
// 005f30a1  7426                 je 0x5f30c9
// 005f30a3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f30a7  8b11                 mov edx, dword ptr [ecx]
// 005f30a9  8910                 mov dword ptr [eax], edx
// 005f30ab  8b5104               mov edx, dword ptr [ecx + 4]
// 005f30ae  895004               mov dword ptr [eax + 4], edx
// 005f30b1  8b5108               mov edx, dword ptr [ecx + 8]
// 005f30b4  895008               mov dword ptr [eax + 8], edx
// 005f30b7  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005f30ba  89500c               mov dword ptr [eax + 0xc], edx
// 005f30bd  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005f30c0  895010               mov dword ptr [eax + 0x10], edx
// 005f30c3  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 005f30c6  894814               mov dword ptr [eax + 0x14], ecx
// 005f30c9  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

#include <typeinfo>
#include <new>

// boost::detail::function::functor_manager<F>::manage for a small, trivially copyable functor
// stored in place; 0xb2f1b0 is typeid(F)
extern const type_info type_descriptor_b2f1b0;

struct Functor
{
    int f0, f1, f2, f3, f4, f5;
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
    char data[24];
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
        if (check_type == type_descriptor_b2f1b0)
            out_buffer.obj_ptr = (void *)&in_buffer.data;
        else
            out_buffer.obj_ptr = 0;
    } else {
        out_buffer.type.type = &type_descriptor_b2f1b0;
        out_buffer.type.const_qualified = false;
        out_buffer.type.volatile_qualified = false;
    }
}
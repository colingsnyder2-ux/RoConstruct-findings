// roc 2010-06 006c7170  unit: RBX::Handles  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c7170
//
// 006c7170  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006c7174  33c9                 xor ecx, ecx
// 006c7176  3bc1                 cmp eax, ecx
// 006c7178  7441                 je 0x6c71bb
// 006c717a  83f801               cmp eax, 1
// 006c717d  743c                 je 0x6c71bb
// 006c717f  83f802               cmp eax, 2
// 006c7182  744d                 je 0x6c71d1
// 006c7184  83f803               cmp eax, 3
// 006c7187  7521                 jne 0x6c71aa
// 006c7189  56                   push esi
// 006c718a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c718e  8b0e                 mov ecx, dword ptr [esi]
// 006c7190  681013bd00           push 0xbd1310
// 006c7195  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 006c719b  0fb6c0               movzx eax, al
// 006c719e  f7d8                 neg eax
// 006c71a0  1bc0                 sbb eax, eax
// 006c71a2  23442408             and eax, dword ptr [esp + 8]
// 006c71a6  8906                 mov dword ptr [esi], eax
// 006c71a8  5e                   pop esi
// 006c71a9  c3                   ret 
// 006c71aa  8b442408             mov eax, dword ptr [esp + 8]
// 006c71ae  c7001013bd00         mov dword ptr [eax], 0xbd1310
// 006c71b4  884804               mov byte ptr [eax + 4], cl
// 006c71b7  884805               mov byte ptr [eax + 5], cl
// 006c71ba  c3                   ret 
// 006c71bb  8b442408             mov eax, dword ptr [esp + 8]
// 006c71bf  3bc1                 cmp eax, ecx
// 006c71c1  740e                 je 0x6c71d1
// 006c71c3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006c71c7  8b11                 mov edx, dword ptr [ecx]
// 006c71c9  8910                 mov dword ptr [eax], edx
// 006c71cb  8b4904               mov ecx, dword ptr [ecx + 4]
// 006c71ce  894804               mov dword ptr [eax + 4], ecx
// 006c71d1  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

#include <typeinfo>
#include <new>

// boost::detail::function::functor_manager<F>::manage for a small, trivially copyable functor
// stored in place; 0xb3346c is typeid(F)
extern const type_info type_descriptor_b3346c;

struct Functor
{
    int f0, f1;
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
    char data[8];
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
        if (check_type == type_descriptor_b3346c)
            out_buffer.obj_ptr = (void *)&in_buffer.data;
        else
            out_buffer.obj_ptr = 0;
    } else {
        out_buffer.type.type = &type_descriptor_b3346c;
        out_buffer.type.const_qualified = false;
        out_buffer.type.volatile_qualified = false;
    }
}
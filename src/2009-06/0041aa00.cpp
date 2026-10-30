// roc 2009-06 0041aa00  unit: CInstanceRecord::CNameItem  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041aa00
//
// 0041aa00  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041aa04  33c9                 xor ecx, ecx
// 0041aa06  3bc1                 cmp eax, ecx
// 0041aa08  7441                 je 0x41aa4b
// 0041aa0a  83f801               cmp eax, 1
// 0041aa0d  743c                 je 0x41aa4b
// 0041aa0f  83f802               cmp eax, 2
// 0041aa12  744d                 je 0x41aa61
// 0041aa14  83f803               cmp eax, 3
// 0041aa17  7521                 jne 0x41aa3a
// 0041aa19  56                   push esi
// 0041aa1a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041aa1e  8b0e                 mov ecx, dword ptr [esi]
// 0041aa20  68c8fa9d00           push 0x9dfac8
// 0041aa25  ff15a4e98900         call dword ptr [0x89e9a4]
// 0041aa2b  0fb6c0               movzx eax, al
// 0041aa2e  f7d8                 neg eax
// 0041aa30  1bc0                 sbb eax, eax
// 0041aa32  23442408             and eax, dword ptr [esp + 8]
// 0041aa36  8906                 mov dword ptr [esi], eax
// 0041aa38  5e                   pop esi
// 0041aa39  c3                   ret 
// 0041aa3a  8b442408             mov eax, dword ptr [esp + 8]
// 0041aa3e  c700c8fa9d00         mov dword ptr [eax], 0x9dfac8
// 0041aa44  884804               mov byte ptr [eax + 4], cl
// 0041aa47  884805               mov byte ptr [eax + 5], cl
// 0041aa4a  c3                   ret 
// 0041aa4b  8b442408             mov eax, dword ptr [esp + 8]
// 0041aa4f  3bc1                 cmp eax, ecx
// 0041aa51  740e                 je 0x41aa61
// 0041aa53  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0041aa57  8b11                 mov edx, dword ptr [ecx]
// 0041aa59  8910                 mov dword ptr [eax], edx
// 0041aa5b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0041aa5e  894804               mov dword ptr [eax + 4], ecx
// 0041aa61  c3                   ret 
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
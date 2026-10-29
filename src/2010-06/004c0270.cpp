// roc 2010-06 004c0270  unit: RBX::Network::VPlayer::?$EventDesc  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c0270
//
// 004c0270  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004c0274  33c9                 xor ecx, ecx
// 004c0276  3bc1                 cmp eax, ecx
// 004c0278  7441                 je 0x4c02bb
// 004c027a  83f801               cmp eax, 1
// 004c027d  743c                 je 0x4c02bb
// 004c027f  83f802               cmp eax, 2
// 004c0282  744d                 je 0x4c02d1
// 004c0284  83f803               cmp eax, 3
// 004c0287  7521                 jne 0x4c02aa
// 004c0289  56                   push esi
// 004c028a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004c028e  8b0e                 mov ecx, dword ptr [esi]
// 004c0290  6860cfb800           push 0xb8cf60
// 004c0295  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 004c029b  0fb6c0               movzx eax, al
// 004c029e  f7d8                 neg eax
// 004c02a0  1bc0                 sbb eax, eax
// 004c02a2  23442408             and eax, dword ptr [esp + 8]
// 004c02a6  8906                 mov dword ptr [esi], eax
// 004c02a8  5e                   pop esi
// 004c02a9  c3                   ret 
// 004c02aa  8b442408             mov eax, dword ptr [esp + 8]
// 004c02ae  c70060cfb800         mov dword ptr [eax], 0xb8cf60
// 004c02b4  884804               mov byte ptr [eax + 4], cl
// 004c02b7  884805               mov byte ptr [eax + 5], cl
// 004c02ba  c3                   ret 
// 004c02bb  8b442408             mov eax, dword ptr [esp + 8]
// 004c02bf  3bc1                 cmp eax, ecx
// 004c02c1  740e                 je 0x4c02d1
// 004c02c3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004c02c7  8b11                 mov edx, dword ptr [ecx]
// 004c02c9  8910                 mov dword ptr [eax], edx
// 004c02cb  8b4904               mov ecx, dword ptr [ecx + 4]
// 004c02ce  894804               mov dword ptr [eax + 4], ecx
// 004c02d1  c3                   ret 
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
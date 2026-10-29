// roc 2009-06 00465180  unit: CScriptEditor  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00465180
//
// 00465180  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00465184  33c9                 xor ecx, ecx
// 00465186  3bc1                 cmp eax, ecx
// 00465188  7441                 je 0x4651cb
// 0046518a  83f801               cmp eax, 1
// 0046518d  743c                 je 0x4651cb
// 0046518f  83f802               cmp eax, 2
// 00465192  744d                 je 0x4651e1
// 00465194  83f803               cmp eax, 3
// 00465197  7521                 jne 0x4651ba
// 00465199  56                   push esi
// 0046519a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0046519e  8b0e                 mov ecx, dword ptr [esi]
// 004651a0  6860699e00           push 0x9e6960
// 004651a5  ff15a4e98900         call dword ptr [0x89e9a4]
// 004651ab  0fb6c0               movzx eax, al
// 004651ae  f7d8                 neg eax
// 004651b0  1bc0                 sbb eax, eax
// 004651b2  23442408             and eax, dword ptr [esp + 8]
// 004651b6  8906                 mov dword ptr [esi], eax
// 004651b8  5e                   pop esi
// 004651b9  c3                   ret 
// 004651ba  8b442408             mov eax, dword ptr [esp + 8]
// 004651be  c70060699e00         mov dword ptr [eax], 0x9e6960
// 004651c4  884804               mov byte ptr [eax + 4], cl
// 004651c7  884805               mov byte ptr [eax + 5], cl
// 004651ca  c3                   ret 
// 004651cb  8b442408             mov eax, dword ptr [esp + 8]
// 004651cf  3bc1                 cmp eax, ecx
// 004651d1  740e                 je 0x4651e1
// 004651d3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004651d7  8b11                 mov edx, dword ptr [ecx]
// 004651d9  8910                 mov dword ptr [eax], edx
// 004651db  8b4904               mov ecx, dword ptr [ecx + 4]
// 004651de  894804               mov dword ptr [eax + 4], ecx
// 004651e1  c3                   ret 
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
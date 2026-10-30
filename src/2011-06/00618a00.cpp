// roc 2011-06 00618a00  unit: RBX::ScriptContext  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00618a00
//
// 00618a00  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00618a04  33c9                 xor ecx, ecx
// 00618a06  3bc1                 cmp eax, ecx
// 00618a08  7441                 je 0x618a4b
// 00618a0a  83f801               cmp eax, 1
// 00618a0d  743c                 je 0x618a4b
// 00618a0f  83f802               cmp eax, 2
// 00618a12  744d                 je 0x618a61
// 00618a14  83f803               cmp eax, 3
// 00618a17  7521                 jne 0x618a3a
// 00618a19  56                   push esi
// 00618a1a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00618a1e  8b0e                 mov ecx, dword ptr [esi]
// 00618a20  68e8a8c400           push 0xc4a8e8
// 00618a25  ff15500aa400         call dword ptr [0xa40a50]
// 00618a2b  0fb6c0               movzx eax, al
// 00618a2e  f7d8                 neg eax
// 00618a30  1bc0                 sbb eax, eax
// 00618a32  23442408             and eax, dword ptr [esp + 8]
// 00618a36  8906                 mov dword ptr [esi], eax
// 00618a38  5e                   pop esi
// 00618a39  c3                   ret 
// 00618a3a  8b442408             mov eax, dword ptr [esp + 8]
// 00618a3e  c700e8a8c400         mov dword ptr [eax], 0xc4a8e8
// 00618a44  884804               mov byte ptr [eax + 4], cl
// 00618a47  884805               mov byte ptr [eax + 5], cl
// 00618a4a  c3                   ret 
// 00618a4b  8b442408             mov eax, dword ptr [esp + 8]
// 00618a4f  3bc1                 cmp eax, ecx
// 00618a51  740e                 je 0x618a61
// 00618a53  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00618a57  8b11                 mov edx, dword ptr [ecx]
// 00618a59  8910                 mov dword ptr [eax], edx
// 00618a5b  8b4904               mov ecx, dword ptr [ecx + 4]
// 00618a5e  894804               mov dword ptr [eax + 4], ecx
// 00618a61  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
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
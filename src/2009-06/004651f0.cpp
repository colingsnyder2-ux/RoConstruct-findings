// roc 2009-06 004651f0  unit: CScriptEditor  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004651f0
//
// 004651f0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004651f4  33c9                 xor ecx, ecx
// 004651f6  3bc1                 cmp eax, ecx
// 004651f8  7441                 je 0x46523b
// 004651fa  83f801               cmp eax, 1
// 004651fd  743c                 je 0x46523b
// 004651ff  83f802               cmp eax, 2
// 00465202  744d                 je 0x465251
// 00465204  83f803               cmp eax, 3
// 00465207  7521                 jne 0x46522a
// 00465209  56                   push esi
// 0046520a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0046520e  8b0e                 mov ecx, dword ptr [esi]
// 00465210  68186a9e00           push 0x9e6a18
// 00465215  ff15a4e98900         call dword ptr [0x89e9a4]
// 0046521b  0fb6c0               movzx eax, al
// 0046521e  f7d8                 neg eax
// 00465220  1bc0                 sbb eax, eax
// 00465222  23442408             and eax, dword ptr [esp + 8]
// 00465226  8906                 mov dword ptr [esi], eax
// 00465228  5e                   pop esi
// 00465229  c3                   ret 
// 0046522a  8b442408             mov eax, dword ptr [esp + 8]
// 0046522e  c700186a9e00         mov dword ptr [eax], 0x9e6a18
// 00465234  884804               mov byte ptr [eax + 4], cl
// 00465237  884805               mov byte ptr [eax + 5], cl
// 0046523a  c3                   ret 
// 0046523b  8b442408             mov eax, dword ptr [esp + 8]
// 0046523f  3bc1                 cmp eax, ecx
// 00465241  740e                 je 0x465251
// 00465243  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00465247  8b11                 mov edx, dword ptr [ecx]
// 00465249  8910                 mov dword ptr [eax], edx
// 0046524b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0046524e  894804               mov dword ptr [eax + 4], ecx
// 00465251  c3                   ret 
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
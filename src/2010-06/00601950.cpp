// roc 2010-06 00601950  unit: RBX::Workspace  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00601950
//
// 00601950  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00601954  33c9                 xor ecx, ecx
// 00601956  3bc1                 cmp eax, ecx
// 00601958  7441                 je 0x60199b
// 0060195a  83f801               cmp eax, 1
// 0060195d  743c                 je 0x60199b
// 0060195f  83f802               cmp eax, 2
// 00601962  744d                 je 0x6019b1
// 00601964  83f803               cmp eax, 3
// 00601967  7521                 jne 0x60198a
// 00601969  56                   push esi
// 0060196a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0060196e  8b0e                 mov ecx, dword ptr [esi]
// 00601970  6898e8ba00           push 0xbae898
// 00601975  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0060197b  0fb6c0               movzx eax, al
// 0060197e  f7d8                 neg eax
// 00601980  1bc0                 sbb eax, eax
// 00601982  23442408             and eax, dword ptr [esp + 8]
// 00601986  8906                 mov dword ptr [esi], eax
// 00601988  5e                   pop esi
// 00601989  c3                   ret 
// 0060198a  8b442408             mov eax, dword ptr [esp + 8]
// 0060198e  c70098e8ba00         mov dword ptr [eax], 0xbae898
// 00601994  884804               mov byte ptr [eax + 4], cl
// 00601997  884805               mov byte ptr [eax + 5], cl
// 0060199a  c3                   ret 
// 0060199b  8b442408             mov eax, dword ptr [esp + 8]
// 0060199f  3bc1                 cmp eax, ecx
// 006019a1  740e                 je 0x6019b1
// 006019a3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006019a7  8b11                 mov edx, dword ptr [ecx]
// 006019a9  8910                 mov dword ptr [eax], edx
// 006019ab  8b4904               mov ecx, dword ptr [ecx + 4]
// 006019ae  894804               mov dword ptr [eax + 4], ecx
// 006019b1  c3                   ret 
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
// roc 2010-06 0060bbd0  unit: RBX::ScriptContext  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060bbd0
//
// 0060bbd0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0060bbd4  33c9                 xor ecx, ecx
// 0060bbd6  3bc1                 cmp eax, ecx
// 0060bbd8  7441                 je 0x60bc1b
// 0060bbda  83f801               cmp eax, 1
// 0060bbdd  743c                 je 0x60bc1b
// 0060bbdf  83f802               cmp eax, 2
// 0060bbe2  744d                 je 0x60bc31
// 0060bbe4  83f803               cmp eax, 3
// 0060bbe7  7521                 jne 0x60bc0a
// 0060bbe9  56                   push esi
// 0060bbea  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0060bbee  8b0e                 mov ecx, dword ptr [esi]
// 0060bbf0  6800f9ba00           push 0xbaf900
// 0060bbf5  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0060bbfb  0fb6c0               movzx eax, al
// 0060bbfe  f7d8                 neg eax
// 0060bc00  1bc0                 sbb eax, eax
// 0060bc02  23442408             and eax, dword ptr [esp + 8]
// 0060bc06  8906                 mov dword ptr [esi], eax
// 0060bc08  5e                   pop esi
// 0060bc09  c3                   ret 
// 0060bc0a  8b442408             mov eax, dword ptr [esp + 8]
// 0060bc0e  c70000f9ba00         mov dword ptr [eax], 0xbaf900
// 0060bc14  884804               mov byte ptr [eax + 4], cl
// 0060bc17  884805               mov byte ptr [eax + 5], cl
// 0060bc1a  c3                   ret 
// 0060bc1b  8b442408             mov eax, dword ptr [esp + 8]
// 0060bc1f  3bc1                 cmp eax, ecx
// 0060bc21  740e                 je 0x60bc31
// 0060bc23  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060bc27  8b11                 mov edx, dword ptr [ecx]
// 0060bc29  8910                 mov dword ptr [eax], edx
// 0060bc2b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0060bc2e  894804               mov dword ptr [eax + 4], ecx
// 0060bc31  c3                   ret 
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
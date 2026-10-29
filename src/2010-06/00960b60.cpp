// roc 2010-06 00960b60  unit: RBX::SphereBuilder  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00960b60
//
// 00960b60  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00960b64  33c9                 xor ecx, ecx
// 00960b66  3bc1                 cmp eax, ecx
// 00960b68  7441                 je 0x960bab
// 00960b6a  83f801               cmp eax, 1
// 00960b6d  743c                 je 0x960bab
// 00960b6f  83f802               cmp eax, 2
// 00960b72  744d                 je 0x960bc1
// 00960b74  83f803               cmp eax, 3
// 00960b77  7521                 jne 0x960b9a
// 00960b79  56                   push esi
// 00960b7a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00960b7e  8b0e                 mov ecx, dword ptr [esi]
// 00960b80  68f0f7bf00           push 0xbff7f0
// 00960b85  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 00960b8b  0fb6c0               movzx eax, al
// 00960b8e  f7d8                 neg eax
// 00960b90  1bc0                 sbb eax, eax
// 00960b92  23442408             and eax, dword ptr [esp + 8]
// 00960b96  8906                 mov dword ptr [esi], eax
// 00960b98  5e                   pop esi
// 00960b99  c3                   ret 
// 00960b9a  8b442408             mov eax, dword ptr [esp + 8]
// 00960b9e  c700f0f7bf00         mov dword ptr [eax], 0xbff7f0
// 00960ba4  884804               mov byte ptr [eax + 4], cl
// 00960ba7  884805               mov byte ptr [eax + 5], cl
// 00960baa  c3                   ret 
// 00960bab  8b442408             mov eax, dword ptr [esp + 8]
// 00960baf  3bc1                 cmp eax, ecx
// 00960bb1  740e                 je 0x960bc1
// 00960bb3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00960bb7  8b11                 mov edx, dword ptr [ecx]
// 00960bb9  8910                 mov dword ptr [eax], edx
// 00960bbb  8b4904               mov ecx, dword ptr [ecx + 4]
// 00960bbe  894804               mov dword ptr [eax + 4], ecx
// 00960bc1  c3                   ret 
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
// roc 2009-06 00525a70  unit: RBX::ViewRbxGfx  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00525a70
//
// 00525a70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00525a74  33c9                 xor ecx, ecx
// 00525a76  3bc1                 cmp eax, ecx
// 00525a78  7441                 je 0x525abb
// 00525a7a  83f801               cmp eax, 1
// 00525a7d  743c                 je 0x525abb
// 00525a7f  83f802               cmp eax, 2
// 00525a82  744d                 je 0x525ad1
// 00525a84  83f803               cmp eax, 3
// 00525a87  7521                 jne 0x525aaa
// 00525a89  56                   push esi
// 00525a8a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00525a8e  8b0e                 mov ecx, dword ptr [esi]
// 00525a90  6850b29f00           push 0x9fb250
// 00525a95  ff15a4e98900         call dword ptr [0x89e9a4]
// 00525a9b  0fb6c0               movzx eax, al
// 00525a9e  f7d8                 neg eax
// 00525aa0  1bc0                 sbb eax, eax
// 00525aa2  23442408             and eax, dword ptr [esp + 8]
// 00525aa6  8906                 mov dword ptr [esi], eax
// 00525aa8  5e                   pop esi
// 00525aa9  c3                   ret 
// 00525aaa  8b442408             mov eax, dword ptr [esp + 8]
// 00525aae  c70050b29f00         mov dword ptr [eax], 0x9fb250
// 00525ab4  884804               mov byte ptr [eax + 4], cl
// 00525ab7  884805               mov byte ptr [eax + 5], cl
// 00525aba  c3                   ret 
// 00525abb  8b442408             mov eax, dword ptr [esp + 8]
// 00525abf  3bc1                 cmp eax, ecx
// 00525ac1  740e                 je 0x525ad1
// 00525ac3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00525ac7  8b11                 mov edx, dword ptr [ecx]
// 00525ac9  8910                 mov dword ptr [eax], edx
// 00525acb  8b4904               mov ecx, dword ptr [ecx + 4]
// 00525ace  894804               mov dword ptr [eax + 4], ecx
// 00525ad1  c3                   ret 
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
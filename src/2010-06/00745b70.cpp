// roc 2010-06 00745b70  unit: RBX::AsyncHttpQueue  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00745b70
//
// 00745b70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00745b74  33c9                 xor ecx, ecx
// 00745b76  3bc1                 cmp eax, ecx
// 00745b78  7441                 je 0x745bbb
// 00745b7a  83f801               cmp eax, 1
// 00745b7d  743c                 je 0x745bbb
// 00745b7f  83f802               cmp eax, 2
// 00745b82  744d                 je 0x745bd1
// 00745b84  83f803               cmp eax, 3
// 00745b87  7521                 jne 0x745baa
// 00745b89  56                   push esi
// 00745b8a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00745b8e  8b0e                 mov ecx, dword ptr [esi]
// 00745b90  68a032be00           push 0xbe32a0
// 00745b95  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 00745b9b  0fb6c0               movzx eax, al
// 00745b9e  f7d8                 neg eax
// 00745ba0  1bc0                 sbb eax, eax
// 00745ba2  23442408             and eax, dword ptr [esp + 8]
// 00745ba6  8906                 mov dword ptr [esi], eax
// 00745ba8  5e                   pop esi
// 00745ba9  c3                   ret 
// 00745baa  8b442408             mov eax, dword ptr [esp + 8]
// 00745bae  c700a032be00         mov dword ptr [eax], 0xbe32a0
// 00745bb4  884804               mov byte ptr [eax + 4], cl
// 00745bb7  884805               mov byte ptr [eax + 5], cl
// 00745bba  c3                   ret 
// 00745bbb  8b442408             mov eax, dword ptr [esp + 8]
// 00745bbf  3bc1                 cmp eax, ecx
// 00745bc1  740e                 je 0x745bd1
// 00745bc3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00745bc7  8b11                 mov edx, dword ptr [ecx]
// 00745bc9  8910                 mov dword ptr [eax], edx
// 00745bcb  8b4904               mov ecx, dword ptr [ecx + 4]
// 00745bce  894804               mov dword ptr [eax + 4], ecx
// 00745bd1  c3                   ret 
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
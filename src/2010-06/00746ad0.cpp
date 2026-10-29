// roc 2010-06 00746ad0  unit: RBX::Effect  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00746ad0
//
// 00746ad0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00746ad4  33c9                 xor ecx, ecx
// 00746ad6  3bc1                 cmp eax, ecx
// 00746ad8  7441                 je 0x746b1b
// 00746ada  83f801               cmp eax, 1
// 00746add  743c                 je 0x746b1b
// 00746adf  83f802               cmp eax, 2
// 00746ae2  744d                 je 0x746b31
// 00746ae4  83f803               cmp eax, 3
// 00746ae7  7521                 jne 0x746b0a
// 00746ae9  56                   push esi
// 00746aea  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00746aee  8b0e                 mov ecx, dword ptr [esi]
// 00746af0  68e033be00           push 0xbe33e0
// 00746af5  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 00746afb  0fb6c0               movzx eax, al
// 00746afe  f7d8                 neg eax
// 00746b00  1bc0                 sbb eax, eax
// 00746b02  23442408             and eax, dword ptr [esp + 8]
// 00746b06  8906                 mov dword ptr [esi], eax
// 00746b08  5e                   pop esi
// 00746b09  c3                   ret 
// 00746b0a  8b442408             mov eax, dword ptr [esp + 8]
// 00746b0e  c700e033be00         mov dword ptr [eax], 0xbe33e0
// 00746b14  884804               mov byte ptr [eax + 4], cl
// 00746b17  884805               mov byte ptr [eax + 5], cl
// 00746b1a  c3                   ret 
// 00746b1b  8b442408             mov eax, dword ptr [esp + 8]
// 00746b1f  3bc1                 cmp eax, ecx
// 00746b21  740e                 je 0x746b31
// 00746b23  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00746b27  8b11                 mov edx, dword ptr [ecx]
// 00746b29  8910                 mov dword ptr [eax], edx
// 00746b2b  8b4904               mov ecx, dword ptr [ecx + 4]
// 00746b2e  894804               mov dword ptr [eax + 4], ecx
// 00746b31  c3                   ret 
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
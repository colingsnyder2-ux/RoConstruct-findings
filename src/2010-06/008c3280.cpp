// roc 2010-06 008c3280  unit: RBX::ViewRbxGfx  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008c3280
//
// 008c3280  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008c3284  33c9                 xor ecx, ecx
// 008c3286  3bc1                 cmp eax, ecx
// 008c3288  7441                 je 0x8c32cb
// 008c328a  83f801               cmp eax, 1
// 008c328d  743c                 je 0x8c32cb
// 008c328f  83f802               cmp eax, 2
// 008c3292  744d                 je 0x8c32e1
// 008c3294  83f803               cmp eax, 3
// 008c3297  7521                 jne 0x8c32ba
// 008c3299  56                   push esi
// 008c329a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008c329e  8b0e                 mov ecx, dword ptr [esi]
// 008c32a0  68b8a2bf00           push 0xbfa2b8
// 008c32a5  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 008c32ab  0fb6c0               movzx eax, al
// 008c32ae  f7d8                 neg eax
// 008c32b0  1bc0                 sbb eax, eax
// 008c32b2  23442408             and eax, dword ptr [esp + 8]
// 008c32b6  8906                 mov dword ptr [esi], eax
// 008c32b8  5e                   pop esi
// 008c32b9  c3                   ret 
// 008c32ba  8b442408             mov eax, dword ptr [esp + 8]
// 008c32be  c700b8a2bf00         mov dword ptr [eax], 0xbfa2b8
// 008c32c4  884804               mov byte ptr [eax + 4], cl
// 008c32c7  884805               mov byte ptr [eax + 5], cl
// 008c32ca  c3                   ret 
// 008c32cb  8b442408             mov eax, dword ptr [esp + 8]
// 008c32cf  3bc1                 cmp eax, ecx
// 008c32d1  740e                 je 0x8c32e1
// 008c32d3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008c32d7  8b11                 mov edx, dword ptr [ecx]
// 008c32d9  8910                 mov dword ptr [eax], edx
// 008c32db  8b4904               mov ecx, dword ptr [ecx + 4]
// 008c32de  894804               mov dword ptr [eax + 4], ecx
// 008c32e1  c3                   ret 
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
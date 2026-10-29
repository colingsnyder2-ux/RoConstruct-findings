// roc 2010-06 005f5d30  unit: RBX::P8HopperBin::?$SetImpl  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f5d30
//
// 005f5d30  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005f5d34  33c9                 xor ecx, ecx
// 005f5d36  3bc1                 cmp eax, ecx
// 005f5d38  7441                 je 0x5f5d7b
// 005f5d3a  83f801               cmp eax, 1
// 005f5d3d  743c                 je 0x5f5d7b
// 005f5d3f  83f802               cmp eax, 2
// 005f5d42  744d                 je 0x5f5d91
// 005f5d44  83f803               cmp eax, 3
// 005f5d47  7521                 jne 0x5f5d6a
// 005f5d49  56                   push esi
// 005f5d4a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005f5d4e  8b0e                 mov ecx, dword ptr [esi]
// 005f5d50  68e0c4ba00           push 0xbac4e0
// 005f5d55  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 005f5d5b  0fb6c0               movzx eax, al
// 005f5d5e  f7d8                 neg eax
// 005f5d60  1bc0                 sbb eax, eax
// 005f5d62  23442408             and eax, dword ptr [esp + 8]
// 005f5d66  8906                 mov dword ptr [esi], eax
// 005f5d68  5e                   pop esi
// 005f5d69  c3                   ret 
// 005f5d6a  8b442408             mov eax, dword ptr [esp + 8]
// 005f5d6e  c700e0c4ba00         mov dword ptr [eax], 0xbac4e0
// 005f5d74  884804               mov byte ptr [eax + 4], cl
// 005f5d77  884805               mov byte ptr [eax + 5], cl
// 005f5d7a  c3                   ret 
// 005f5d7b  8b442408             mov eax, dword ptr [esp + 8]
// 005f5d7f  3bc1                 cmp eax, ecx
// 005f5d81  740e                 je 0x5f5d91
// 005f5d83  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f5d87  8b11                 mov edx, dword ptr [ecx]
// 005f5d89  8910                 mov dword ptr [eax], edx
// 005f5d8b  8b4904               mov ecx, dword ptr [ecx + 4]
// 005f5d8e  894804               mov dword ptr [eax + 4], ecx
// 005f5d91  c3                   ret 
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
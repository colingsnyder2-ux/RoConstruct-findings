// roc 2010-06 004e5f60  unit: RBX::Network::Replicator  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e5f60
//
// 004e5f60  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e5f64  33c9                 xor ecx, ecx
// 004e5f66  3bc1                 cmp eax, ecx
// 004e5f68  7441                 je 0x4e5fab
// 004e5f6a  83f801               cmp eax, 1
// 004e5f6d  743c                 je 0x4e5fab
// 004e5f6f  83f802               cmp eax, 2
// 004e5f72  744d                 je 0x4e5fc1
// 004e5f74  83f803               cmp eax, 3
// 004e5f77  7521                 jne 0x4e5f9a
// 004e5f79  56                   push esi
// 004e5f7a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004e5f7e  8b0e                 mov ecx, dword ptr [esi]
// 004e5f80  68f01fb900           push 0xb91ff0
// 004e5f85  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 004e5f8b  0fb6c0               movzx eax, al
// 004e5f8e  f7d8                 neg eax
// 004e5f90  1bc0                 sbb eax, eax
// 004e5f92  23442408             and eax, dword ptr [esp + 8]
// 004e5f96  8906                 mov dword ptr [esi], eax
// 004e5f98  5e                   pop esi
// 004e5f99  c3                   ret 
// 004e5f9a  8b442408             mov eax, dword ptr [esp + 8]
// 004e5f9e  c700f01fb900         mov dword ptr [eax], 0xb91ff0
// 004e5fa4  884804               mov byte ptr [eax + 4], cl
// 004e5fa7  884805               mov byte ptr [eax + 5], cl
// 004e5faa  c3                   ret 
// 004e5fab  8b442408             mov eax, dword ptr [esp + 8]
// 004e5faf  3bc1                 cmp eax, ecx
// 004e5fb1  740e                 je 0x4e5fc1
// 004e5fb3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e5fb7  8b11                 mov edx, dword ptr [ecx]
// 004e5fb9  8910                 mov dword ptr [eax], edx
// 004e5fbb  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e5fbe  894804               mov dword ptr [eax + 4], ecx
// 004e5fc1  c3                   ret 
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
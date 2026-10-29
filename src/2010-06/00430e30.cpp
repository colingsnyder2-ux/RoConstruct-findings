// roc 2010-06 00430e30  unit: COutputView  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00430e30
//
// 00430e30  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00430e34  33c9                 xor ecx, ecx
// 00430e36  3bc1                 cmp eax, ecx
// 00430e38  7441                 je 0x430e7b
// 00430e3a  83f801               cmp eax, 1
// 00430e3d  743c                 je 0x430e7b
// 00430e3f  83f802               cmp eax, 2
// 00430e42  744d                 je 0x430e91
// 00430e44  83f803               cmp eax, 3
// 00430e47  7521                 jne 0x430e6a
// 00430e49  56                   push esi
// 00430e4a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00430e4e  8b0e                 mov ecx, dword ptr [esi]
// 00430e50  6890e3b700           push 0xb7e390
// 00430e55  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 00430e5b  0fb6c0               movzx eax, al
// 00430e5e  f7d8                 neg eax
// 00430e60  1bc0                 sbb eax, eax
// 00430e62  23442408             and eax, dword ptr [esp + 8]
// 00430e66  8906                 mov dword ptr [esi], eax
// 00430e68  5e                   pop esi
// 00430e69  c3                   ret 
// 00430e6a  8b442408             mov eax, dword ptr [esp + 8]
// 00430e6e  c70090e3b700         mov dword ptr [eax], 0xb7e390
// 00430e74  884804               mov byte ptr [eax + 4], cl
// 00430e77  884805               mov byte ptr [eax + 5], cl
// 00430e7a  c3                   ret 
// 00430e7b  8b442408             mov eax, dword ptr [esp + 8]
// 00430e7f  3bc1                 cmp eax, ecx
// 00430e81  740e                 je 0x430e91
// 00430e83  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00430e87  8b11                 mov edx, dword ptr [ecx]
// 00430e89  8910                 mov dword ptr [eax], edx
// 00430e8b  8b4904               mov ecx, dword ptr [ecx + 4]
// 00430e8e  894804               mov dword ptr [eax + 4], ecx
// 00430e91  c3                   ret 
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
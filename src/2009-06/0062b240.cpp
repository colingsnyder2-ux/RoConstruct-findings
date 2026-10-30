// roc 2009-06 0062b240  unit: RBX::Workspace  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062b240
//
// 0062b240  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0062b244  33c9                 xor ecx, ecx
// 0062b246  3bc1                 cmp eax, ecx
// 0062b248  7441                 je 0x62b28b
// 0062b24a  83f801               cmp eax, 1
// 0062b24d  743c                 je 0x62b28b
// 0062b24f  83f802               cmp eax, 2
// 0062b252  744d                 je 0x62b2a1
// 0062b254  83f803               cmp eax, 3
// 0062b257  7521                 jne 0x62b27a
// 0062b259  56                   push esi
// 0062b25a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062b25e  8b0e                 mov ecx, dword ptr [esi]
// 0062b260  68c0bda000           push 0xa0bdc0
// 0062b265  ff15a4e98900         call dword ptr [0x89e9a4]
// 0062b26b  0fb6c0               movzx eax, al
// 0062b26e  f7d8                 neg eax
// 0062b270  1bc0                 sbb eax, eax
// 0062b272  23442408             and eax, dword ptr [esp + 8]
// 0062b276  8906                 mov dword ptr [esi], eax
// 0062b278  5e                   pop esi
// 0062b279  c3                   ret 
// 0062b27a  8b442408             mov eax, dword ptr [esp + 8]
// 0062b27e  c700c0bda000         mov dword ptr [eax], 0xa0bdc0
// 0062b284  884804               mov byte ptr [eax + 4], cl
// 0062b287  884805               mov byte ptr [eax + 5], cl
// 0062b28a  c3                   ret 
// 0062b28b  8b442408             mov eax, dword ptr [esp + 8]
// 0062b28f  3bc1                 cmp eax, ecx
// 0062b291  740e                 je 0x62b2a1
// 0062b293  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0062b297  8b11                 mov edx, dword ptr [ecx]
// 0062b299  8910                 mov dword ptr [eax], edx
// 0062b29b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0062b29e  894804               mov dword ptr [eax + 4], ecx
// 0062b2a1  c3                   ret 
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
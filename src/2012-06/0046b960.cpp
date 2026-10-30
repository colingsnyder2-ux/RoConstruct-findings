// roc 2012-06 0046b960  unit: RenderStatsItem  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0046b960
//
// 0046b960  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0046b964  33c9                 xor ecx, ecx
// 0046b966  3bc1                 cmp eax, ecx
// 0046b968  7441                 je 0x46b9ab
// 0046b96a  83f801               cmp eax, 1
// 0046b96d  743c                 je 0x46b9ab
// 0046b96f  83f802               cmp eax, 2
// 0046b972  744d                 je 0x46b9c1
// 0046b974  83f803               cmp eax, 3
// 0046b977  7521                 jne 0x46b99a
// 0046b979  56                   push esi
// 0046b97a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0046b97e  8b0e                 mov ecx, dword ptr [esi]
// 0046b980  6850c7d600           push 0xd6c750
// 0046b985  ff15ec29b200         call dword ptr [0xb229ec]
// 0046b98b  0fb6c0               movzx eax, al
// 0046b98e  f7d8                 neg eax
// 0046b990  1bc0                 sbb eax, eax
// 0046b992  23442408             and eax, dword ptr [esp + 8]
// 0046b996  8906                 mov dword ptr [esi], eax
// 0046b998  5e                   pop esi
// 0046b999  c3                   ret 
// 0046b99a  8b442408             mov eax, dword ptr [esp + 8]
// 0046b99e  c70050c7d600         mov dword ptr [eax], 0xd6c750
// 0046b9a4  884804               mov byte ptr [eax + 4], cl
// 0046b9a7  884805               mov byte ptr [eax + 5], cl
// 0046b9aa  c3                   ret 
// 0046b9ab  8b442408             mov eax, dword ptr [esp + 8]
// 0046b9af  3bc1                 cmp eax, ecx
// 0046b9b1  740e                 je 0x46b9c1
// 0046b9b3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0046b9b7  8b11                 mov edx, dword ptr [ecx]
// 0046b9b9  8910                 mov dword ptr [eax], edx
// 0046b9bb  8b4904               mov ecx, dword ptr [ecx + 4]
// 0046b9be  894804               mov dword ptr [eax + 4], ecx
// 0046b9c1  c3                   ret 
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
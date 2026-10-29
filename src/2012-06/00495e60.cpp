// roc 2012-06 00495e60  unit: CRobloxWnd::PartDropTarget  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00495e60
//
// 00495e60  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00495e64  33c9                 xor ecx, ecx
// 00495e66  3bc1                 cmp eax, ecx
// 00495e68  7441                 je 0x495eab
// 00495e6a  83f801               cmp eax, 1
// 00495e6d  743c                 je 0x495eab
// 00495e6f  83f802               cmp eax, 2
// 00495e72  744d                 je 0x495ec1
// 00495e74  83f803               cmp eax, 3
// 00495e77  7521                 jne 0x495e9a
// 00495e79  56                   push esi
// 00495e7a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00495e7e  8b0e                 mov ecx, dword ptr [esi]
// 00495e80  68300ed700           push 0xd70e30
// 00495e85  ff15ec29b200         call dword ptr [0xb229ec]
// 00495e8b  0fb6c0               movzx eax, al
// 00495e8e  f7d8                 neg eax
// 00495e90  1bc0                 sbb eax, eax
// 00495e92  23442408             and eax, dword ptr [esp + 8]
// 00495e96  8906                 mov dword ptr [esi], eax
// 00495e98  5e                   pop esi
// 00495e99  c3                   ret 
// 00495e9a  8b442408             mov eax, dword ptr [esp + 8]
// 00495e9e  c700300ed700         mov dword ptr [eax], 0xd70e30
// 00495ea4  884804               mov byte ptr [eax + 4], cl
// 00495ea7  884805               mov byte ptr [eax + 5], cl
// 00495eaa  c3                   ret 
// 00495eab  8b442408             mov eax, dword ptr [esp + 8]
// 00495eaf  3bc1                 cmp eax, ecx
// 00495eb1  740e                 je 0x495ec1
// 00495eb3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00495eb7  8b11                 mov edx, dword ptr [ecx]
// 00495eb9  8910                 mov dword ptr [eax], edx
// 00495ebb  8b4904               mov ecx, dword ptr [ecx + 4]
// 00495ebe  894804               mov dword ptr [eax + 4], ecx
// 00495ec1  c3                   ret 
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
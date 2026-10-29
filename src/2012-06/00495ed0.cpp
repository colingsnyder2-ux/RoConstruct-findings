// roc 2012-06 00495ed0  unit: CRobloxWnd::PartDropTarget  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00495ed0
//
// 00495ed0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00495ed4  33c9                 xor ecx, ecx
// 00495ed6  3bc1                 cmp eax, ecx
// 00495ed8  7441                 je 0x495f1b
// 00495eda  83f801               cmp eax, 1
// 00495edd  743c                 je 0x495f1b
// 00495edf  83f802               cmp eax, 2
// 00495ee2  744d                 je 0x495f31
// 00495ee4  83f803               cmp eax, 3
// 00495ee7  7521                 jne 0x495f0a
// 00495ee9  56                   push esi
// 00495eea  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00495eee  8b0e                 mov ecx, dword ptr [esi]
// 00495ef0  68980ed700           push 0xd70e98
// 00495ef5  ff15ec29b200         call dword ptr [0xb229ec]
// 00495efb  0fb6c0               movzx eax, al
// 00495efe  f7d8                 neg eax
// 00495f00  1bc0                 sbb eax, eax
// 00495f02  23442408             and eax, dword ptr [esp + 8]
// 00495f06  8906                 mov dword ptr [esi], eax
// 00495f08  5e                   pop esi
// 00495f09  c3                   ret 
// 00495f0a  8b442408             mov eax, dword ptr [esp + 8]
// 00495f0e  c700980ed700         mov dword ptr [eax], 0xd70e98
// 00495f14  884804               mov byte ptr [eax + 4], cl
// 00495f17  884805               mov byte ptr [eax + 5], cl
// 00495f1a  c3                   ret 
// 00495f1b  8b442408             mov eax, dword ptr [esp + 8]
// 00495f1f  3bc1                 cmp eax, ecx
// 00495f21  740e                 je 0x495f31
// 00495f23  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00495f27  8b11                 mov edx, dword ptr [ecx]
// 00495f29  8910                 mov dword ptr [eax], edx
// 00495f2b  8b4904               mov ecx, dword ptr [ecx + 4]
// 00495f2e  894804               mov dword ptr [eax + 4], ecx
// 00495f31  c3                   ret 
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
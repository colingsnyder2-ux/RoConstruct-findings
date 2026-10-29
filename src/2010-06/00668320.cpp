// roc 2010-06 00668320  unit: RBX::VBasicPartInstance::?$FactoryProduct  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00668320
//
// 00668320  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00668324  33c9                 xor ecx, ecx
// 00668326  3bc1                 cmp eax, ecx
// 00668328  7441                 je 0x66836b
// 0066832a  83f801               cmp eax, 1
// 0066832d  743c                 je 0x66836b
// 0066832f  83f802               cmp eax, 2
// 00668332  7465                 je 0x668399
// 00668334  83f803               cmp eax, 3
// 00668337  7521                 jne 0x66835a
// 00668339  56                   push esi
// 0066833a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066833e  8b0e                 mov ecx, dword ptr [esi]
// 00668340  6870d9bb00           push 0xbbd970
// 00668345  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0066834b  0fb6c0               movzx eax, al
// 0066834e  f7d8                 neg eax
// 00668350  1bc0                 sbb eax, eax
// 00668352  23442408             and eax, dword ptr [esp + 8]
// 00668356  8906                 mov dword ptr [esi], eax
// 00668358  5e                   pop esi
// 00668359  c3                   ret 
// 0066835a  8b442408             mov eax, dword ptr [esp + 8]
// 0066835e  c70070d9bb00         mov dword ptr [eax], 0xbbd970
// 00668364  884804               mov byte ptr [eax + 4], cl
// 00668367  884805               mov byte ptr [eax + 5], cl
// 0066836a  c3                   ret 
// 0066836b  8b442408             mov eax, dword ptr [esp + 8]
// 0066836f  3bc1                 cmp eax, ecx
// 00668371  7426                 je 0x668399
// 00668373  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00668377  8b11                 mov edx, dword ptr [ecx]
// 00668379  8910                 mov dword ptr [eax], edx
// 0066837b  8b5104               mov edx, dword ptr [ecx + 4]
// 0066837e  895004               mov dword ptr [eax + 4], edx
// 00668381  8b5108               mov edx, dword ptr [ecx + 8]
// 00668384  895008               mov dword ptr [eax + 8], edx
// 00668387  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0066838a  89500c               mov dword ptr [eax + 0xc], edx
// 0066838d  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00668390  895010               mov dword ptr [eax + 0x10], edx
// 00668393  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 00668396  894814               mov dword ptr [eax + 0x14], ecx
// 00668399  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

#include <typeinfo>
#include <new>

// boost::detail::function::functor_manager<F>::manage for a small, trivially copyable functor
// stored in place; 0xb2f1b0 is typeid(F)
extern const type_info type_descriptor_b2f1b0;

struct Functor
{
    int f0, f1, f2, f3, f4, f5;
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
    char data[24];
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
        if (check_type == type_descriptor_b2f1b0)
            out_buffer.obj_ptr = (void *)&in_buffer.data;
        else
            out_buffer.obj_ptr = 0;
    } else {
        out_buffer.type.type = &type_descriptor_b2f1b0;
        out_buffer.type.const_qualified = false;
        out_buffer.type.volatile_qualified = false;
    }
}
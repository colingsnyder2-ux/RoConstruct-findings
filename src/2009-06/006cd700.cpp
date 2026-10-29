// roc 2009-06 006cd700  unit: RBX::AxisMoveTool  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006cd700
//
// 006cd700  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006cd704  33c9                 xor ecx, ecx
// 006cd706  3bc1                 cmp eax, ecx
// 006cd708  7441                 je 0x6cd74b
// 006cd70a  83f801               cmp eax, 1
// 006cd70d  743c                 je 0x6cd74b
// 006cd70f  83f802               cmp eax, 2
// 006cd712  744d                 je 0x6cd761
// 006cd714  83f803               cmp eax, 3
// 006cd717  7521                 jne 0x6cd73a
// 006cd719  56                   push esi
// 006cd71a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006cd71e  8b0e                 mov ecx, dword ptr [esi]
// 006cd720  682031a200           push 0xa23120
// 006cd725  ff15a4e98900         call dword ptr [0x89e9a4]
// 006cd72b  0fb6c0               movzx eax, al
// 006cd72e  f7d8                 neg eax
// 006cd730  1bc0                 sbb eax, eax
// 006cd732  23442408             and eax, dword ptr [esp + 8]
// 006cd736  8906                 mov dword ptr [esi], eax
// 006cd738  5e                   pop esi
// 006cd739  c3                   ret 
// 006cd73a  8b442408             mov eax, dword ptr [esp + 8]
// 006cd73e  c7002031a200         mov dword ptr [eax], 0xa23120
// 006cd744  884804               mov byte ptr [eax + 4], cl
// 006cd747  884805               mov byte ptr [eax + 5], cl
// 006cd74a  c3                   ret 
// 006cd74b  8b442408             mov eax, dword ptr [esp + 8]
// 006cd74f  3bc1                 cmp eax, ecx
// 006cd751  740e                 je 0x6cd761
// 006cd753  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006cd757  8b11                 mov edx, dword ptr [ecx]
// 006cd759  8910                 mov dword ptr [eax], edx
// 006cd75b  8b4904               mov ecx, dword ptr [ecx + 4]
// 006cd75e  894804               mov dword ptr [eax + 4], ecx
// 006cd761  c3                   ret 
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
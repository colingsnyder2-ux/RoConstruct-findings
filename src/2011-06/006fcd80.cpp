// roc 2011-06 006fcd80  unit: RBX::Flag  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006fcd80
//
// 006fcd80  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006fcd84  33c9                 xor ecx, ecx
// 006fcd86  3bc1                 cmp eax, ecx
// 006fcd88  7441                 je 0x6fcdcb
// 006fcd8a  83f801               cmp eax, 1
// 006fcd8d  743c                 je 0x6fcdcb
// 006fcd8f  83f802               cmp eax, 2
// 006fcd92  7465                 je 0x6fcdf9
// 006fcd94  83f803               cmp eax, 3
// 006fcd97  7521                 jne 0x6fcdba
// 006fcd99  56                   push esi
// 006fcd9a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006fcd9e  8b0e                 mov ecx, dword ptr [esi]
// 006fcda0  68d0a5c700           push 0xc7a5d0
// 006fcda5  ff15500aa400         call dword ptr [0xa40a50]
// 006fcdab  0fb6c0               movzx eax, al
// 006fcdae  f7d8                 neg eax
// 006fcdb0  1bc0                 sbb eax, eax
// 006fcdb2  23442408             and eax, dword ptr [esp + 8]
// 006fcdb6  8906                 mov dword ptr [esi], eax
// 006fcdb8  5e                   pop esi
// 006fcdb9  c3                   ret 
// 006fcdba  8b442408             mov eax, dword ptr [esp + 8]
// 006fcdbe  c700d0a5c700         mov dword ptr [eax], 0xc7a5d0
// 006fcdc4  884804               mov byte ptr [eax + 4], cl
// 006fcdc7  884805               mov byte ptr [eax + 5], cl
// 006fcdca  c3                   ret 
// 006fcdcb  8b442408             mov eax, dword ptr [esp + 8]
// 006fcdcf  3bc1                 cmp eax, ecx
// 006fcdd1  7426                 je 0x6fcdf9
// 006fcdd3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fcdd7  8b11                 mov edx, dword ptr [ecx]
// 006fcdd9  8910                 mov dword ptr [eax], edx
// 006fcddb  8b5104               mov edx, dword ptr [ecx + 4]
// 006fcdde  895004               mov dword ptr [eax + 4], edx
// 006fcde1  8b5108               mov edx, dword ptr [ecx + 8]
// 006fcde4  895008               mov dword ptr [eax + 8], edx
// 006fcde7  8b510c               mov edx, dword ptr [ecx + 0xc]
// 006fcdea  89500c               mov dword ptr [eax + 0xc], edx
// 006fcded  8b5110               mov edx, dword ptr [ecx + 0x10]
// 006fcdf0  895010               mov dword ptr [eax + 0x10], edx
// 006fcdf3  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 006fcdf6  894814               mov dword ptr [eax + 0x14], ecx
// 006fcdf9  c3                   ret 
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
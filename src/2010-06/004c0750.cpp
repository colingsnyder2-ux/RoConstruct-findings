// roc 2010-06 004c0750  unit: RBX::Network::VPlayer::?$EventDesc  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c0750
//
// 004c0750  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004c0754  33c9                 xor ecx, ecx
// 004c0756  3bc1                 cmp eax, ecx
// 004c0758  7441                 je 0x4c079b
// 004c075a  83f801               cmp eax, 1
// 004c075d  743c                 je 0x4c079b
// 004c075f  83f802               cmp eax, 2
// 004c0762  7465                 je 0x4c07c9
// 004c0764  83f803               cmp eax, 3
// 004c0767  7521                 jne 0x4c078a
// 004c0769  56                   push esi
// 004c076a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004c076e  8b0e                 mov ecx, dword ptr [esi]
// 004c0770  68d8d4b800           push 0xb8d4d8
// 004c0775  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 004c077b  0fb6c0               movzx eax, al
// 004c077e  f7d8                 neg eax
// 004c0780  1bc0                 sbb eax, eax
// 004c0782  23442408             and eax, dword ptr [esp + 8]
// 004c0786  8906                 mov dword ptr [esi], eax
// 004c0788  5e                   pop esi
// 004c0789  c3                   ret 
// 004c078a  8b442408             mov eax, dword ptr [esp + 8]
// 004c078e  c700d8d4b800         mov dword ptr [eax], 0xb8d4d8
// 004c0794  884804               mov byte ptr [eax + 4], cl
// 004c0797  884805               mov byte ptr [eax + 5], cl
// 004c079a  c3                   ret 
// 004c079b  8b442408             mov eax, dword ptr [esp + 8]
// 004c079f  3bc1                 cmp eax, ecx
// 004c07a1  7426                 je 0x4c07c9
// 004c07a3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004c07a7  8b11                 mov edx, dword ptr [ecx]
// 004c07a9  8910                 mov dword ptr [eax], edx
// 004c07ab  8b5104               mov edx, dword ptr [ecx + 4]
// 004c07ae  895004               mov dword ptr [eax + 4], edx
// 004c07b1  8b5108               mov edx, dword ptr [ecx + 8]
// 004c07b4  895008               mov dword ptr [eax + 8], edx
// 004c07b7  8b510c               mov edx, dword ptr [ecx + 0xc]
// 004c07ba  89500c               mov dword ptr [eax + 0xc], edx
// 004c07bd  8b5110               mov edx, dword ptr [ecx + 0x10]
// 004c07c0  895010               mov dword ptr [eax + 0x10], edx
// 004c07c3  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 004c07c6  894814               mov dword ptr [eax + 0x14], ecx
// 004c07c9  c3                   ret 
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
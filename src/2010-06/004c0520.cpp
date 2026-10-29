// roc 2010-06 004c0520  unit: RBX::Network::VPlayer::?$EventDesc  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c0520
//
// 004c0520  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004c0524  33c9                 xor ecx, ecx
// 004c0526  3bc1                 cmp eax, ecx
// 004c0528  7441                 je 0x4c056b
// 004c052a  83f801               cmp eax, 1
// 004c052d  743c                 je 0x4c056b
// 004c052f  83f802               cmp eax, 2
// 004c0532  7459                 je 0x4c058d
// 004c0534  83f803               cmp eax, 3
// 004c0537  7521                 jne 0x4c055a
// 004c0539  56                   push esi
// 004c053a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004c053e  8b0e                 mov ecx, dword ptr [esi]
// 004c0540  6880d0b800           push 0xb8d080
// 004c0545  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 004c054b  0fb6c0               movzx eax, al
// 004c054e  f7d8                 neg eax
// 004c0550  1bc0                 sbb eax, eax
// 004c0552  23442408             and eax, dword ptr [esp + 8]
// 004c0556  8906                 mov dword ptr [esi], eax
// 004c0558  5e                   pop esi
// 004c0559  c3                   ret 
// 004c055a  8b442408             mov eax, dword ptr [esp + 8]
// 004c055e  c70080d0b800         mov dword ptr [eax], 0xb8d080
// 004c0564  884804               mov byte ptr [eax + 4], cl
// 004c0567  884805               mov byte ptr [eax + 5], cl
// 004c056a  c3                   ret 
// 004c056b  8b442408             mov eax, dword ptr [esp + 8]
// 004c056f  3bc1                 cmp eax, ecx
// 004c0571  741a                 je 0x4c058d
// 004c0573  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004c0577  8b11                 mov edx, dword ptr [ecx]
// 004c0579  8910                 mov dword ptr [eax], edx
// 004c057b  8b5104               mov edx, dword ptr [ecx + 4]
// 004c057e  895004               mov dword ptr [eax + 4], edx
// 004c0581  8b5108               mov edx, dword ptr [ecx + 8]
// 004c0584  895008               mov dword ptr [eax + 8], edx
// 004c0587  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 004c058a  89480c               mov dword ptr [eax + 0xc], ecx
// 004c058d  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

#include <typeinfo>
#include <new>

// boost::detail::function::functor_manager<F>::manage for a small, trivially copyable functor
// stored in place; 0xb33668 is typeid(F)
extern const type_info type_descriptor_b33668;

struct Functor
{
    int f0, f1, f2, f3;
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
    char data[16];
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
        if (check_type == type_descriptor_b33668)
            out_buffer.obj_ptr = (void *)&in_buffer.data;
        else
            out_buffer.obj_ptr = 0;
    } else {
        out_buffer.type.type = &type_descriptor_b33668;
        out_buffer.type.const_qualified = false;
        out_buffer.type.volatile_qualified = false;
    }
}
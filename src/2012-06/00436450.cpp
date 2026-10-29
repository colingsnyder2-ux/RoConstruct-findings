// roc 2012-06 00436450  unit: CMainFrame  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00436450
//
// 00436450  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00436454  33c9                 xor ecx, ecx
// 00436456  3bc1                 cmp eax, ecx
// 00436458  7441                 je 0x43649b
// 0043645a  83f801               cmp eax, 1
// 0043645d  743c                 je 0x43649b
// 0043645f  83f802               cmp eax, 2
// 00436462  7465                 je 0x4364c9
// 00436464  83f803               cmp eax, 3
// 00436467  7521                 jne 0x43648a
// 00436469  56                   push esi
// 0043646a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0043646e  8b0e                 mov ecx, dword ptr [esi]
// 00436470  68d064d600           push 0xd664d0
// 00436475  ff15ec29b200         call dword ptr [0xb229ec]
// 0043647b  0fb6c0               movzx eax, al
// 0043647e  f7d8                 neg eax
// 00436480  1bc0                 sbb eax, eax
// 00436482  23442408             and eax, dword ptr [esp + 8]
// 00436486  8906                 mov dword ptr [esi], eax
// 00436488  5e                   pop esi
// 00436489  c3                   ret 
// 0043648a  8b442408             mov eax, dword ptr [esp + 8]
// 0043648e  c700d064d600         mov dword ptr [eax], 0xd664d0
// 00436494  884804               mov byte ptr [eax + 4], cl
// 00436497  884805               mov byte ptr [eax + 5], cl
// 0043649a  c3                   ret 
// 0043649b  8b442408             mov eax, dword ptr [esp + 8]
// 0043649f  3bc1                 cmp eax, ecx
// 004364a1  7426                 je 0x4364c9
// 004364a3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004364a7  8b11                 mov edx, dword ptr [ecx]
// 004364a9  8910                 mov dword ptr [eax], edx
// 004364ab  8b5104               mov edx, dword ptr [ecx + 4]
// 004364ae  895004               mov dword ptr [eax + 4], edx
// 004364b1  8b5108               mov edx, dword ptr [ecx + 8]
// 004364b4  895008               mov dword ptr [eax + 8], edx
// 004364b7  8b510c               mov edx, dword ptr [ecx + 0xc]
// 004364ba  89500c               mov dword ptr [eax + 0xc], edx
// 004364bd  8b5110               mov edx, dword ptr [ecx + 0x10]
// 004364c0  895010               mov dword ptr [eax + 0x10], edx
// 004364c3  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 004364c6  894814               mov dword ptr [eax + 0x14], ecx
// 004364c9  c3                   ret 
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
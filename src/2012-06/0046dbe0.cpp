// roc 2012-06 0046dbe0  unit: RBX::Security::VContext::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0046dbe0
//
// 0046dbe0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0046dbe4  33c9                 xor ecx, ecx
// 0046dbe6  3bc1                 cmp eax, ecx
// 0046dbe8  7441                 je 0x46dc2b
// 0046dbea  83f801               cmp eax, 1
// 0046dbed  743c                 je 0x46dc2b
// 0046dbef  83f802               cmp eax, 2
// 0046dbf2  7459                 je 0x46dc4d
// 0046dbf4  83f803               cmp eax, 3
// 0046dbf7  7521                 jne 0x46dc1a
// 0046dbf9  56                   push esi
// 0046dbfa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0046dbfe  8b0e                 mov ecx, dword ptr [esi]
// 0046dc00  6840ccd600           push 0xd6cc40
// 0046dc05  ff15ec29b200         call dword ptr [0xb229ec]
// 0046dc0b  0fb6c0               movzx eax, al
// 0046dc0e  f7d8                 neg eax
// 0046dc10  1bc0                 sbb eax, eax
// 0046dc12  23442408             and eax, dword ptr [esp + 8]
// 0046dc16  8906                 mov dword ptr [esi], eax
// 0046dc18  5e                   pop esi
// 0046dc19  c3                   ret 
// 0046dc1a  8b442408             mov eax, dword ptr [esp + 8]
// 0046dc1e  c70040ccd600         mov dword ptr [eax], 0xd6cc40
// 0046dc24  884804               mov byte ptr [eax + 4], cl
// 0046dc27  884805               mov byte ptr [eax + 5], cl
// 0046dc2a  c3                   ret 
// 0046dc2b  8b442408             mov eax, dword ptr [esp + 8]
// 0046dc2f  3bc1                 cmp eax, ecx
// 0046dc31  741a                 je 0x46dc4d
// 0046dc33  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0046dc37  8b11                 mov edx, dword ptr [ecx]
// 0046dc39  8910                 mov dword ptr [eax], edx
// 0046dc3b  8b5104               mov edx, dword ptr [ecx + 4]
// 0046dc3e  895004               mov dword ptr [eax + 4], edx
// 0046dc41  8b5108               mov edx, dword ptr [ecx + 8]
// 0046dc44  895008               mov dword ptr [eax + 8], edx
// 0046dc47  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0046dc4a  89480c               mov dword ptr [eax + 0xc], ecx
// 0046dc4d  c3                   ret 
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
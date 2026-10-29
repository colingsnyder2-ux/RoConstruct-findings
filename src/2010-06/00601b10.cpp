// roc 2010-06 00601b10  unit: RBX::Workspace  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00601b10
//
// 00601b10  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00601b14  33c9                 xor ecx, ecx
// 00601b16  3bc1                 cmp eax, ecx
// 00601b18  7441                 je 0x601b5b
// 00601b1a  83f801               cmp eax, 1
// 00601b1d  743c                 je 0x601b5b
// 00601b1f  83f802               cmp eax, 2
// 00601b22  7465                 je 0x601b89
// 00601b24  83f803               cmp eax, 3
// 00601b27  7521                 jne 0x601b4a
// 00601b29  56                   push esi
// 00601b2a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00601b2e  8b0e                 mov ecx, dword ptr [esi]
// 00601b30  68c8eaba00           push 0xbaeac8
// 00601b35  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 00601b3b  0fb6c0               movzx eax, al
// 00601b3e  f7d8                 neg eax
// 00601b40  1bc0                 sbb eax, eax
// 00601b42  23442408             and eax, dword ptr [esp + 8]
// 00601b46  8906                 mov dword ptr [esi], eax
// 00601b48  5e                   pop esi
// 00601b49  c3                   ret 
// 00601b4a  8b442408             mov eax, dword ptr [esp + 8]
// 00601b4e  c700c8eaba00         mov dword ptr [eax], 0xbaeac8
// 00601b54  884804               mov byte ptr [eax + 4], cl
// 00601b57  884805               mov byte ptr [eax + 5], cl
// 00601b5a  c3                   ret 
// 00601b5b  8b442408             mov eax, dword ptr [esp + 8]
// 00601b5f  3bc1                 cmp eax, ecx
// 00601b61  7426                 je 0x601b89
// 00601b63  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00601b67  8b11                 mov edx, dword ptr [ecx]
// 00601b69  8910                 mov dword ptr [eax], edx
// 00601b6b  8b5104               mov edx, dword ptr [ecx + 4]
// 00601b6e  895004               mov dword ptr [eax + 4], edx
// 00601b71  8b5108               mov edx, dword ptr [ecx + 8]
// 00601b74  895008               mov dword ptr [eax + 8], edx
// 00601b77  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00601b7a  89500c               mov dword ptr [eax + 0xc], edx
// 00601b7d  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00601b80  895010               mov dword ptr [eax + 0x10], edx
// 00601b83  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 00601b86  894814               mov dword ptr [eax + 0x14], ecx
// 00601b89  c3                   ret 
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
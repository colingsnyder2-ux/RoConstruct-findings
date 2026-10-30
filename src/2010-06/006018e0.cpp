// roc 2010-06 006018e0  unit: RBX::Workspace  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006018e0
//
// 006018e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006018e4  33c9                 xor ecx, ecx
// 006018e6  3bc1                 cmp eax, ecx
// 006018e8  7441                 je 0x60192b
// 006018ea  83f801               cmp eax, 1
// 006018ed  743c                 je 0x60192b
// 006018ef  83f802               cmp eax, 2
// 006018f2  7459                 je 0x60194d
// 006018f4  83f803               cmp eax, 3
// 006018f7  7521                 jne 0x60191a
// 006018f9  56                   push esi
// 006018fa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006018fe  8b0e                 mov ecx, dword ptr [esi]
// 00601900  6810e8ba00           push 0xbae810
// 00601905  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0060190b  0fb6c0               movzx eax, al
// 0060190e  f7d8                 neg eax
// 00601910  1bc0                 sbb eax, eax
// 00601912  23442408             and eax, dword ptr [esp + 8]
// 00601916  8906                 mov dword ptr [esi], eax
// 00601918  5e                   pop esi
// 00601919  c3                   ret 
// 0060191a  8b442408             mov eax, dword ptr [esp + 8]
// 0060191e  c70010e8ba00         mov dword ptr [eax], 0xbae810
// 00601924  884804               mov byte ptr [eax + 4], cl
// 00601927  884805               mov byte ptr [eax + 5], cl
// 0060192a  c3                   ret 
// 0060192b  8b442408             mov eax, dword ptr [esp + 8]
// 0060192f  3bc1                 cmp eax, ecx
// 00601931  741a                 je 0x60194d
// 00601933  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00601937  8b11                 mov edx, dword ptr [ecx]
// 00601939  8910                 mov dword ptr [eax], edx
// 0060193b  8b5104               mov edx, dword ptr [ecx + 4]
// 0060193e  895004               mov dword ptr [eax + 4], edx
// 00601941  8b5108               mov edx, dword ptr [ecx + 8]
// 00601944  895008               mov dword ptr [eax + 8], edx
// 00601947  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0060194a  89480c               mov dword ptr [eax + 0xc], ecx
// 0060194d  c3                   ret 
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
// roc 2009-06 006435a0  unit: RBX::WoodTool  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006435a0
//
// 006435a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006435a4  33c9                 xor ecx, ecx
// 006435a6  3bc1                 cmp eax, ecx
// 006435a8  7441                 je 0x6435eb
// 006435aa  83f801               cmp eax, 1
// 006435ad  743c                 je 0x6435eb
// 006435af  83f802               cmp eax, 2
// 006435b2  7459                 je 0x64360d
// 006435b4  83f803               cmp eax, 3
// 006435b7  7521                 jne 0x6435da
// 006435b9  56                   push esi
// 006435ba  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006435be  8b0e                 mov ecx, dword ptr [esi]
// 006435c0  6878dda000           push 0xa0dd78
// 006435c5  ff15a4e98900         call dword ptr [0x89e9a4]
// 006435cb  0fb6c0               movzx eax, al
// 006435ce  f7d8                 neg eax
// 006435d0  1bc0                 sbb eax, eax
// 006435d2  23442408             and eax, dword ptr [esp + 8]
// 006435d6  8906                 mov dword ptr [esi], eax
// 006435d8  5e                   pop esi
// 006435d9  c3                   ret 
// 006435da  8b442408             mov eax, dword ptr [esp + 8]
// 006435de  c70078dda000         mov dword ptr [eax], 0xa0dd78
// 006435e4  884804               mov byte ptr [eax + 4], cl
// 006435e7  884805               mov byte ptr [eax + 5], cl
// 006435ea  c3                   ret 
// 006435eb  8b442408             mov eax, dword ptr [esp + 8]
// 006435ef  3bc1                 cmp eax, ecx
// 006435f1  741a                 je 0x64360d
// 006435f3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006435f7  8b11                 mov edx, dword ptr [ecx]
// 006435f9  8910                 mov dword ptr [eax], edx
// 006435fb  8b5104               mov edx, dword ptr [ecx + 4]
// 006435fe  895004               mov dword ptr [eax + 4], edx
// 00643601  8b5108               mov edx, dword ptr [ecx + 8]
// 00643604  895008               mov dword ptr [eax + 8], edx
// 00643607  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0064360a  89480c               mov dword ptr [eax + 0xc], ecx
// 0064360d  c3                   ret 
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
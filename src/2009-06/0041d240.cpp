// roc 2009-06 0041d240  unit: CSelectionTreeCtrl  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041d240
//
// 0041d240  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041d244  33c9                 xor ecx, ecx
// 0041d246  3bc1                 cmp eax, ecx
// 0041d248  7441                 je 0x41d28b
// 0041d24a  83f801               cmp eax, 1
// 0041d24d  743c                 je 0x41d28b
// 0041d24f  83f802               cmp eax, 2
// 0041d252  7459                 je 0x41d2ad
// 0041d254  83f803               cmp eax, 3
// 0041d257  7521                 jne 0x41d27a
// 0041d259  56                   push esi
// 0041d25a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041d25e  8b0e                 mov ecx, dword ptr [esi]
// 0041d260  6810ff9d00           push 0x9dff10
// 0041d265  ff15a4e98900         call dword ptr [0x89e9a4]
// 0041d26b  0fb6c0               movzx eax, al
// 0041d26e  f7d8                 neg eax
// 0041d270  1bc0                 sbb eax, eax
// 0041d272  23442408             and eax, dword ptr [esp + 8]
// 0041d276  8906                 mov dword ptr [esi], eax
// 0041d278  5e                   pop esi
// 0041d279  c3                   ret 
// 0041d27a  8b442408             mov eax, dword ptr [esp + 8]
// 0041d27e  c70010ff9d00         mov dword ptr [eax], 0x9dff10
// 0041d284  884804               mov byte ptr [eax + 4], cl
// 0041d287  884805               mov byte ptr [eax + 5], cl
// 0041d28a  c3                   ret 
// 0041d28b  8b442408             mov eax, dword ptr [esp + 8]
// 0041d28f  3bc1                 cmp eax, ecx
// 0041d291  741a                 je 0x41d2ad
// 0041d293  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0041d297  8b11                 mov edx, dword ptr [ecx]
// 0041d299  8910                 mov dword ptr [eax], edx
// 0041d29b  8b5104               mov edx, dword ptr [ecx + 4]
// 0041d29e  895004               mov dword ptr [eax + 4], edx
// 0041d2a1  8b5108               mov edx, dword ptr [ecx + 8]
// 0041d2a4  895008               mov dword ptr [eax + 8], edx
// 0041d2a7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0041d2aa  89480c               mov dword ptr [eax + 0xc], ecx
// 0041d2ad  c3                   ret 
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
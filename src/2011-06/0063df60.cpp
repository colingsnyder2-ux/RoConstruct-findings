// roc 2011-06 0063df60  unit: RBX::Workspace  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063df60
//
// 0063df60  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063df64  33c9                 xor ecx, ecx
// 0063df66  3bc1                 cmp eax, ecx
// 0063df68  7441                 je 0x63dfab
// 0063df6a  83f801               cmp eax, 1
// 0063df6d  743c                 je 0x63dfab
// 0063df6f  83f802               cmp eax, 2
// 0063df72  7459                 je 0x63dfcd
// 0063df74  83f803               cmp eax, 3
// 0063df77  7521                 jne 0x63df9a
// 0063df79  56                   push esi
// 0063df7a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0063df7e  8b0e                 mov ecx, dword ptr [esi]
// 0063df80  680015c500           push 0xc51500
// 0063df85  ff15500aa400         call dword ptr [0xa40a50]
// 0063df8b  0fb6c0               movzx eax, al
// 0063df8e  f7d8                 neg eax
// 0063df90  1bc0                 sbb eax, eax
// 0063df92  23442408             and eax, dword ptr [esp + 8]
// 0063df96  8906                 mov dword ptr [esi], eax
// 0063df98  5e                   pop esi
// 0063df99  c3                   ret 
// 0063df9a  8b442408             mov eax, dword ptr [esp + 8]
// 0063df9e  c7000015c500         mov dword ptr [eax], 0xc51500
// 0063dfa4  884804               mov byte ptr [eax + 4], cl
// 0063dfa7  884805               mov byte ptr [eax + 5], cl
// 0063dfaa  c3                   ret 
// 0063dfab  8b442408             mov eax, dword ptr [esp + 8]
// 0063dfaf  3bc1                 cmp eax, ecx
// 0063dfb1  741a                 je 0x63dfcd
// 0063dfb3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0063dfb7  8b11                 mov edx, dword ptr [ecx]
// 0063dfb9  8910                 mov dword ptr [eax], edx
// 0063dfbb  8b5104               mov edx, dword ptr [ecx + 4]
// 0063dfbe  895004               mov dword ptr [eax + 4], edx
// 0063dfc1  8b5108               mov edx, dword ptr [ecx + 8]
// 0063dfc4  895008               mov dword ptr [eax + 8], edx
// 0063dfc7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0063dfca  89480c               mov dword ptr [eax + 0xc], ecx
// 0063dfcd  c3                   ret 
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
// roc 2010-06 004da0e0  unit: RBX::Network::Server  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004da0e0
//
// 004da0e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004da0e4  33c9                 xor ecx, ecx
// 004da0e6  3bc1                 cmp eax, ecx
// 004da0e8  7441                 je 0x4da12b
// 004da0ea  83f801               cmp eax, 1
// 004da0ed  743c                 je 0x4da12b
// 004da0ef  83f802               cmp eax, 2
// 004da0f2  7459                 je 0x4da14d
// 004da0f4  83f803               cmp eax, 3
// 004da0f7  7521                 jne 0x4da11a
// 004da0f9  56                   push esi
// 004da0fa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004da0fe  8b0e                 mov ecx, dword ptr [esi]
// 004da100  68f00bb900           push 0xb90bf0
// 004da105  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 004da10b  0fb6c0               movzx eax, al
// 004da10e  f7d8                 neg eax
// 004da110  1bc0                 sbb eax, eax
// 004da112  23442408             and eax, dword ptr [esp + 8]
// 004da116  8906                 mov dword ptr [esi], eax
// 004da118  5e                   pop esi
// 004da119  c3                   ret 
// 004da11a  8b442408             mov eax, dword ptr [esp + 8]
// 004da11e  c700f00bb900         mov dword ptr [eax], 0xb90bf0
// 004da124  884804               mov byte ptr [eax + 4], cl
// 004da127  884805               mov byte ptr [eax + 5], cl
// 004da12a  c3                   ret 
// 004da12b  8b442408             mov eax, dword ptr [esp + 8]
// 004da12f  3bc1                 cmp eax, ecx
// 004da131  741a                 je 0x4da14d
// 004da133  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004da137  8b11                 mov edx, dword ptr [ecx]
// 004da139  8910                 mov dword ptr [eax], edx
// 004da13b  8b5104               mov edx, dword ptr [ecx + 4]
// 004da13e  895004               mov dword ptr [eax + 4], edx
// 004da141  8b5108               mov edx, dword ptr [ecx + 8]
// 004da144  895008               mov dword ptr [eax + 8], edx
// 004da147  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 004da14a  89480c               mov dword ptr [eax + 0xc], ecx
// 004da14d  c3                   ret 
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
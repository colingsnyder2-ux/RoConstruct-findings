// roc 2011-06 0063e120  unit: RBX::Workspace  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063e120
//
// 0063e120  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063e124  33c9                 xor ecx, ecx
// 0063e126  3bc1                 cmp eax, ecx
// 0063e128  7441                 je 0x63e16b
// 0063e12a  83f801               cmp eax, 1
// 0063e12d  743c                 je 0x63e16b
// 0063e12f  83f802               cmp eax, 2
// 0063e132  7459                 je 0x63e18d
// 0063e134  83f803               cmp eax, 3
// 0063e137  7521                 jne 0x63e15a
// 0063e139  56                   push esi
// 0063e13a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0063e13e  8b0e                 mov ecx, dword ptr [esi]
// 0063e140  683817c500           push 0xc51738
// 0063e145  ff15500aa400         call dword ptr [0xa40a50]
// 0063e14b  0fb6c0               movzx eax, al
// 0063e14e  f7d8                 neg eax
// 0063e150  1bc0                 sbb eax, eax
// 0063e152  23442408             and eax, dword ptr [esp + 8]
// 0063e156  8906                 mov dword ptr [esi], eax
// 0063e158  5e                   pop esi
// 0063e159  c3                   ret 
// 0063e15a  8b442408             mov eax, dword ptr [esp + 8]
// 0063e15e  c7003817c500         mov dword ptr [eax], 0xc51738
// 0063e164  884804               mov byte ptr [eax + 4], cl
// 0063e167  884805               mov byte ptr [eax + 5], cl
// 0063e16a  c3                   ret 
// 0063e16b  8b442408             mov eax, dword ptr [esp + 8]
// 0063e16f  3bc1                 cmp eax, ecx
// 0063e171  741a                 je 0x63e18d
// 0063e173  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0063e177  8b11                 mov edx, dword ptr [ecx]
// 0063e179  8910                 mov dword ptr [eax], edx
// 0063e17b  8b5104               mov edx, dword ptr [ecx + 4]
// 0063e17e  895004               mov dword ptr [eax + 4], edx
// 0063e181  8b5108               mov edx, dword ptr [ecx + 8]
// 0063e184  895008               mov dword ptr [eax + 8], edx
// 0063e187  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0063e18a  89480c               mov dword ptr [eax + 0xc], ecx
// 0063e18d  c3                   ret 
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
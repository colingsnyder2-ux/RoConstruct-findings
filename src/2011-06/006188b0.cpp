// roc 2011-06 006188b0  unit: RBX::ScriptContext  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006188b0
//
// 006188b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006188b4  33c9                 xor ecx, ecx
// 006188b6  3bc1                 cmp eax, ecx
// 006188b8  7441                 je 0x6188fb
// 006188ba  83f801               cmp eax, 1
// 006188bd  743c                 je 0x6188fb
// 006188bf  83f802               cmp eax, 2
// 006188c2  7459                 je 0x61891d
// 006188c4  83f803               cmp eax, 3
// 006188c7  7521                 jne 0x6188ea
// 006188c9  56                   push esi
// 006188ca  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006188ce  8b0e                 mov ecx, dword ptr [esi]
// 006188d0  68e0a6c400           push 0xc4a6e0
// 006188d5  ff15500aa400         call dword ptr [0xa40a50]
// 006188db  0fb6c0               movzx eax, al
// 006188de  f7d8                 neg eax
// 006188e0  1bc0                 sbb eax, eax
// 006188e2  23442408             and eax, dword ptr [esp + 8]
// 006188e6  8906                 mov dword ptr [esi], eax
// 006188e8  5e                   pop esi
// 006188e9  c3                   ret 
// 006188ea  8b442408             mov eax, dword ptr [esp + 8]
// 006188ee  c700e0a6c400         mov dword ptr [eax], 0xc4a6e0
// 006188f4  884804               mov byte ptr [eax + 4], cl
// 006188f7  884805               mov byte ptr [eax + 5], cl
// 006188fa  c3                   ret 
// 006188fb  8b442408             mov eax, dword ptr [esp + 8]
// 006188ff  3bc1                 cmp eax, ecx
// 00618901  741a                 je 0x61891d
// 00618903  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00618907  8b11                 mov edx, dword ptr [ecx]
// 00618909  8910                 mov dword ptr [eax], edx
// 0061890b  8b5104               mov edx, dword ptr [ecx + 4]
// 0061890e  895004               mov dword ptr [eax + 4], edx
// 00618911  8b5108               mov edx, dword ptr [ecx + 8]
// 00618914  895008               mov dword ptr [eax + 8], edx
// 00618917  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0061891a  89480c               mov dword ptr [eax + 0xc], ecx
// 0061891d  c3                   ret 
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
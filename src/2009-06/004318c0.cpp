// roc 2009-06 004318c0  unit: CPropertyGridItemBrickColor  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004318c0
//
// 004318c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004318c4  33c9                 xor ecx, ecx
// 004318c6  3bc1                 cmp eax, ecx
// 004318c8  7441                 je 0x43190b
// 004318ca  83f801               cmp eax, 1
// 004318cd  743c                 je 0x43190b
// 004318cf  83f802               cmp eax, 2
// 004318d2  744d                 je 0x431921
// 004318d4  83f803               cmp eax, 3
// 004318d7  7521                 jne 0x4318fa
// 004318d9  56                   push esi
// 004318da  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004318de  8b0e                 mov ecx, dword ptr [esi]
// 004318e0  6840159e00           push 0x9e1540
// 004318e5  ff15a4e98900         call dword ptr [0x89e9a4]
// 004318eb  0fb6c0               movzx eax, al
// 004318ee  f7d8                 neg eax
// 004318f0  1bc0                 sbb eax, eax
// 004318f2  23442408             and eax, dword ptr [esp + 8]
// 004318f6  8906                 mov dword ptr [esi], eax
// 004318f8  5e                   pop esi
// 004318f9  c3                   ret 
// 004318fa  8b442408             mov eax, dword ptr [esp + 8]
// 004318fe  c70040159e00         mov dword ptr [eax], 0x9e1540
// 00431904  884804               mov byte ptr [eax + 4], cl
// 00431907  884805               mov byte ptr [eax + 5], cl
// 0043190a  c3                   ret 
// 0043190b  8b442408             mov eax, dword ptr [esp + 8]
// 0043190f  3bc1                 cmp eax, ecx
// 00431911  740e                 je 0x431921
// 00431913  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00431917  8b11                 mov edx, dword ptr [ecx]
// 00431919  8910                 mov dword ptr [eax], edx
// 0043191b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0043191e  894804               mov dword ptr [eax + 4], ecx
// 00431921  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

#include <typeinfo>
#include <new>

// boost::detail::function::functor_manager<F>::manage for a small, trivially copyable functor
// stored in place; 0xb3346c is typeid(F)
extern const type_info type_descriptor_b3346c;

struct Functor
{
    int f0, f1;
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
    char data[8];
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
        if (check_type == type_descriptor_b3346c)
            out_buffer.obj_ptr = (void *)&in_buffer.data;
        else
            out_buffer.obj_ptr = 0;
    } else {
        out_buffer.type.type = &type_descriptor_b3346c;
        out_buffer.type.const_qualified = false;
        out_buffer.type.volatile_qualified = false;
    }
}
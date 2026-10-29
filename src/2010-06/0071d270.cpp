// roc 2010-06 0071d270  unit: RBX::ScriptMouseCommand  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0071d270
//
// 0071d270  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0071d274  33c9                 xor ecx, ecx
// 0071d276  3bc1                 cmp eax, ecx
// 0071d278  7441                 je 0x71d2bb
// 0071d27a  83f801               cmp eax, 1
// 0071d27d  743c                 je 0x71d2bb
// 0071d27f  83f802               cmp eax, 2
// 0071d282  7459                 je 0x71d2dd
// 0071d284  83f803               cmp eax, 3
// 0071d287  7521                 jne 0x71d2aa
// 0071d289  56                   push esi
// 0071d28a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0071d28e  8b0e                 mov ecx, dword ptr [esi]
// 0071d290  68701fbe00           push 0xbe1f70
// 0071d295  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0071d29b  0fb6c0               movzx eax, al
// 0071d29e  f7d8                 neg eax
// 0071d2a0  1bc0                 sbb eax, eax
// 0071d2a2  23442408             and eax, dword ptr [esp + 8]
// 0071d2a6  8906                 mov dword ptr [esi], eax
// 0071d2a8  5e                   pop esi
// 0071d2a9  c3                   ret 
// 0071d2aa  8b442408             mov eax, dword ptr [esp + 8]
// 0071d2ae  c700701fbe00         mov dword ptr [eax], 0xbe1f70
// 0071d2b4  884804               mov byte ptr [eax + 4], cl
// 0071d2b7  884805               mov byte ptr [eax + 5], cl
// 0071d2ba  c3                   ret 
// 0071d2bb  8b442408             mov eax, dword ptr [esp + 8]
// 0071d2bf  3bc1                 cmp eax, ecx
// 0071d2c1  741a                 je 0x71d2dd
// 0071d2c3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0071d2c7  8b11                 mov edx, dword ptr [ecx]
// 0071d2c9  8910                 mov dword ptr [eax], edx
// 0071d2cb  8b5104               mov edx, dword ptr [ecx + 4]
// 0071d2ce  895004               mov dword ptr [eax + 4], edx
// 0071d2d1  8b5108               mov edx, dword ptr [ecx + 8]
// 0071d2d4  895008               mov dword ptr [eax + 8], edx
// 0071d2d7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0071d2da  89480c               mov dword ptr [eax + 0xc], ecx
// 0071d2dd  c3                   ret 
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
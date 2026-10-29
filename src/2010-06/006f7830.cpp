// roc 2010-06 006f7830  unit: RBX::VFrame::?$FactoryProduct  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f7830
//
// 006f7830  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006f7834  33c9                 xor ecx, ecx
// 006f7836  3bc1                 cmp eax, ecx
// 006f7838  7441                 je 0x6f787b
// 006f783a  83f801               cmp eax, 1
// 006f783d  743c                 je 0x6f787b
// 006f783f  83f802               cmp eax, 2
// 006f7842  744d                 je 0x6f7891
// 006f7844  83f803               cmp eax, 3
// 006f7847  7521                 jne 0x6f786a
// 006f7849  56                   push esi
// 006f784a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f784e  8b0e                 mov ecx, dword ptr [esi]
// 006f7850  68a0e1bd00           push 0xbde1a0
// 006f7855  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 006f785b  0fb6c0               movzx eax, al
// 006f785e  f7d8                 neg eax
// 006f7860  1bc0                 sbb eax, eax
// 006f7862  23442408             and eax, dword ptr [esp + 8]
// 006f7866  8906                 mov dword ptr [esi], eax
// 006f7868  5e                   pop esi
// 006f7869  c3                   ret 
// 006f786a  8b442408             mov eax, dword ptr [esp + 8]
// 006f786e  c700a0e1bd00         mov dword ptr [eax], 0xbde1a0
// 006f7874  884804               mov byte ptr [eax + 4], cl
// 006f7877  884805               mov byte ptr [eax + 5], cl
// 006f787a  c3                   ret 
// 006f787b  8b442408             mov eax, dword ptr [esp + 8]
// 006f787f  3bc1                 cmp eax, ecx
// 006f7881  740e                 je 0x6f7891
// 006f7883  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006f7887  8b11                 mov edx, dword ptr [ecx]
// 006f7889  8910                 mov dword ptr [eax], edx
// 006f788b  8b4904               mov ecx, dword ptr [ecx + 4]
// 006f788e  894804               mov dword ptr [eax + 4], ecx
// 006f7891  c3                   ret 
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
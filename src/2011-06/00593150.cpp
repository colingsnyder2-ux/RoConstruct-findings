// roc 2011-06 00593150  unit: VAuthoringSettings::?$FactoryProduct  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00593150
//
// 00593150  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00593154  33c9                 xor ecx, ecx
// 00593156  3bc1                 cmp eax, ecx
// 00593158  7441                 je 0x59319b
// 0059315a  83f801               cmp eax, 1
// 0059315d  743c                 je 0x59319b
// 0059315f  83f802               cmp eax, 2
// 00593162  744d                 je 0x5931b1
// 00593164  83f803               cmp eax, 3
// 00593167  7521                 jne 0x59318a
// 00593169  56                   push esi
// 0059316a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059316e  8b0e                 mov ecx, dword ptr [esi]
// 00593170  68085ec300           push 0xc35e08
// 00593175  ff15500aa400         call dword ptr [0xa40a50]
// 0059317b  0fb6c0               movzx eax, al
// 0059317e  f7d8                 neg eax
// 00593180  1bc0                 sbb eax, eax
// 00593182  23442408             and eax, dword ptr [esp + 8]
// 00593186  8906                 mov dword ptr [esi], eax
// 00593188  5e                   pop esi
// 00593189  c3                   ret 
// 0059318a  8b442408             mov eax, dword ptr [esp + 8]
// 0059318e  c700085ec300         mov dword ptr [eax], 0xc35e08
// 00593194  884804               mov byte ptr [eax + 4], cl
// 00593197  884805               mov byte ptr [eax + 5], cl
// 0059319a  c3                   ret 
// 0059319b  8b442408             mov eax, dword ptr [esp + 8]
// 0059319f  3bc1                 cmp eax, ecx
// 005931a1  740e                 je 0x5931b1
// 005931a3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005931a7  8b11                 mov edx, dword ptr [ecx]
// 005931a9  8910                 mov dword ptr [eax], edx
// 005931ab  8b4904               mov ecx, dword ptr [ecx + 4]
// 005931ae  894804               mov dword ptr [eax + 4], ecx
// 005931b1  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
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
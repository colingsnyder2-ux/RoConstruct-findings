// roc 2011-06 0046fa90  unit: VCWorkspace::?$CComObject  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046fa90
//
// 0046fa90  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0046fa94  33c9                 xor ecx, ecx
// 0046fa96  3bc1                 cmp eax, ecx
// 0046fa98  7441                 je 0x46fadb
// 0046fa9a  83f801               cmp eax, 1
// 0046fa9d  743c                 je 0x46fadb
// 0046fa9f  83f802               cmp eax, 2
// 0046faa2  744d                 je 0x46faf1
// 0046faa4  83f803               cmp eax, 3
// 0046faa7  7521                 jne 0x46faca
// 0046faa9  56                   push esi
// 0046faaa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0046faae  8b0e                 mov ecx, dword ptr [esi]
// 0046fab0  686058c100           push 0xc15860
// 0046fab5  ff15500aa400         call dword ptr [0xa40a50]
// 0046fabb  0fb6c0               movzx eax, al
// 0046fabe  f7d8                 neg eax
// 0046fac0  1bc0                 sbb eax, eax
// 0046fac2  23442408             and eax, dword ptr [esp + 8]
// 0046fac6  8906                 mov dword ptr [esi], eax
// 0046fac8  5e                   pop esi
// 0046fac9  c3                   ret 
// 0046faca  8b442408             mov eax, dword ptr [esp + 8]
// 0046face  c7006058c100         mov dword ptr [eax], 0xc15860
// 0046fad4  884804               mov byte ptr [eax + 4], cl
// 0046fad7  884805               mov byte ptr [eax + 5], cl
// 0046fada  c3                   ret 
// 0046fadb  8b442408             mov eax, dword ptr [esp + 8]
// 0046fadf  3bc1                 cmp eax, ecx
// 0046fae1  740e                 je 0x46faf1
// 0046fae3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0046fae7  8b11                 mov edx, dword ptr [ecx]
// 0046fae9  8910                 mov dword ptr [eax], edx
// 0046faeb  8b4904               mov ecx, dword ptr [ecx + 4]
// 0046faee  894804               mov dword ptr [eax + 4], ecx
// 0046faf1  c3                   ret 
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
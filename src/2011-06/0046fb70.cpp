// roc 2011-06 0046fb70  unit: VCWorkspace::?$CComObject  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046fb70
//
// 0046fb70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0046fb74  33c9                 xor ecx, ecx
// 0046fb76  3bc1                 cmp eax, ecx
// 0046fb78  7441                 je 0x46fbbb
// 0046fb7a  83f801               cmp eax, 1
// 0046fb7d  743c                 je 0x46fbbb
// 0046fb7f  83f802               cmp eax, 2
// 0046fb82  744d                 je 0x46fbd1
// 0046fb84  83f803               cmp eax, 3
// 0046fb87  7521                 jne 0x46fbaa
// 0046fb89  56                   push esi
// 0046fb8a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0046fb8e  8b0e                 mov ecx, dword ptr [esi]
// 0046fb90  686059c100           push 0xc15960
// 0046fb95  ff15500aa400         call dword ptr [0xa40a50]
// 0046fb9b  0fb6c0               movzx eax, al
// 0046fb9e  f7d8                 neg eax
// 0046fba0  1bc0                 sbb eax, eax
// 0046fba2  23442408             and eax, dword ptr [esp + 8]
// 0046fba6  8906                 mov dword ptr [esi], eax
// 0046fba8  5e                   pop esi
// 0046fba9  c3                   ret 
// 0046fbaa  8b442408             mov eax, dword ptr [esp + 8]
// 0046fbae  c7006059c100         mov dword ptr [eax], 0xc15960
// 0046fbb4  884804               mov byte ptr [eax + 4], cl
// 0046fbb7  884805               mov byte ptr [eax + 5], cl
// 0046fbba  c3                   ret 
// 0046fbbb  8b442408             mov eax, dword ptr [esp + 8]
// 0046fbbf  3bc1                 cmp eax, ecx
// 0046fbc1  740e                 je 0x46fbd1
// 0046fbc3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0046fbc7  8b11                 mov edx, dword ptr [ecx]
// 0046fbc9  8910                 mov dword ptr [eax], edx
// 0046fbcb  8b4904               mov ecx, dword ptr [ecx + 4]
// 0046fbce  894804               mov dword ptr [eax + 4], ecx
// 0046fbd1  c3                   ret 
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
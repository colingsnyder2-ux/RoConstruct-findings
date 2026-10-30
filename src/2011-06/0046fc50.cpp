// roc 2011-06 0046fc50  unit: VCWorkspace::?$CComObject  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046fc50
//
// 0046fc50  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0046fc54  33c9                 xor ecx, ecx
// 0046fc56  3bc1                 cmp eax, ecx
// 0046fc58  7441                 je 0x46fc9b
// 0046fc5a  83f801               cmp eax, 1
// 0046fc5d  743c                 je 0x46fc9b
// 0046fc5f  83f802               cmp eax, 2
// 0046fc62  744d                 je 0x46fcb1
// 0046fc64  83f803               cmp eax, 3
// 0046fc67  7521                 jne 0x46fc8a
// 0046fc69  56                   push esi
// 0046fc6a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0046fc6e  8b0e                 mov ecx, dword ptr [esi]
// 0046fc70  68f85ac100           push 0xc15af8
// 0046fc75  ff15500aa400         call dword ptr [0xa40a50]
// 0046fc7b  0fb6c0               movzx eax, al
// 0046fc7e  f7d8                 neg eax
// 0046fc80  1bc0                 sbb eax, eax
// 0046fc82  23442408             and eax, dword ptr [esp + 8]
// 0046fc86  8906                 mov dword ptr [esi], eax
// 0046fc88  5e                   pop esi
// 0046fc89  c3                   ret 
// 0046fc8a  8b442408             mov eax, dword ptr [esp + 8]
// 0046fc8e  c700f85ac100         mov dword ptr [eax], 0xc15af8
// 0046fc94  884804               mov byte ptr [eax + 4], cl
// 0046fc97  884805               mov byte ptr [eax + 5], cl
// 0046fc9a  c3                   ret 
// 0046fc9b  8b442408             mov eax, dword ptr [esp + 8]
// 0046fc9f  3bc1                 cmp eax, ecx
// 0046fca1  740e                 je 0x46fcb1
// 0046fca3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0046fca7  8b11                 mov edx, dword ptr [ecx]
// 0046fca9  8910                 mov dword ptr [eax], edx
// 0046fcab  8b4904               mov ecx, dword ptr [ecx + 4]
// 0046fcae  894804               mov dword ptr [eax + 4], ecx
// 0046fcb1  c3                   ret 
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
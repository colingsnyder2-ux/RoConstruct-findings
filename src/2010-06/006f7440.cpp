// roc 2010-06 006f7440  unit: RBX::VFrame::?$FactoryProduct  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f7440
//
// 006f7440  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006f7444  33c9                 xor ecx, ecx
// 006f7446  3bc1                 cmp eax, ecx
// 006f7448  7441                 je 0x6f748b
// 006f744a  83f801               cmp eax, 1
// 006f744d  743c                 je 0x6f748b
// 006f744f  83f802               cmp eax, 2
// 006f7452  744d                 je 0x6f74a1
// 006f7454  83f803               cmp eax, 3
// 006f7457  7521                 jne 0x6f747a
// 006f7459  56                   push esi
// 006f745a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f745e  8b0e                 mov ecx, dword ptr [esi]
// 006f7460  68b0dbbd00           push 0xbddbb0
// 006f7465  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 006f746b  0fb6c0               movzx eax, al
// 006f746e  f7d8                 neg eax
// 006f7470  1bc0                 sbb eax, eax
// 006f7472  23442408             and eax, dword ptr [esp + 8]
// 006f7476  8906                 mov dword ptr [esi], eax
// 006f7478  5e                   pop esi
// 006f7479  c3                   ret 
// 006f747a  8b442408             mov eax, dword ptr [esp + 8]
// 006f747e  c700b0dbbd00         mov dword ptr [eax], 0xbddbb0
// 006f7484  884804               mov byte ptr [eax + 4], cl
// 006f7487  884805               mov byte ptr [eax + 5], cl
// 006f748a  c3                   ret 
// 006f748b  8b442408             mov eax, dword ptr [esp + 8]
// 006f748f  3bc1                 cmp eax, ecx
// 006f7491  740e                 je 0x6f74a1
// 006f7493  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006f7497  8b11                 mov edx, dword ptr [ecx]
// 006f7499  8910                 mov dword ptr [eax], edx
// 006f749b  8b4904               mov ecx, dword ptr [ecx + 4]
// 006f749e  894804               mov dword ptr [eax + 4], ecx
// 006f74a1  c3                   ret 
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
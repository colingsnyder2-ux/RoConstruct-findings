// roc 2010-06 006f73d0  unit: RBX::VFrame::?$FactoryProduct  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f73d0
//
// 006f73d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006f73d4  33c9                 xor ecx, ecx
// 006f73d6  3bc1                 cmp eax, ecx
// 006f73d8  7441                 je 0x6f741b
// 006f73da  83f801               cmp eax, 1
// 006f73dd  743c                 je 0x6f741b
// 006f73df  83f802               cmp eax, 2
// 006f73e2  744d                 je 0x6f7431
// 006f73e4  83f803               cmp eax, 3
// 006f73e7  7521                 jne 0x6f740a
// 006f73e9  56                   push esi
// 006f73ea  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f73ee  8b0e                 mov ecx, dword ptr [esi]
// 006f73f0  68d8dabd00           push 0xbddad8
// 006f73f5  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 006f73fb  0fb6c0               movzx eax, al
// 006f73fe  f7d8                 neg eax
// 006f7400  1bc0                 sbb eax, eax
// 006f7402  23442408             and eax, dword ptr [esp + 8]
// 006f7406  8906                 mov dword ptr [esi], eax
// 006f7408  5e                   pop esi
// 006f7409  c3                   ret 
// 006f740a  8b442408             mov eax, dword ptr [esp + 8]
// 006f740e  c700d8dabd00         mov dword ptr [eax], 0xbddad8
// 006f7414  884804               mov byte ptr [eax + 4], cl
// 006f7417  884805               mov byte ptr [eax + 5], cl
// 006f741a  c3                   ret 
// 006f741b  8b442408             mov eax, dword ptr [esp + 8]
// 006f741f  3bc1                 cmp eax, ecx
// 006f7421  740e                 je 0x6f7431
// 006f7423  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006f7427  8b11                 mov edx, dword ptr [ecx]
// 006f7429  8910                 mov dword ptr [eax], edx
// 006f742b  8b4904               mov ecx, dword ptr [ecx + 4]
// 006f742e  894804               mov dword ptr [eax + 4], ecx
// 006f7431  c3                   ret 
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
// roc 2009-06 006338d0  unit: std::strstream  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006338d0
//
// 006338d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006338d4  33c9                 xor ecx, ecx
// 006338d6  3bc1                 cmp eax, ecx
// 006338d8  7441                 je 0x63391b
// 006338da  83f801               cmp eax, 1
// 006338dd  743c                 je 0x63391b
// 006338df  83f802               cmp eax, 2
// 006338e2  744d                 je 0x633931
// 006338e4  83f803               cmp eax, 3
// 006338e7  7521                 jne 0x63390a
// 006338e9  56                   push esi
// 006338ea  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006338ee  8b0e                 mov ecx, dword ptr [esi]
// 006338f0  6898caa000           push 0xa0ca98
// 006338f5  ff15a4e98900         call dword ptr [0x89e9a4]
// 006338fb  0fb6c0               movzx eax, al
// 006338fe  f7d8                 neg eax
// 00633900  1bc0                 sbb eax, eax
// 00633902  23442408             and eax, dword ptr [esp + 8]
// 00633906  8906                 mov dword ptr [esi], eax
// 00633908  5e                   pop esi
// 00633909  c3                   ret 
// 0063390a  8b442408             mov eax, dword ptr [esp + 8]
// 0063390e  c70098caa000         mov dword ptr [eax], 0xa0ca98
// 00633914  884804               mov byte ptr [eax + 4], cl
// 00633917  884805               mov byte ptr [eax + 5], cl
// 0063391a  c3                   ret 
// 0063391b  8b442408             mov eax, dword ptr [esp + 8]
// 0063391f  3bc1                 cmp eax, ecx
// 00633921  740e                 je 0x633931
// 00633923  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00633927  8b11                 mov edx, dword ptr [ecx]
// 00633929  8910                 mov dword ptr [eax], edx
// 0063392b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0063392e  894804               mov dword ptr [eax + 4], ecx
// 00633931  c3                   ret 
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
// roc 2009-06 004542e0  unit: CRobloxReportPaneView  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004542e0
//
// 004542e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004542e4  33c9                 xor ecx, ecx
// 004542e6  3bc1                 cmp eax, ecx
// 004542e8  7441                 je 0x45432b
// 004542ea  83f801               cmp eax, 1
// 004542ed  743c                 je 0x45432b
// 004542ef  83f802               cmp eax, 2
// 004542f2  7453                 je 0x454347
// 004542f4  83f803               cmp eax, 3
// 004542f7  7521                 jne 0x45431a
// 004542f9  56                   push esi
// 004542fa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004542fe  8b0e                 mov ecx, dword ptr [esi]
// 00454300  6828559e00           push 0x9e5528
// 00454305  ff15a4e98900         call dword ptr [0x89e9a4]
// 0045430b  0fb6c0               movzx eax, al
// 0045430e  f7d8                 neg eax
// 00454310  1bc0                 sbb eax, eax
// 00454312  23442408             and eax, dword ptr [esp + 8]
// 00454316  8906                 mov dword ptr [esi], eax
// 00454318  5e                   pop esi
// 00454319  c3                   ret 
// 0045431a  8b442408             mov eax, dword ptr [esp + 8]
// 0045431e  c70028559e00         mov dword ptr [eax], 0x9e5528
// 00454324  884804               mov byte ptr [eax + 4], cl
// 00454327  884805               mov byte ptr [eax + 5], cl
// 0045432a  c3                   ret 
// 0045432b  8b442408             mov eax, dword ptr [esp + 8]
// 0045432f  3bc1                 cmp eax, ecx
// 00454331  7414                 je 0x454347
// 00454333  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00454337  8b11                 mov edx, dword ptr [ecx]
// 00454339  8910                 mov dword ptr [eax], edx
// 0045433b  8b5104               mov edx, dword ptr [ecx + 4]
// 0045433e  895004               mov dword ptr [eax + 4], edx
// 00454341  8b4908               mov ecx, dword ptr [ecx + 8]
// 00454344  894808               mov dword ptr [eax + 8], ecx
// 00454347  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

#include <typeinfo>
#include <new>

// boost::detail::function::functor_manager<F>::manage for a small, trivially copyable functor
// stored in place; 0xb38a08 is typeid(F)
extern const type_info type_descriptor_b38a08;

struct Functor
{
    int f0, f1, f2;
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
    char data[12];
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
        if (check_type == type_descriptor_b38a08)
            out_buffer.obj_ptr = (void *)&in_buffer.data;
        else
            out_buffer.obj_ptr = 0;
    } else {
        out_buffer.type.type = &type_descriptor_b38a08;
        out_buffer.type.const_qualified = false;
        out_buffer.type.volatile_qualified = false;
    }
}
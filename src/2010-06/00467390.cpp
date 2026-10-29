// roc 2010-06 00467390  unit: CRobloxWnd::PartDropTarget  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00467390
//
// 00467390  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00467394  33c9                 xor ecx, ecx
// 00467396  3bc1                 cmp eax, ecx
// 00467398  7441                 je 0x4673db
// 0046739a  83f801               cmp eax, 1
// 0046739d  743c                 je 0x4673db
// 0046739f  83f802               cmp eax, 2
// 004673a2  744d                 je 0x4673f1
// 004673a4  83f803               cmp eax, 3
// 004673a7  7521                 jne 0x4673ca
// 004673a9  56                   push esi
// 004673aa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004673ae  8b0e                 mov ecx, dword ptr [esi]
// 004673b0  688845b800           push 0xb84588
// 004673b5  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 004673bb  0fb6c0               movzx eax, al
// 004673be  f7d8                 neg eax
// 004673c0  1bc0                 sbb eax, eax
// 004673c2  23442408             and eax, dword ptr [esp + 8]
// 004673c6  8906                 mov dword ptr [esi], eax
// 004673c8  5e                   pop esi
// 004673c9  c3                   ret 
// 004673ca  8b442408             mov eax, dword ptr [esp + 8]
// 004673ce  c7008845b800         mov dword ptr [eax], 0xb84588
// 004673d4  884804               mov byte ptr [eax + 4], cl
// 004673d7  884805               mov byte ptr [eax + 5], cl
// 004673da  c3                   ret 
// 004673db  8b442408             mov eax, dword ptr [esp + 8]
// 004673df  3bc1                 cmp eax, ecx
// 004673e1  740e                 je 0x4673f1
// 004673e3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004673e7  8b11                 mov edx, dword ptr [ecx]
// 004673e9  8910                 mov dword ptr [eax], edx
// 004673eb  8b4904               mov ecx, dword ptr [ecx + 4]
// 004673ee  894804               mov dword ptr [eax + 4], ecx
// 004673f1  c3                   ret 
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
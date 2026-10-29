// roc 2009-06 0062b2b0  unit: RBX::Workspace  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062b2b0
//
// 0062b2b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0062b2b4  33c9                 xor ecx, ecx
// 0062b2b6  3bc1                 cmp eax, ecx
// 0062b2b8  7441                 je 0x62b2fb
// 0062b2ba  83f801               cmp eax, 1
// 0062b2bd  743c                 je 0x62b2fb
// 0062b2bf  83f802               cmp eax, 2
// 0062b2c2  7453                 je 0x62b317
// 0062b2c4  83f803               cmp eax, 3
// 0062b2c7  7521                 jne 0x62b2ea
// 0062b2c9  56                   push esi
// 0062b2ca  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062b2ce  8b0e                 mov ecx, dword ptr [esi]
// 0062b2d0  6838bea000           push 0xa0be38
// 0062b2d5  ff15a4e98900         call dword ptr [0x89e9a4]
// 0062b2db  0fb6c0               movzx eax, al
// 0062b2de  f7d8                 neg eax
// 0062b2e0  1bc0                 sbb eax, eax
// 0062b2e2  23442408             and eax, dword ptr [esp + 8]
// 0062b2e6  8906                 mov dword ptr [esi], eax
// 0062b2e8  5e                   pop esi
// 0062b2e9  c3                   ret 
// 0062b2ea  8b442408             mov eax, dword ptr [esp + 8]
// 0062b2ee  c70038bea000         mov dword ptr [eax], 0xa0be38
// 0062b2f4  884804               mov byte ptr [eax + 4], cl
// 0062b2f7  884805               mov byte ptr [eax + 5], cl
// 0062b2fa  c3                   ret 
// 0062b2fb  8b442408             mov eax, dword ptr [esp + 8]
// 0062b2ff  3bc1                 cmp eax, ecx
// 0062b301  7414                 je 0x62b317
// 0062b303  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0062b307  8b11                 mov edx, dword ptr [ecx]
// 0062b309  8910                 mov dword ptr [eax], edx
// 0062b30b  8b5104               mov edx, dword ptr [ecx + 4]
// 0062b30e  895004               mov dword ptr [eax + 4], edx
// 0062b311  8b4908               mov ecx, dword ptr [ecx + 8]
// 0062b314  894808               mov dword ptr [eax + 8], ecx
// 0062b317  c3                   ret 
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
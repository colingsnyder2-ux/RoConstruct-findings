// roc 2011-06 0063e0b0  unit: RBX::Workspace  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063e0b0
//
// 0063e0b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063e0b4  33c9                 xor ecx, ecx
// 0063e0b6  3bc1                 cmp eax, ecx
// 0063e0b8  7441                 je 0x63e0fb
// 0063e0ba  83f801               cmp eax, 1
// 0063e0bd  743c                 je 0x63e0fb
// 0063e0bf  83f802               cmp eax, 2
// 0063e0c2  7453                 je 0x63e117
// 0063e0c4  83f803               cmp eax, 3
// 0063e0c7  7521                 jne 0x63e0ea
// 0063e0c9  56                   push esi
// 0063e0ca  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0063e0ce  8b0e                 mov ecx, dword ptr [esi]
// 0063e0d0  687816c500           push 0xc51678
// 0063e0d5  ff15500aa400         call dword ptr [0xa40a50]
// 0063e0db  0fb6c0               movzx eax, al
// 0063e0de  f7d8                 neg eax
// 0063e0e0  1bc0                 sbb eax, eax
// 0063e0e2  23442408             and eax, dword ptr [esp + 8]
// 0063e0e6  8906                 mov dword ptr [esi], eax
// 0063e0e8  5e                   pop esi
// 0063e0e9  c3                   ret 
// 0063e0ea  8b442408             mov eax, dword ptr [esp + 8]
// 0063e0ee  c7007816c500         mov dword ptr [eax], 0xc51678
// 0063e0f4  884804               mov byte ptr [eax + 4], cl
// 0063e0f7  884805               mov byte ptr [eax + 5], cl
// 0063e0fa  c3                   ret 
// 0063e0fb  8b442408             mov eax, dword ptr [esp + 8]
// 0063e0ff  3bc1                 cmp eax, ecx
// 0063e101  7414                 je 0x63e117
// 0063e103  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0063e107  8b11                 mov edx, dword ptr [ecx]
// 0063e109  8910                 mov dword ptr [eax], edx
// 0063e10b  8b5104               mov edx, dword ptr [ecx + 4]
// 0063e10e  895004               mov dword ptr [eax + 4], edx
// 0063e111  8b4908               mov ecx, dword ptr [ecx + 8]
// 0063e114  894808               mov dword ptr [eax + 8], ecx
// 0063e117  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
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
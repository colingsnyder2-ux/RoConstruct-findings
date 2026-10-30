// roc 2010-06 00601a30  unit: RBX::Workspace  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00601a30
//
// 00601a30  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00601a34  33c9                 xor ecx, ecx
// 00601a36  3bc1                 cmp eax, ecx
// 00601a38  7441                 je 0x601a7b
// 00601a3a  83f801               cmp eax, 1
// 00601a3d  743c                 je 0x601a7b
// 00601a3f  83f802               cmp eax, 2
// 00601a42  7453                 je 0x601a97
// 00601a44  83f803               cmp eax, 3
// 00601a47  7521                 jne 0x601a6a
// 00601a49  56                   push esi
// 00601a4a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00601a4e  8b0e                 mov ecx, dword ptr [esi]
// 00601a50  6888e9ba00           push 0xbae988
// 00601a55  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 00601a5b  0fb6c0               movzx eax, al
// 00601a5e  f7d8                 neg eax
// 00601a60  1bc0                 sbb eax, eax
// 00601a62  23442408             and eax, dword ptr [esp + 8]
// 00601a66  8906                 mov dword ptr [esi], eax
// 00601a68  5e                   pop esi
// 00601a69  c3                   ret 
// 00601a6a  8b442408             mov eax, dword ptr [esp + 8]
// 00601a6e  c70088e9ba00         mov dword ptr [eax], 0xbae988
// 00601a74  884804               mov byte ptr [eax + 4], cl
// 00601a77  884805               mov byte ptr [eax + 5], cl
// 00601a7a  c3                   ret 
// 00601a7b  8b442408             mov eax, dword ptr [esp + 8]
// 00601a7f  3bc1                 cmp eax, ecx
// 00601a81  7414                 je 0x601a97
// 00601a83  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00601a87  8b11                 mov edx, dword ptr [ecx]
// 00601a89  8910                 mov dword ptr [eax], edx
// 00601a8b  8b5104               mov edx, dword ptr [ecx + 4]
// 00601a8e  895004               mov dword ptr [eax + 4], edx
// 00601a91  8b4908               mov ecx, dword ptr [ecx + 8]
// 00601a94  894808               mov dword ptr [eax + 8], ecx
// 00601a97  c3                   ret 
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
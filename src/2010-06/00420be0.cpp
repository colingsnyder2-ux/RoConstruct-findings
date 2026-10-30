// roc 2010-06 00420be0  unit: CRobloxTreeCtrlNode  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00420be0
//
// 00420be0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00420be4  33c9                 xor ecx, ecx
// 00420be6  3bc1                 cmp eax, ecx
// 00420be8  7441                 je 0x420c2b
// 00420bea  83f801               cmp eax, 1
// 00420bed  743c                 je 0x420c2b
// 00420bef  83f802               cmp eax, 2
// 00420bf2  744d                 je 0x420c41
// 00420bf4  83f803               cmp eax, 3
// 00420bf7  7521                 jne 0x420c1a
// 00420bf9  56                   push esi
// 00420bfa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00420bfe  8b0e                 mov ecx, dword ptr [esi]
// 00420c00  6880d2b700           push 0xb7d280
// 00420c05  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 00420c0b  0fb6c0               movzx eax, al
// 00420c0e  f7d8                 neg eax
// 00420c10  1bc0                 sbb eax, eax
// 00420c12  23442408             and eax, dword ptr [esp + 8]
// 00420c16  8906                 mov dword ptr [esi], eax
// 00420c18  5e                   pop esi
// 00420c19  c3                   ret 
// 00420c1a  8b442408             mov eax, dword ptr [esp + 8]
// 00420c1e  c70080d2b700         mov dword ptr [eax], 0xb7d280
// 00420c24  884804               mov byte ptr [eax + 4], cl
// 00420c27  884805               mov byte ptr [eax + 5], cl
// 00420c2a  c3                   ret 
// 00420c2b  8b442408             mov eax, dword ptr [esp + 8]
// 00420c2f  3bc1                 cmp eax, ecx
// 00420c31  740e                 je 0x420c41
// 00420c33  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00420c37  8b11                 mov edx, dword ptr [ecx]
// 00420c39  8910                 mov dword ptr [eax], edx
// 00420c3b  8b4904               mov ecx, dword ptr [ecx + 4]
// 00420c3e  894804               mov dword ptr [eax + 4], ecx
// 00420c41  c3                   ret 
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
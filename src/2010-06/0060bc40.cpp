// roc 2010-06 0060bc40  unit: RBX::ScriptContext  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060bc40
//
// 0060bc40  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0060bc44  33c9                 xor ecx, ecx
// 0060bc46  3bc1                 cmp eax, ecx
// 0060bc48  7441                 je 0x60bc8b
// 0060bc4a  83f801               cmp eax, 1
// 0060bc4d  743c                 je 0x60bc8b
// 0060bc4f  83f802               cmp eax, 2
// 0060bc52  744d                 je 0x60bca1
// 0060bc54  83f803               cmp eax, 3
// 0060bc57  7521                 jne 0x60bc7a
// 0060bc59  56                   push esi
// 0060bc5a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0060bc5e  8b0e                 mov ecx, dword ptr [esi]
// 0060bc60  6820faba00           push 0xbafa20
// 0060bc65  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0060bc6b  0fb6c0               movzx eax, al
// 0060bc6e  f7d8                 neg eax
// 0060bc70  1bc0                 sbb eax, eax
// 0060bc72  23442408             and eax, dword ptr [esp + 8]
// 0060bc76  8906                 mov dword ptr [esi], eax
// 0060bc78  5e                   pop esi
// 0060bc79  c3                   ret 
// 0060bc7a  8b442408             mov eax, dword ptr [esp + 8]
// 0060bc7e  c70020faba00         mov dword ptr [eax], 0xbafa20
// 0060bc84  884804               mov byte ptr [eax + 4], cl
// 0060bc87  884805               mov byte ptr [eax + 5], cl
// 0060bc8a  c3                   ret 
// 0060bc8b  8b442408             mov eax, dword ptr [esp + 8]
// 0060bc8f  3bc1                 cmp eax, ecx
// 0060bc91  740e                 je 0x60bca1
// 0060bc93  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060bc97  8b11                 mov edx, dword ptr [ecx]
// 0060bc99  8910                 mov dword ptr [eax], edx
// 0060bc9b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0060bc9e  894804               mov dword ptr [eax + 4], ecx
// 0060bca1  c3                   ret 
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
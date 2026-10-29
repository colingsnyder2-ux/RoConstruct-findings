// roc 2010-06 0060bb60  unit: RBX::ScriptContext  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060bb60
//
// 0060bb60  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0060bb64  33c9                 xor ecx, ecx
// 0060bb66  3bc1                 cmp eax, ecx
// 0060bb68  7441                 je 0x60bbab
// 0060bb6a  83f801               cmp eax, 1
// 0060bb6d  743c                 je 0x60bbab
// 0060bb6f  83f802               cmp eax, 2
// 0060bb72  744d                 je 0x60bbc1
// 0060bb74  83f803               cmp eax, 3
// 0060bb77  7521                 jne 0x60bb9a
// 0060bb79  56                   push esi
// 0060bb7a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0060bb7e  8b0e                 mov ecx, dword ptr [esi]
// 0060bb80  6890f8ba00           push 0xbaf890
// 0060bb85  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0060bb8b  0fb6c0               movzx eax, al
// 0060bb8e  f7d8                 neg eax
// 0060bb90  1bc0                 sbb eax, eax
// 0060bb92  23442408             and eax, dword ptr [esp + 8]
// 0060bb96  8906                 mov dword ptr [esi], eax
// 0060bb98  5e                   pop esi
// 0060bb99  c3                   ret 
// 0060bb9a  8b442408             mov eax, dword ptr [esp + 8]
// 0060bb9e  c70090f8ba00         mov dword ptr [eax], 0xbaf890
// 0060bba4  884804               mov byte ptr [eax + 4], cl
// 0060bba7  884805               mov byte ptr [eax + 5], cl
// 0060bbaa  c3                   ret 
// 0060bbab  8b442408             mov eax, dword ptr [esp + 8]
// 0060bbaf  3bc1                 cmp eax, ecx
// 0060bbb1  740e                 je 0x60bbc1
// 0060bbb3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060bbb7  8b11                 mov edx, dword ptr [ecx]
// 0060bbb9  8910                 mov dword ptr [eax], edx
// 0060bbbb  8b4904               mov ecx, dword ptr [ecx + 4]
// 0060bbbe  894804               mov dword ptr [eax + 4], ecx
// 0060bbc1  c3                   ret 
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
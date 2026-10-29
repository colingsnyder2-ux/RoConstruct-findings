// roc 2010-06 0060baf0  unit: RBX::ScriptContext  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060baf0
//
// 0060baf0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0060baf4  33c9                 xor ecx, ecx
// 0060baf6  3bc1                 cmp eax, ecx
// 0060baf8  7441                 je 0x60bb3b
// 0060bafa  83f801               cmp eax, 1
// 0060bafd  743c                 je 0x60bb3b
// 0060baff  83f802               cmp eax, 2
// 0060bb02  744d                 je 0x60bb51
// 0060bb04  83f803               cmp eax, 3
// 0060bb07  7521                 jne 0x60bb2a
// 0060bb09  56                   push esi
// 0060bb0a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0060bb0e  8b0e                 mov ecx, dword ptr [esi]
// 0060bb10  6830f8ba00           push 0xbaf830
// 0060bb15  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0060bb1b  0fb6c0               movzx eax, al
// 0060bb1e  f7d8                 neg eax
// 0060bb20  1bc0                 sbb eax, eax
// 0060bb22  23442408             and eax, dword ptr [esp + 8]
// 0060bb26  8906                 mov dword ptr [esi], eax
// 0060bb28  5e                   pop esi
// 0060bb29  c3                   ret 
// 0060bb2a  8b442408             mov eax, dword ptr [esp + 8]
// 0060bb2e  c70030f8ba00         mov dword ptr [eax], 0xbaf830
// 0060bb34  884804               mov byte ptr [eax + 4], cl
// 0060bb37  884805               mov byte ptr [eax + 5], cl
// 0060bb3a  c3                   ret 
// 0060bb3b  8b442408             mov eax, dword ptr [esp + 8]
// 0060bb3f  3bc1                 cmp eax, ecx
// 0060bb41  740e                 je 0x60bb51
// 0060bb43  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060bb47  8b11                 mov edx, dword ptr [ecx]
// 0060bb49  8910                 mov dword ptr [eax], edx
// 0060bb4b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0060bb4e  894804               mov dword ptr [eax + 4], ecx
// 0060bb51  c3                   ret 
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
// roc 2011-06 0063e040  unit: RBX::Workspace  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063e040
//
// 0063e040  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063e044  33c9                 xor ecx, ecx
// 0063e046  3bc1                 cmp eax, ecx
// 0063e048  7441                 je 0x63e08b
// 0063e04a  83f801               cmp eax, 1
// 0063e04d  743c                 je 0x63e08b
// 0063e04f  83f802               cmp eax, 2
// 0063e052  744d                 je 0x63e0a1
// 0063e054  83f803               cmp eax, 3
// 0063e057  7521                 jne 0x63e07a
// 0063e059  56                   push esi
// 0063e05a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0063e05e  8b0e                 mov ecx, dword ptr [esi]
// 0063e060  680016c500           push 0xc51600
// 0063e065  ff15500aa400         call dword ptr [0xa40a50]
// 0063e06b  0fb6c0               movzx eax, al
// 0063e06e  f7d8                 neg eax
// 0063e070  1bc0                 sbb eax, eax
// 0063e072  23442408             and eax, dword ptr [esp + 8]
// 0063e076  8906                 mov dword ptr [esi], eax
// 0063e078  5e                   pop esi
// 0063e079  c3                   ret 
// 0063e07a  8b442408             mov eax, dword ptr [esp + 8]
// 0063e07e  c7000016c500         mov dword ptr [eax], 0xc51600
// 0063e084  884804               mov byte ptr [eax + 4], cl
// 0063e087  884805               mov byte ptr [eax + 5], cl
// 0063e08a  c3                   ret 
// 0063e08b  8b442408             mov eax, dword ptr [esp + 8]
// 0063e08f  3bc1                 cmp eax, ecx
// 0063e091  740e                 je 0x63e0a1
// 0063e093  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0063e097  8b11                 mov edx, dword ptr [ecx]
// 0063e099  8910                 mov dword ptr [eax], edx
// 0063e09b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0063e09e  894804               mov dword ptr [eax + 4], ecx
// 0063e0a1  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
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
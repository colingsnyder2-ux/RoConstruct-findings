// roc 2012-06 00492d80  unit: HelpCommand  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00492d80
//
// 00492d80  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00492d84  33c9                 xor ecx, ecx
// 00492d86  3bc1                 cmp eax, ecx
// 00492d88  7441                 je 0x492dcb
// 00492d8a  83f801               cmp eax, 1
// 00492d8d  743c                 je 0x492dcb
// 00492d8f  83f802               cmp eax, 2
// 00492d92  744d                 je 0x492de1
// 00492d94  83f803               cmp eax, 3
// 00492d97  7521                 jne 0x492dba
// 00492d99  56                   push esi
// 00492d9a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00492d9e  8b0e                 mov ecx, dword ptr [esi]
// 00492da0  687006d700           push 0xd70670
// 00492da5  ff15ec29b200         call dword ptr [0xb229ec]
// 00492dab  0fb6c0               movzx eax, al
// 00492dae  f7d8                 neg eax
// 00492db0  1bc0                 sbb eax, eax
// 00492db2  23442408             and eax, dword ptr [esp + 8]
// 00492db6  8906                 mov dword ptr [esi], eax
// 00492db8  5e                   pop esi
// 00492db9  c3                   ret 
// 00492dba  8b442408             mov eax, dword ptr [esp + 8]
// 00492dbe  c7007006d700         mov dword ptr [eax], 0xd70670
// 00492dc4  884804               mov byte ptr [eax + 4], cl
// 00492dc7  884805               mov byte ptr [eax + 5], cl
// 00492dca  c3                   ret 
// 00492dcb  8b442408             mov eax, dword ptr [esp + 8]
// 00492dcf  3bc1                 cmp eax, ecx
// 00492dd1  740e                 je 0x492de1
// 00492dd3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00492dd7  8b11                 mov edx, dword ptr [ecx]
// 00492dd9  8910                 mov dword ptr [eax], edx
// 00492ddb  8b4904               mov ecx, dword ptr [ecx + 4]
// 00492dde  894804               mov dword ptr [eax + 4], ecx
// 00492de1  c3                   ret 
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
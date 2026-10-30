// roc 2009-06 004e3680  unit: RBX::Network::Replicator  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e3680
//
// 004e3680  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e3684  33c9                 xor ecx, ecx
// 004e3686  3bc1                 cmp eax, ecx
// 004e3688  7441                 je 0x4e36cb
// 004e368a  83f801               cmp eax, 1
// 004e368d  743c                 je 0x4e36cb
// 004e368f  83f802               cmp eax, 2
// 004e3692  744d                 je 0x4e36e1
// 004e3694  83f803               cmp eax, 3
// 004e3697  7521                 jne 0x4e36ba
// 004e3699  56                   push esi
// 004e369a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004e369e  8b0e                 mov ecx, dword ptr [esi]
// 004e36a0  68883e9f00           push 0x9f3e88
// 004e36a5  ff15a4e98900         call dword ptr [0x89e9a4]
// 004e36ab  0fb6c0               movzx eax, al
// 004e36ae  f7d8                 neg eax
// 004e36b0  1bc0                 sbb eax, eax
// 004e36b2  23442408             and eax, dword ptr [esp + 8]
// 004e36b6  8906                 mov dword ptr [esi], eax
// 004e36b8  5e                   pop esi
// 004e36b9  c3                   ret 
// 004e36ba  8b442408             mov eax, dword ptr [esp + 8]
// 004e36be  c700883e9f00         mov dword ptr [eax], 0x9f3e88
// 004e36c4  884804               mov byte ptr [eax + 4], cl
// 004e36c7  884805               mov byte ptr [eax + 5], cl
// 004e36ca  c3                   ret 
// 004e36cb  8b442408             mov eax, dword ptr [esp + 8]
// 004e36cf  3bc1                 cmp eax, ecx
// 004e36d1  740e                 je 0x4e36e1
// 004e36d3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e36d7  8b11                 mov edx, dword ptr [ecx]
// 004e36d9  8910                 mov dword ptr [eax], edx
// 004e36db  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e36de  894804               mov dword ptr [eax + 4], ecx
// 004e36e1  c3                   ret 
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
// roc 2010-06 006c7330  unit: RBX::Network::P8Player::?$GetSetImpl  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c7330
//
// 006c7330  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006c7334  33c9                 xor ecx, ecx
// 006c7336  3bc1                 cmp eax, ecx
// 006c7338  7441                 je 0x6c737b
// 006c733a  83f801               cmp eax, 1
// 006c733d  743c                 je 0x6c737b
// 006c733f  83f802               cmp eax, 2
// 006c7342  744d                 je 0x6c7391
// 006c7344  83f803               cmp eax, 3
// 006c7347  7521                 jne 0x6c736a
// 006c7349  56                   push esi
// 006c734a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c734e  8b0e                 mov ecx, dword ptr [esi]
// 006c7350  683017bd00           push 0xbd1730
// 006c7355  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 006c735b  0fb6c0               movzx eax, al
// 006c735e  f7d8                 neg eax
// 006c7360  1bc0                 sbb eax, eax
// 006c7362  23442408             and eax, dword ptr [esp + 8]
// 006c7366  8906                 mov dword ptr [esi], eax
// 006c7368  5e                   pop esi
// 006c7369  c3                   ret 
// 006c736a  8b442408             mov eax, dword ptr [esp + 8]
// 006c736e  c7003017bd00         mov dword ptr [eax], 0xbd1730
// 006c7374  884804               mov byte ptr [eax + 4], cl
// 006c7377  884805               mov byte ptr [eax + 5], cl
// 006c737a  c3                   ret 
// 006c737b  8b442408             mov eax, dword ptr [esp + 8]
// 006c737f  3bc1                 cmp eax, ecx
// 006c7381  740e                 je 0x6c7391
// 006c7383  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006c7387  8b11                 mov edx, dword ptr [ecx]
// 006c7389  8910                 mov dword ptr [eax], edx
// 006c738b  8b4904               mov ecx, dword ptr [ecx + 4]
// 006c738e  894804               mov dword ptr [eax + 4], ecx
// 006c7391  c3                   ret 
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
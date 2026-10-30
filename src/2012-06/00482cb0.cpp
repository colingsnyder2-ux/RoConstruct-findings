// roc 2012-06 00482cb0  unit: RBX::BoundVerb  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00482cb0
//
// 00482cb0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00482cb4  33c9                 xor ecx, ecx
// 00482cb6  3bc1                 cmp eax, ecx
// 00482cb8  7441                 je 0x482cfb
// 00482cba  83f801               cmp eax, 1
// 00482cbd  743c                 je 0x482cfb
// 00482cbf  83f802               cmp eax, 2
// 00482cc2  744d                 je 0x482d11
// 00482cc4  83f803               cmp eax, 3
// 00482cc7  7521                 jne 0x482cea
// 00482cc9  56                   push esi
// 00482cca  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00482cce  8b0e                 mov ecx, dword ptr [esi]
// 00482cd0  68e0f1d600           push 0xd6f1e0
// 00482cd5  ff15ec29b200         call dword ptr [0xb229ec]
// 00482cdb  0fb6c0               movzx eax, al
// 00482cde  f7d8                 neg eax
// 00482ce0  1bc0                 sbb eax, eax
// 00482ce2  23442408             and eax, dword ptr [esp + 8]
// 00482ce6  8906                 mov dword ptr [esi], eax
// 00482ce8  5e                   pop esi
// 00482ce9  c3                   ret 
// 00482cea  8b442408             mov eax, dword ptr [esp + 8]
// 00482cee  c700e0f1d600         mov dword ptr [eax], 0xd6f1e0
// 00482cf4  884804               mov byte ptr [eax + 4], cl
// 00482cf7  884805               mov byte ptr [eax + 5], cl
// 00482cfa  c3                   ret 
// 00482cfb  8b442408             mov eax, dword ptr [esp + 8]
// 00482cff  3bc1                 cmp eax, ecx
// 00482d01  740e                 je 0x482d11
// 00482d03  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00482d07  8b11                 mov edx, dword ptr [ecx]
// 00482d09  8910                 mov dword ptr [eax], edx
// 00482d0b  8b4904               mov ecx, dword ptr [ecx + 4]
// 00482d0e  894804               mov dword ptr [eax + 4], ecx
// 00482d11  c3                   ret 
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
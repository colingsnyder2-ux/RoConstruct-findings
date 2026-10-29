// roc 2010-06 006f7360  unit: RBX::VFrame::?$FactoryProduct  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f7360
//
// 006f7360  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006f7364  33c9                 xor ecx, ecx
// 006f7366  3bc1                 cmp eax, ecx
// 006f7368  7441                 je 0x6f73ab
// 006f736a  83f801               cmp eax, 1
// 006f736d  743c                 je 0x6f73ab
// 006f736f  83f802               cmp eax, 2
// 006f7372  744d                 je 0x6f73c1
// 006f7374  83f803               cmp eax, 3
// 006f7377  7521                 jne 0x6f739a
// 006f7379  56                   push esi
// 006f737a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f737e  8b0e                 mov ecx, dword ptr [esi]
// 006f7380  68f8d9bd00           push 0xbdd9f8
// 006f7385  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 006f738b  0fb6c0               movzx eax, al
// 006f738e  f7d8                 neg eax
// 006f7390  1bc0                 sbb eax, eax
// 006f7392  23442408             and eax, dword ptr [esp + 8]
// 006f7396  8906                 mov dword ptr [esi], eax
// 006f7398  5e                   pop esi
// 006f7399  c3                   ret 
// 006f739a  8b442408             mov eax, dword ptr [esp + 8]
// 006f739e  c700f8d9bd00         mov dword ptr [eax], 0xbdd9f8
// 006f73a4  884804               mov byte ptr [eax + 4], cl
// 006f73a7  884805               mov byte ptr [eax + 5], cl
// 006f73aa  c3                   ret 
// 006f73ab  8b442408             mov eax, dword ptr [esp + 8]
// 006f73af  3bc1                 cmp eax, ecx
// 006f73b1  740e                 je 0x6f73c1
// 006f73b3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006f73b7  8b11                 mov edx, dword ptr [ecx]
// 006f73b9  8910                 mov dword ptr [eax], edx
// 006f73bb  8b4904               mov ecx, dword ptr [ecx + 4]
// 006f73be  894804               mov dword ptr [eax + 4], ecx
// 006f73c1  c3                   ret 
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
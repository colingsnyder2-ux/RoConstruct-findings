// roc 2010-06 004e6480  unit: RBX::VContentId::?$holder  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e6480
//
// 004e6480  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e6484  33c9                 xor ecx, ecx
// 004e6486  3bc1                 cmp eax, ecx
// 004e6488  7441                 je 0x4e64cb
// 004e648a  83f801               cmp eax, 1
// 004e648d  743c                 je 0x4e64cb
// 004e648f  83f802               cmp eax, 2
// 004e6492  744d                 je 0x4e64e1
// 004e6494  83f803               cmp eax, 3
// 004e6497  7521                 jne 0x4e64ba
// 004e6499  56                   push esi
// 004e649a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004e649e  8b0e                 mov ecx, dword ptr [esi]
// 004e64a0  685828b900           push 0xb92858
// 004e64a5  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 004e64ab  0fb6c0               movzx eax, al
// 004e64ae  f7d8                 neg eax
// 004e64b0  1bc0                 sbb eax, eax
// 004e64b2  23442408             and eax, dword ptr [esp + 8]
// 004e64b6  8906                 mov dword ptr [esi], eax
// 004e64b8  5e                   pop esi
// 004e64b9  c3                   ret 
// 004e64ba  8b442408             mov eax, dword ptr [esp + 8]
// 004e64be  c7005828b900         mov dword ptr [eax], 0xb92858
// 004e64c4  884804               mov byte ptr [eax + 4], cl
// 004e64c7  884805               mov byte ptr [eax + 5], cl
// 004e64ca  c3                   ret 
// 004e64cb  8b442408             mov eax, dword ptr [esp + 8]
// 004e64cf  3bc1                 cmp eax, ecx
// 004e64d1  740e                 je 0x4e64e1
// 004e64d3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e64d7  8b11                 mov edx, dword ptr [ecx]
// 004e64d9  8910                 mov dword ptr [eax], edx
// 004e64db  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e64de  894804               mov dword ptr [eax + 4], ecx
// 004e64e1  c3                   ret 
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
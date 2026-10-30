// roc 2010-06 00434580  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00434580
//
// 00434580  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00434584  33c9                 xor ecx, ecx
// 00434586  3bc1                 cmp eax, ecx
// 00434588  7441                 je 0x4345cb
// 0043458a  83f801               cmp eax, 1
// 0043458d  743c                 je 0x4345cb
// 0043458f  83f802               cmp eax, 2
// 00434592  744d                 je 0x4345e1
// 00434594  83f803               cmp eax, 3
// 00434597  7521                 jne 0x4345ba
// 00434599  56                   push esi
// 0043459a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0043459e  8b0e                 mov ecx, dword ptr [esi]
// 004345a0  68b8e7b700           push 0xb7e7b8
// 004345a5  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 004345ab  0fb6c0               movzx eax, al
// 004345ae  f7d8                 neg eax
// 004345b0  1bc0                 sbb eax, eax
// 004345b2  23442408             and eax, dword ptr [esp + 8]
// 004345b6  8906                 mov dword ptr [esi], eax
// 004345b8  5e                   pop esi
// 004345b9  c3                   ret 
// 004345ba  8b442408             mov eax, dword ptr [esp + 8]
// 004345be  c700b8e7b700         mov dword ptr [eax], 0xb7e7b8
// 004345c4  884804               mov byte ptr [eax + 4], cl
// 004345c7  884805               mov byte ptr [eax + 5], cl
// 004345ca  c3                   ret 
// 004345cb  8b442408             mov eax, dword ptr [esp + 8]
// 004345cf  3bc1                 cmp eax, ecx
// 004345d1  740e                 je 0x4345e1
// 004345d3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004345d7  8b11                 mov edx, dword ptr [ecx]
// 004345d9  8910                 mov dword ptr [eax], edx
// 004345db  8b4904               mov ecx, dword ptr [ecx + 4]
// 004345de  894804               mov dword ptr [eax + 4], ecx
// 004345e1  c3                   ret 
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
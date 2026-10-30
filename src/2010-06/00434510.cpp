// roc 2010-06 00434510  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00434510
//
// 00434510  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00434514  33c9                 xor ecx, ecx
// 00434516  3bc1                 cmp eax, ecx
// 00434518  7441                 je 0x43455b
// 0043451a  83f801               cmp eax, 1
// 0043451d  743c                 je 0x43455b
// 0043451f  83f802               cmp eax, 2
// 00434522  744d                 je 0x434571
// 00434524  83f803               cmp eax, 3
// 00434527  7521                 jne 0x43454a
// 00434529  56                   push esi
// 0043452a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0043452e  8b0e                 mov ecx, dword ptr [esi]
// 00434530  6808e7b700           push 0xb7e708
// 00434535  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0043453b  0fb6c0               movzx eax, al
// 0043453e  f7d8                 neg eax
// 00434540  1bc0                 sbb eax, eax
// 00434542  23442408             and eax, dword ptr [esp + 8]
// 00434546  8906                 mov dword ptr [esi], eax
// 00434548  5e                   pop esi
// 00434549  c3                   ret 
// 0043454a  8b442408             mov eax, dword ptr [esp + 8]
// 0043454e  c70008e7b700         mov dword ptr [eax], 0xb7e708
// 00434554  884804               mov byte ptr [eax + 4], cl
// 00434557  884805               mov byte ptr [eax + 5], cl
// 0043455a  c3                   ret 
// 0043455b  8b442408             mov eax, dword ptr [esp + 8]
// 0043455f  3bc1                 cmp eax, ecx
// 00434561  740e                 je 0x434571
// 00434563  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00434567  8b11                 mov edx, dword ptr [ecx]
// 00434569  8910                 mov dword ptr [eax], edx
// 0043456b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0043456e  894804               mov dword ptr [eax + 4], ecx
// 00434571  c3                   ret 
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
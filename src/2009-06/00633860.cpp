// roc 2009-06 00633860  unit: std::strstream  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00633860
//
// 00633860  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00633864  33c9                 xor ecx, ecx
// 00633866  3bc1                 cmp eax, ecx
// 00633868  7441                 je 0x6338ab
// 0063386a  83f801               cmp eax, 1
// 0063386d  743c                 je 0x6338ab
// 0063386f  83f802               cmp eax, 2
// 00633872  744d                 je 0x6338c1
// 00633874  83f803               cmp eax, 3
// 00633877  7521                 jne 0x63389a
// 00633879  56                   push esi
// 0063387a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0063387e  8b0e                 mov ecx, dword ptr [esi]
// 00633880  6838caa000           push 0xa0ca38
// 00633885  ff15a4e98900         call dword ptr [0x89e9a4]
// 0063388b  0fb6c0               movzx eax, al
// 0063388e  f7d8                 neg eax
// 00633890  1bc0                 sbb eax, eax
// 00633892  23442408             and eax, dword ptr [esp + 8]
// 00633896  8906                 mov dword ptr [esi], eax
// 00633898  5e                   pop esi
// 00633899  c3                   ret 
// 0063389a  8b442408             mov eax, dword ptr [esp + 8]
// 0063389e  c70038caa000         mov dword ptr [eax], 0xa0ca38
// 006338a4  884804               mov byte ptr [eax + 4], cl
// 006338a7  884805               mov byte ptr [eax + 5], cl
// 006338aa  c3                   ret 
// 006338ab  8b442408             mov eax, dword ptr [esp + 8]
// 006338af  3bc1                 cmp eax, ecx
// 006338b1  740e                 je 0x6338c1
// 006338b3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006338b7  8b11                 mov edx, dword ptr [ecx]
// 006338b9  8910                 mov dword ptr [eax], edx
// 006338bb  8b4904               mov ecx, dword ptr [ecx + 4]
// 006338be  894804               mov dword ptr [eax + 4], ecx
// 006338c1  c3                   ret 
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
// roc 2009-06 00633a20  unit: std::strstream  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00633a20
//
// 00633a20  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00633a24  33c9                 xor ecx, ecx
// 00633a26  3bc1                 cmp eax, ecx
// 00633a28  7441                 je 0x633a6b
// 00633a2a  83f801               cmp eax, 1
// 00633a2d  743c                 je 0x633a6b
// 00633a2f  83f802               cmp eax, 2
// 00633a32  7459                 je 0x633a8d
// 00633a34  83f803               cmp eax, 3
// 00633a37  7521                 jne 0x633a5a
// 00633a39  56                   push esi
// 00633a3a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00633a3e  8b0e                 mov ecx, dword ptr [esi]
// 00633a40  6878cda000           push 0xa0cd78
// 00633a45  ff15a4e98900         call dword ptr [0x89e9a4]
// 00633a4b  0fb6c0               movzx eax, al
// 00633a4e  f7d8                 neg eax
// 00633a50  1bc0                 sbb eax, eax
// 00633a52  23442408             and eax, dword ptr [esp + 8]
// 00633a56  8906                 mov dword ptr [esi], eax
// 00633a58  5e                   pop esi
// 00633a59  c3                   ret 
// 00633a5a  8b442408             mov eax, dword ptr [esp + 8]
// 00633a5e  c70078cda000         mov dword ptr [eax], 0xa0cd78
// 00633a64  884804               mov byte ptr [eax + 4], cl
// 00633a67  884805               mov byte ptr [eax + 5], cl
// 00633a6a  c3                   ret 
// 00633a6b  8b442408             mov eax, dword ptr [esp + 8]
// 00633a6f  3bc1                 cmp eax, ecx
// 00633a71  741a                 je 0x633a8d
// 00633a73  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00633a77  8b11                 mov edx, dword ptr [ecx]
// 00633a79  8910                 mov dword ptr [eax], edx
// 00633a7b  8b5104               mov edx, dword ptr [ecx + 4]
// 00633a7e  895004               mov dword ptr [eax + 4], edx
// 00633a81  8b5108               mov edx, dword ptr [ecx + 8]
// 00633a84  895008               mov dword ptr [eax + 8], edx
// 00633a87  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00633a8a  89480c               mov dword ptr [eax + 0xc], ecx
// 00633a8d  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

#include <typeinfo>
#include <new>

// boost::detail::function::functor_manager<F>::manage for a small, trivially copyable functor
// stored in place; 0xb33668 is typeid(F)
extern const type_info type_descriptor_b33668;

struct Functor
{
    int f0, f1, f2, f3;
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
    char data[16];
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
        if (check_type == type_descriptor_b33668)
            out_buffer.obj_ptr = (void *)&in_buffer.data;
        else
            out_buffer.obj_ptr = 0;
    } else {
        out_buffer.type.type = &type_descriptor_b33668;
        out_buffer.type.const_qualified = false;
        out_buffer.type.volatile_qualified = false;
    }
}
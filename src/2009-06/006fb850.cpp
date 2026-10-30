// roc 2009-06 006fb850  unit: RBX::HUMAN::GettingUp  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fb850
//
// 006fb850  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006fb854  33c9                 xor ecx, ecx
// 006fb856  3bc1                 cmp eax, ecx
// 006fb858  7441                 je 0x6fb89b
// 006fb85a  83f801               cmp eax, 1
// 006fb85d  743c                 je 0x6fb89b
// 006fb85f  83f802               cmp eax, 2
// 006fb862  7459                 je 0x6fb8bd
// 006fb864  83f803               cmp eax, 3
// 006fb867  7521                 jne 0x6fb88a
// 006fb869  56                   push esi
// 006fb86a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006fb86e  8b0e                 mov ecx, dword ptr [esi]
// 006fb870  68d842a200           push 0xa242d8
// 006fb875  ff15a4e98900         call dword ptr [0x89e9a4]
// 006fb87b  0fb6c0               movzx eax, al
// 006fb87e  f7d8                 neg eax
// 006fb880  1bc0                 sbb eax, eax
// 006fb882  23442408             and eax, dword ptr [esp + 8]
// 006fb886  8906                 mov dword ptr [esi], eax
// 006fb888  5e                   pop esi
// 006fb889  c3                   ret 
// 006fb88a  8b442408             mov eax, dword ptr [esp + 8]
// 006fb88e  c700d842a200         mov dword ptr [eax], 0xa242d8
// 006fb894  884804               mov byte ptr [eax + 4], cl
// 006fb897  884805               mov byte ptr [eax + 5], cl
// 006fb89a  c3                   ret 
// 006fb89b  8b442408             mov eax, dword ptr [esp + 8]
// 006fb89f  3bc1                 cmp eax, ecx
// 006fb8a1  741a                 je 0x6fb8bd
// 006fb8a3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fb8a7  8b11                 mov edx, dword ptr [ecx]
// 006fb8a9  8910                 mov dword ptr [eax], edx
// 006fb8ab  8b5104               mov edx, dword ptr [ecx + 4]
// 006fb8ae  895004               mov dword ptr [eax + 4], edx
// 006fb8b1  8b5108               mov edx, dword ptr [ecx + 8]
// 006fb8b4  895008               mov dword ptr [eax + 8], edx
// 006fb8b7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 006fb8ba  89480c               mov dword ptr [eax + 0xc], ecx
// 006fb8bd  c3                   ret 
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
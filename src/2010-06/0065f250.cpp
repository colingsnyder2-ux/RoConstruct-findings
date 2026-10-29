// roc 2010-06 0065f250  unit: RBX::Backpack  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0065f250
//
// 0065f250  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0065f254  33c9                 xor ecx, ecx
// 0065f256  3bc1                 cmp eax, ecx
// 0065f258  7441                 je 0x65f29b
// 0065f25a  83f801               cmp eax, 1
// 0065f25d  743c                 je 0x65f29b
// 0065f25f  83f802               cmp eax, 2
// 0065f262  7459                 je 0x65f2bd
// 0065f264  83f803               cmp eax, 3
// 0065f267  7521                 jne 0x65f28a
// 0065f269  56                   push esi
// 0065f26a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065f26e  8b0e                 mov ecx, dword ptr [esi]
// 0065f270  6820b9bb00           push 0xbbb920
// 0065f275  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0065f27b  0fb6c0               movzx eax, al
// 0065f27e  f7d8                 neg eax
// 0065f280  1bc0                 sbb eax, eax
// 0065f282  23442408             and eax, dword ptr [esp + 8]
// 0065f286  8906                 mov dword ptr [esi], eax
// 0065f288  5e                   pop esi
// 0065f289  c3                   ret 
// 0065f28a  8b442408             mov eax, dword ptr [esp + 8]
// 0065f28e  c70020b9bb00         mov dword ptr [eax], 0xbbb920
// 0065f294  884804               mov byte ptr [eax + 4], cl
// 0065f297  884805               mov byte ptr [eax + 5], cl
// 0065f29a  c3                   ret 
// 0065f29b  8b442408             mov eax, dword ptr [esp + 8]
// 0065f29f  3bc1                 cmp eax, ecx
// 0065f2a1  741a                 je 0x65f2bd
// 0065f2a3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0065f2a7  8b11                 mov edx, dword ptr [ecx]
// 0065f2a9  8910                 mov dword ptr [eax], edx
// 0065f2ab  8b5104               mov edx, dword ptr [ecx + 4]
// 0065f2ae  895004               mov dword ptr [eax + 4], edx
// 0065f2b1  8b5108               mov edx, dword ptr [ecx + 8]
// 0065f2b4  895008               mov dword ptr [eax + 8], edx
// 0065f2b7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0065f2ba  89480c               mov dword ptr [eax + 0xc], ecx
// 0065f2bd  c3                   ret 
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
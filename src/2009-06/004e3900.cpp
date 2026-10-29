// roc 2009-06 004e3900  unit: RBX::Network::Replicator  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e3900
//
// 004e3900  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e3904  33c9                 xor ecx, ecx
// 004e3906  3bc1                 cmp eax, ecx
// 004e3908  7441                 je 0x4e394b
// 004e390a  83f801               cmp eax, 1
// 004e390d  743c                 je 0x4e394b
// 004e390f  83f802               cmp eax, 2
// 004e3912  7459                 je 0x4e396d
// 004e3914  83f803               cmp eax, 3
// 004e3917  7521                 jne 0x4e393a
// 004e3919  56                   push esi
// 004e391a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004e391e  8b0e                 mov ecx, dword ptr [esi]
// 004e3920  6828449f00           push 0x9f4428
// 004e3925  ff15a4e98900         call dword ptr [0x89e9a4]
// 004e392b  0fb6c0               movzx eax, al
// 004e392e  f7d8                 neg eax
// 004e3930  1bc0                 sbb eax, eax
// 004e3932  23442408             and eax, dword ptr [esp + 8]
// 004e3936  8906                 mov dword ptr [esi], eax
// 004e3938  5e                   pop esi
// 004e3939  c3                   ret 
// 004e393a  8b442408             mov eax, dword ptr [esp + 8]
// 004e393e  c70028449f00         mov dword ptr [eax], 0x9f4428
// 004e3944  884804               mov byte ptr [eax + 4], cl
// 004e3947  884805               mov byte ptr [eax + 5], cl
// 004e394a  c3                   ret 
// 004e394b  8b442408             mov eax, dword ptr [esp + 8]
// 004e394f  3bc1                 cmp eax, ecx
// 004e3951  741a                 je 0x4e396d
// 004e3953  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e3957  8b11                 mov edx, dword ptr [ecx]
// 004e3959  8910                 mov dword ptr [eax], edx
// 004e395b  8b5104               mov edx, dword ptr [ecx + 4]
// 004e395e  895004               mov dword ptr [eax + 4], edx
// 004e3961  8b5108               mov edx, dword ptr [ecx + 8]
// 004e3964  895008               mov dword ptr [eax + 8], edx
// 004e3967  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 004e396a  89480c               mov dword ptr [eax + 0xc], ecx
// 004e396d  c3                   ret 
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
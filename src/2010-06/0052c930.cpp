// roc 2010-06 0052c930  unit: RBX::MeshRefPartAdapter  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052c930
//
// 0052c930  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0052c934  33c9                 xor ecx, ecx
// 0052c936  3bc1                 cmp eax, ecx
// 0052c938  7441                 je 0x52c97b
// 0052c93a  83f801               cmp eax, 1
// 0052c93d  743c                 je 0x52c97b
// 0052c93f  83f802               cmp eax, 2
// 0052c942  7459                 je 0x52c99d
// 0052c944  83f803               cmp eax, 3
// 0052c947  7521                 jne 0x52c96a
// 0052c949  56                   push esi
// 0052c94a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0052c94e  8b0e                 mov ecx, dword ptr [esi]
// 0052c950  68b89eb900           push 0xb99eb8
// 0052c955  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0052c95b  0fb6c0               movzx eax, al
// 0052c95e  f7d8                 neg eax
// 0052c960  1bc0                 sbb eax, eax
// 0052c962  23442408             and eax, dword ptr [esp + 8]
// 0052c966  8906                 mov dword ptr [esi], eax
// 0052c968  5e                   pop esi
// 0052c969  c3                   ret 
// 0052c96a  8b442408             mov eax, dword ptr [esp + 8]
// 0052c96e  c700b89eb900         mov dword ptr [eax], 0xb99eb8
// 0052c974  884804               mov byte ptr [eax + 4], cl
// 0052c977  884805               mov byte ptr [eax + 5], cl
// 0052c97a  c3                   ret 
// 0052c97b  8b442408             mov eax, dword ptr [esp + 8]
// 0052c97f  3bc1                 cmp eax, ecx
// 0052c981  741a                 je 0x52c99d
// 0052c983  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0052c987  8b11                 mov edx, dword ptr [ecx]
// 0052c989  8910                 mov dword ptr [eax], edx
// 0052c98b  8b5104               mov edx, dword ptr [ecx + 4]
// 0052c98e  895004               mov dword ptr [eax + 4], edx
// 0052c991  8b5108               mov edx, dword ptr [ecx + 8]
// 0052c994  895008               mov dword ptr [eax + 8], edx
// 0052c997  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0052c99a  89480c               mov dword ptr [eax + 0xc], ecx
// 0052c99d  c3                   ret 
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
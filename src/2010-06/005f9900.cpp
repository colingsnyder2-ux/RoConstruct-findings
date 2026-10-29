// roc 2010-06 005f9900  unit: RBX::Tool  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f9900
//
// 005f9900  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005f9904  33c9                 xor ecx, ecx
// 005f9906  3bc1                 cmp eax, ecx
// 005f9908  7441                 je 0x5f994b
// 005f990a  83f801               cmp eax, 1
// 005f990d  743c                 je 0x5f994b
// 005f990f  83f802               cmp eax, 2
// 005f9912  7459                 je 0x5f996d
// 005f9914  83f803               cmp eax, 3
// 005f9917  7521                 jne 0x5f993a
// 005f9919  56                   push esi
// 005f991a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005f991e  8b0e                 mov ecx, dword ptr [esi]
// 005f9920  68f8d1ba00           push 0xbad1f8
// 005f9925  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 005f992b  0fb6c0               movzx eax, al
// 005f992e  f7d8                 neg eax
// 005f9930  1bc0                 sbb eax, eax
// 005f9932  23442408             and eax, dword ptr [esp + 8]
// 005f9936  8906                 mov dword ptr [esi], eax
// 005f9938  5e                   pop esi
// 005f9939  c3                   ret 
// 005f993a  8b442408             mov eax, dword ptr [esp + 8]
// 005f993e  c700f8d1ba00         mov dword ptr [eax], 0xbad1f8
// 005f9944  884804               mov byte ptr [eax + 4], cl
// 005f9947  884805               mov byte ptr [eax + 5], cl
// 005f994a  c3                   ret 
// 005f994b  8b442408             mov eax, dword ptr [esp + 8]
// 005f994f  3bc1                 cmp eax, ecx
// 005f9951  741a                 je 0x5f996d
// 005f9953  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f9957  8b11                 mov edx, dword ptr [ecx]
// 005f9959  8910                 mov dword ptr [eax], edx
// 005f995b  8b5104               mov edx, dword ptr [ecx + 4]
// 005f995e  895004               mov dword ptr [eax + 4], edx
// 005f9961  8b5108               mov edx, dword ptr [ecx + 8]
// 005f9964  895008               mov dword ptr [eax + 8], edx
// 005f9967  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 005f996a  89480c               mov dword ptr [eax + 0xc], ecx
// 005f996d  c3                   ret 
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
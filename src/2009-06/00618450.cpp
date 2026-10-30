// roc 2009-06 00618450  unit: RBX::Script  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00618450
//
// 00618450  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00618454  33c9                 xor ecx, ecx
// 00618456  3bc1                 cmp eax, ecx
// 00618458  7441                 je 0x61849b
// 0061845a  83f801               cmp eax, 1
// 0061845d  743c                 je 0x61849b
// 0061845f  83f802               cmp eax, 2
// 00618462  7459                 je 0x6184bd
// 00618464  83f803               cmp eax, 3
// 00618467  7521                 jne 0x61848a
// 00618469  56                   push esi
// 0061846a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0061846e  8b0e                 mov ecx, dword ptr [esi]
// 00618470  68789aa000           push 0xa09a78
// 00618475  ff15a4e98900         call dword ptr [0x89e9a4]
// 0061847b  0fb6c0               movzx eax, al
// 0061847e  f7d8                 neg eax
// 00618480  1bc0                 sbb eax, eax
// 00618482  23442408             and eax, dword ptr [esp + 8]
// 00618486  8906                 mov dword ptr [esi], eax
// 00618488  5e                   pop esi
// 00618489  c3                   ret 
// 0061848a  8b442408             mov eax, dword ptr [esp + 8]
// 0061848e  c700789aa000         mov dword ptr [eax], 0xa09a78
// 00618494  884804               mov byte ptr [eax + 4], cl
// 00618497  884805               mov byte ptr [eax + 5], cl
// 0061849a  c3                   ret 
// 0061849b  8b442408             mov eax, dword ptr [esp + 8]
// 0061849f  3bc1                 cmp eax, ecx
// 006184a1  741a                 je 0x6184bd
// 006184a3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006184a7  8b11                 mov edx, dword ptr [ecx]
// 006184a9  8910                 mov dword ptr [eax], edx
// 006184ab  8b5104               mov edx, dword ptr [ecx + 4]
// 006184ae  895004               mov dword ptr [eax + 4], edx
// 006184b1  8b5108               mov edx, dword ptr [ecx + 8]
// 006184b4  895008               mov dword ptr [eax + 8], edx
// 006184b7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 006184ba  89480c               mov dword ptr [eax + 0xc], ecx
// 006184bd  c3                   ret 
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
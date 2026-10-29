// roc 2009-06 00698470  unit: RBX::DebrisService  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00698470
//
// 00698470  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00698474  33c9                 xor ecx, ecx
// 00698476  3bc1                 cmp eax, ecx
// 00698478  7441                 je 0x6984bb
// 0069847a  83f801               cmp eax, 1
// 0069847d  743c                 je 0x6984bb
// 0069847f  83f802               cmp eax, 2
// 00698482  7459                 je 0x6984dd
// 00698484  83f803               cmp eax, 3
// 00698487  7521                 jne 0x6984aa
// 00698489  56                   push esi
// 0069848a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0069848e  8b0e                 mov ecx, dword ptr [esi]
// 00698490  68b0eea100           push 0xa1eeb0
// 00698495  ff15a4e98900         call dword ptr [0x89e9a4]
// 0069849b  0fb6c0               movzx eax, al
// 0069849e  f7d8                 neg eax
// 006984a0  1bc0                 sbb eax, eax
// 006984a2  23442408             and eax, dword ptr [esp + 8]
// 006984a6  8906                 mov dword ptr [esi], eax
// 006984a8  5e                   pop esi
// 006984a9  c3                   ret 
// 006984aa  8b442408             mov eax, dword ptr [esp + 8]
// 006984ae  c700b0eea100         mov dword ptr [eax], 0xa1eeb0
// 006984b4  884804               mov byte ptr [eax + 4], cl
// 006984b7  884805               mov byte ptr [eax + 5], cl
// 006984ba  c3                   ret 
// 006984bb  8b442408             mov eax, dword ptr [esp + 8]
// 006984bf  3bc1                 cmp eax, ecx
// 006984c1  741a                 je 0x6984dd
// 006984c3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006984c7  8b11                 mov edx, dword ptr [ecx]
// 006984c9  8910                 mov dword ptr [eax], edx
// 006984cb  8b5104               mov edx, dword ptr [ecx + 4]
// 006984ce  895004               mov dword ptr [eax + 4], edx
// 006984d1  8b5108               mov edx, dword ptr [ecx + 8]
// 006984d4  895008               mov dword ptr [eax + 8], edx
// 006984d7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 006984da  89480c               mov dword ptr [eax + 0xc], ecx
// 006984dd  c3                   ret 
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
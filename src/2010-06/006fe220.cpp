// roc 2010-06 006fe220  unit: RBX::VAnimationTrack::?$EventDesc  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006fe220
//
// 006fe220  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006fe224  33c9                 xor ecx, ecx
// 006fe226  3bc1                 cmp eax, ecx
// 006fe228  7441                 je 0x6fe26b
// 006fe22a  83f801               cmp eax, 1
// 006fe22d  743c                 je 0x6fe26b
// 006fe22f  83f802               cmp eax, 2
// 006fe232  7459                 je 0x6fe28d
// 006fe234  83f803               cmp eax, 3
// 006fe237  7521                 jne 0x6fe25a
// 006fe239  56                   push esi
// 006fe23a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006fe23e  8b0e                 mov ecx, dword ptr [esi]
// 006fe240  68b0febd00           push 0xbdfeb0
// 006fe245  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 006fe24b  0fb6c0               movzx eax, al
// 006fe24e  f7d8                 neg eax
// 006fe250  1bc0                 sbb eax, eax
// 006fe252  23442408             and eax, dword ptr [esp + 8]
// 006fe256  8906                 mov dword ptr [esi], eax
// 006fe258  5e                   pop esi
// 006fe259  c3                   ret 
// 006fe25a  8b442408             mov eax, dword ptr [esp + 8]
// 006fe25e  c700b0febd00         mov dword ptr [eax], 0xbdfeb0
// 006fe264  884804               mov byte ptr [eax + 4], cl
// 006fe267  884805               mov byte ptr [eax + 5], cl
// 006fe26a  c3                   ret 
// 006fe26b  8b442408             mov eax, dword ptr [esp + 8]
// 006fe26f  3bc1                 cmp eax, ecx
// 006fe271  741a                 je 0x6fe28d
// 006fe273  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fe277  8b11                 mov edx, dword ptr [ecx]
// 006fe279  8910                 mov dword ptr [eax], edx
// 006fe27b  8b5104               mov edx, dword ptr [ecx + 4]
// 006fe27e  895004               mov dword ptr [eax + 4], edx
// 006fe281  8b5108               mov edx, dword ptr [ecx + 8]
// 006fe284  895008               mov dword ptr [eax + 8], edx
// 006fe287  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 006fe28a  89480c               mov dword ptr [eax + 0xc], ecx
// 006fe28d  c3                   ret 
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
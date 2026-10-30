// roc 2010-06 006fe140  unit: RBX::VAnimationTrack::?$EventDesc  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006fe140
//
// 006fe140  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006fe144  33c9                 xor ecx, ecx
// 006fe146  3bc1                 cmp eax, ecx
// 006fe148  7441                 je 0x6fe18b
// 006fe14a  83f801               cmp eax, 1
// 006fe14d  743c                 je 0x6fe18b
// 006fe14f  83f802               cmp eax, 2
// 006fe152  7459                 je 0x6fe1ad
// 006fe154  83f803               cmp eax, 3
// 006fe157  7521                 jne 0x6fe17a
// 006fe159  56                   push esi
// 006fe15a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006fe15e  8b0e                 mov ecx, dword ptr [esi]
// 006fe160  6830fdbd00           push 0xbdfd30
// 006fe165  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 006fe16b  0fb6c0               movzx eax, al
// 006fe16e  f7d8                 neg eax
// 006fe170  1bc0                 sbb eax, eax
// 006fe172  23442408             and eax, dword ptr [esp + 8]
// 006fe176  8906                 mov dword ptr [esi], eax
// 006fe178  5e                   pop esi
// 006fe179  c3                   ret 
// 006fe17a  8b442408             mov eax, dword ptr [esp + 8]
// 006fe17e  c70030fdbd00         mov dword ptr [eax], 0xbdfd30
// 006fe184  884804               mov byte ptr [eax + 4], cl
// 006fe187  884805               mov byte ptr [eax + 5], cl
// 006fe18a  c3                   ret 
// 006fe18b  8b442408             mov eax, dword ptr [esp + 8]
// 006fe18f  3bc1                 cmp eax, ecx
// 006fe191  741a                 je 0x6fe1ad
// 006fe193  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fe197  8b11                 mov edx, dword ptr [ecx]
// 006fe199  8910                 mov dword ptr [eax], edx
// 006fe19b  8b5104               mov edx, dword ptr [ecx + 4]
// 006fe19e  895004               mov dword ptr [eax + 4], edx
// 006fe1a1  8b5108               mov edx, dword ptr [ecx + 8]
// 006fe1a4  895008               mov dword ptr [eax + 8], edx
// 006fe1a7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 006fe1aa  89480c               mov dword ptr [eax + 0xc], ecx
// 006fe1ad  c3                   ret 
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
// roc 2010-06 0067ade0  unit: RBX::VPseudoPlayer::?$BoundFuncDesc  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0067ade0
//
// 0067ade0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0067ade4  33c9                 xor ecx, ecx
// 0067ade6  3bc1                 cmp eax, ecx
// 0067ade8  7441                 je 0x67ae2b
// 0067adea  83f801               cmp eax, 1
// 0067aded  743c                 je 0x67ae2b
// 0067adef  83f802               cmp eax, 2
// 0067adf2  7459                 je 0x67ae4d
// 0067adf4  83f803               cmp eax, 3
// 0067adf7  7521                 jne 0x67ae1a
// 0067adf9  56                   push esi
// 0067adfa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0067adfe  8b0e                 mov ecx, dword ptr [esi]
// 0067ae00  688813bc00           push 0xbc1388
// 0067ae05  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0067ae0b  0fb6c0               movzx eax, al
// 0067ae0e  f7d8                 neg eax
// 0067ae10  1bc0                 sbb eax, eax
// 0067ae12  23442408             and eax, dword ptr [esp + 8]
// 0067ae16  8906                 mov dword ptr [esi], eax
// 0067ae18  5e                   pop esi
// 0067ae19  c3                   ret 
// 0067ae1a  8b442408             mov eax, dword ptr [esp + 8]
// 0067ae1e  c7008813bc00         mov dword ptr [eax], 0xbc1388
// 0067ae24  884804               mov byte ptr [eax + 4], cl
// 0067ae27  884805               mov byte ptr [eax + 5], cl
// 0067ae2a  c3                   ret 
// 0067ae2b  8b442408             mov eax, dword ptr [esp + 8]
// 0067ae2f  3bc1                 cmp eax, ecx
// 0067ae31  741a                 je 0x67ae4d
// 0067ae33  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0067ae37  8b11                 mov edx, dword ptr [ecx]
// 0067ae39  8910                 mov dword ptr [eax], edx
// 0067ae3b  8b5104               mov edx, dword ptr [ecx + 4]
// 0067ae3e  895004               mov dword ptr [eax + 4], edx
// 0067ae41  8b5108               mov edx, dword ptr [ecx + 8]
// 0067ae44  895008               mov dword ptr [eax + 8], edx
// 0067ae47  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0067ae4a  89480c               mov dword ptr [eax + 0xc], ecx
// 0067ae4d  c3                   ret 
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
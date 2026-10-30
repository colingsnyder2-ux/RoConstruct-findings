// roc 2010-06 00906640  unit: RBX::RbxParticleEmitter  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00906640
//
// 00906640  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00906644  33c9                 xor ecx, ecx
// 00906646  3bc1                 cmp eax, ecx
// 00906648  7441                 je 0x90668b
// 0090664a  83f801               cmp eax, 1
// 0090664d  743c                 je 0x90668b
// 0090664f  83f802               cmp eax, 2
// 00906652  7459                 je 0x9066ad
// 00906654  83f803               cmp eax, 3
// 00906657  7521                 jne 0x90667a
// 00906659  56                   push esi
// 0090665a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0090665e  8b0e                 mov ecx, dword ptr [esi]
// 00906660  6850e5bf00           push 0xbfe550
// 00906665  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0090666b  0fb6c0               movzx eax, al
// 0090666e  f7d8                 neg eax
// 00906670  1bc0                 sbb eax, eax
// 00906672  23442408             and eax, dword ptr [esp + 8]
// 00906676  8906                 mov dword ptr [esi], eax
// 00906678  5e                   pop esi
// 00906679  c3                   ret 
// 0090667a  8b442408             mov eax, dword ptr [esp + 8]
// 0090667e  c70050e5bf00         mov dword ptr [eax], 0xbfe550
// 00906684  884804               mov byte ptr [eax + 4], cl
// 00906687  884805               mov byte ptr [eax + 5], cl
// 0090668a  c3                   ret 
// 0090668b  8b442408             mov eax, dword ptr [esp + 8]
// 0090668f  3bc1                 cmp eax, ecx
// 00906691  741a                 je 0x9066ad
// 00906693  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00906697  8b11                 mov edx, dword ptr [ecx]
// 00906699  8910                 mov dword ptr [eax], edx
// 0090669b  8b5104               mov edx, dword ptr [ecx + 4]
// 0090669e  895004               mov dword ptr [eax + 4], edx
// 009066a1  8b5108               mov edx, dword ptr [ecx + 8]
// 009066a4  895008               mov dword ptr [eax + 8], edx
// 009066a7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 009066aa  89480c               mov dword ptr [eax + 0xc], ecx
// 009066ad  c3                   ret 
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
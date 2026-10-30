// roc 2010-06 0067ac90  unit: RBX::VPseudoPlayer::?$BoundFuncDesc  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0067ac90
//
// 0067ac90  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0067ac94  33c9                 xor ecx, ecx
// 0067ac96  3bc1                 cmp eax, ecx
// 0067ac98  7441                 je 0x67acdb
// 0067ac9a  83f801               cmp eax, 1
// 0067ac9d  743c                 je 0x67acdb
// 0067ac9f  83f802               cmp eax, 2
// 0067aca2  7459                 je 0x67acfd
// 0067aca4  83f803               cmp eax, 3
// 0067aca7  7521                 jne 0x67acca
// 0067aca9  56                   push esi
// 0067acaa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0067acae  8b0e                 mov ecx, dword ptr [esi]
// 0067acb0  68a010bc00           push 0xbc10a0
// 0067acb5  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0067acbb  0fb6c0               movzx eax, al
// 0067acbe  f7d8                 neg eax
// 0067acc0  1bc0                 sbb eax, eax
// 0067acc2  23442408             and eax, dword ptr [esp + 8]
// 0067acc6  8906                 mov dword ptr [esi], eax
// 0067acc8  5e                   pop esi
// 0067acc9  c3                   ret 
// 0067acca  8b442408             mov eax, dword ptr [esp + 8]
// 0067acce  c700a010bc00         mov dword ptr [eax], 0xbc10a0
// 0067acd4  884804               mov byte ptr [eax + 4], cl
// 0067acd7  884805               mov byte ptr [eax + 5], cl
// 0067acda  c3                   ret 
// 0067acdb  8b442408             mov eax, dword ptr [esp + 8]
// 0067acdf  3bc1                 cmp eax, ecx
// 0067ace1  741a                 je 0x67acfd
// 0067ace3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0067ace7  8b11                 mov edx, dword ptr [ecx]
// 0067ace9  8910                 mov dword ptr [eax], edx
// 0067aceb  8b5104               mov edx, dword ptr [ecx + 4]
// 0067acee  895004               mov dword ptr [eax + 4], edx
// 0067acf1  8b5108               mov edx, dword ptr [ecx + 8]
// 0067acf4  895008               mov dword ptr [eax + 8], edx
// 0067acf7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0067acfa  89480c               mov dword ptr [eax + 0xc], ecx
// 0067acfd  c3                   ret 
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
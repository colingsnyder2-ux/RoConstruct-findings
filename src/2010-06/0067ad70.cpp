// roc 2010-06 0067ad70  unit: RBX::VPseudoPlayer::?$BoundFuncDesc  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0067ad70
//
// 0067ad70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0067ad74  33c9                 xor ecx, ecx
// 0067ad76  3bc1                 cmp eax, ecx
// 0067ad78  7441                 je 0x67adbb
// 0067ad7a  83f801               cmp eax, 1
// 0067ad7d  743c                 je 0x67adbb
// 0067ad7f  83f802               cmp eax, 2
// 0067ad82  7459                 je 0x67addd
// 0067ad84  83f803               cmp eax, 3
// 0067ad87  7521                 jne 0x67adaa
// 0067ad89  56                   push esi
// 0067ad8a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0067ad8e  8b0e                 mov ecx, dword ptr [esi]
// 0067ad90  688012bc00           push 0xbc1280
// 0067ad95  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0067ad9b  0fb6c0               movzx eax, al
// 0067ad9e  f7d8                 neg eax
// 0067ada0  1bc0                 sbb eax, eax
// 0067ada2  23442408             and eax, dword ptr [esp + 8]
// 0067ada6  8906                 mov dword ptr [esi], eax
// 0067ada8  5e                   pop esi
// 0067ada9  c3                   ret 
// 0067adaa  8b442408             mov eax, dword ptr [esp + 8]
// 0067adae  c7008012bc00         mov dword ptr [eax], 0xbc1280
// 0067adb4  884804               mov byte ptr [eax + 4], cl
// 0067adb7  884805               mov byte ptr [eax + 5], cl
// 0067adba  c3                   ret 
// 0067adbb  8b442408             mov eax, dword ptr [esp + 8]
// 0067adbf  3bc1                 cmp eax, ecx
// 0067adc1  741a                 je 0x67addd
// 0067adc3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0067adc7  8b11                 mov edx, dword ptr [ecx]
// 0067adc9  8910                 mov dword ptr [eax], edx
// 0067adcb  8b5104               mov edx, dword ptr [ecx + 4]
// 0067adce  895004               mov dword ptr [eax + 4], edx
// 0067add1  8b5108               mov edx, dword ptr [ecx + 8]
// 0067add4  895008               mov dword ptr [eax + 8], edx
// 0067add7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0067adda  89480c               mov dword ptr [eax + 0xc], ecx
// 0067addd  c3                   ret 
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
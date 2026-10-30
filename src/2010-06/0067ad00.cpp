// roc 2010-06 0067ad00  unit: RBX::VPseudoPlayer::?$BoundFuncDesc  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0067ad00
//
// 0067ad00  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0067ad04  33c9                 xor ecx, ecx
// 0067ad06  3bc1                 cmp eax, ecx
// 0067ad08  7441                 je 0x67ad4b
// 0067ad0a  83f801               cmp eax, 1
// 0067ad0d  743c                 je 0x67ad4b
// 0067ad0f  83f802               cmp eax, 2
// 0067ad12  7459                 je 0x67ad6d
// 0067ad14  83f803               cmp eax, 3
// 0067ad17  7521                 jne 0x67ad3a
// 0067ad19  56                   push esi
// 0067ad1a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0067ad1e  8b0e                 mov ecx, dword ptr [esi]
// 0067ad20  689011bc00           push 0xbc1190
// 0067ad25  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0067ad2b  0fb6c0               movzx eax, al
// 0067ad2e  f7d8                 neg eax
// 0067ad30  1bc0                 sbb eax, eax
// 0067ad32  23442408             and eax, dword ptr [esp + 8]
// 0067ad36  8906                 mov dword ptr [esi], eax
// 0067ad38  5e                   pop esi
// 0067ad39  c3                   ret 
// 0067ad3a  8b442408             mov eax, dword ptr [esp + 8]
// 0067ad3e  c7009011bc00         mov dword ptr [eax], 0xbc1190
// 0067ad44  884804               mov byte ptr [eax + 4], cl
// 0067ad47  884805               mov byte ptr [eax + 5], cl
// 0067ad4a  c3                   ret 
// 0067ad4b  8b442408             mov eax, dword ptr [esp + 8]
// 0067ad4f  3bc1                 cmp eax, ecx
// 0067ad51  741a                 je 0x67ad6d
// 0067ad53  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0067ad57  8b11                 mov edx, dword ptr [ecx]
// 0067ad59  8910                 mov dword ptr [eax], edx
// 0067ad5b  8b5104               mov edx, dword ptr [ecx + 4]
// 0067ad5e  895004               mov dword ptr [eax + 4], edx
// 0067ad61  8b5108               mov edx, dword ptr [ecx + 8]
// 0067ad64  895008               mov dword ptr [eax + 8], edx
// 0067ad67  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0067ad6a  89480c               mov dword ptr [eax + 0xc], ecx
// 0067ad6d  c3                   ret 
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
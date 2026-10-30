// roc 2010-06 005bddc0  unit: RBX::VBasicPartInstance::?$ActionStation  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005bddc0
//
// 005bddc0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005bddc4  33c9                 xor ecx, ecx
// 005bddc6  3bc1                 cmp eax, ecx
// 005bddc8  7441                 je 0x5bde0b
// 005bddca  83f801               cmp eax, 1
// 005bddcd  743c                 je 0x5bde0b
// 005bddcf  83f802               cmp eax, 2
// 005bddd2  7465                 je 0x5bde39
// 005bddd4  83f803               cmp eax, 3
// 005bddd7  7521                 jne 0x5bddfa
// 005bddd9  56                   push esi
// 005bddda  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005bddde  8b0e                 mov ecx, dword ptr [esi]
// 005bdde0  683843ba00           push 0xba4338
// 005bdde5  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 005bddeb  0fb6c0               movzx eax, al
// 005bddee  f7d8                 neg eax
// 005bddf0  1bc0                 sbb eax, eax
// 005bddf2  23442408             and eax, dword ptr [esp + 8]
// 005bddf6  8906                 mov dword ptr [esi], eax
// 005bddf8  5e                   pop esi
// 005bddf9  c3                   ret 
// 005bddfa  8b442408             mov eax, dword ptr [esp + 8]
// 005bddfe  c7003843ba00         mov dword ptr [eax], 0xba4338
// 005bde04  884804               mov byte ptr [eax + 4], cl
// 005bde07  884805               mov byte ptr [eax + 5], cl
// 005bde0a  c3                   ret 
// 005bde0b  8b442408             mov eax, dword ptr [esp + 8]
// 005bde0f  3bc1                 cmp eax, ecx
// 005bde11  7426                 je 0x5bde39
// 005bde13  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005bde17  8b11                 mov edx, dword ptr [ecx]
// 005bde19  8910                 mov dword ptr [eax], edx
// 005bde1b  8b5104               mov edx, dword ptr [ecx + 4]
// 005bde1e  895004               mov dword ptr [eax + 4], edx
// 005bde21  8b5108               mov edx, dword ptr [ecx + 8]
// 005bde24  895008               mov dword ptr [eax + 8], edx
// 005bde27  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005bde2a  89500c               mov dword ptr [eax + 0xc], edx
// 005bde2d  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005bde30  895010               mov dword ptr [eax + 0x10], edx
// 005bde33  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 005bde36  894814               mov dword ptr [eax + 0x14], ecx
// 005bde39  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

#include <typeinfo>
#include <new>

// boost::detail::function::functor_manager<F>::manage for a small, trivially copyable functor
// stored in place; 0xb2f1b0 is typeid(F)
extern const type_info type_descriptor_b2f1b0;

struct Functor
{
    int f0, f1, f2, f3, f4, f5;
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
    char data[24];
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
        if (check_type == type_descriptor_b2f1b0)
            out_buffer.obj_ptr = (void *)&in_buffer.data;
        else
            out_buffer.obj_ptr = 0;
    } else {
        out_buffer.type.type = &type_descriptor_b2f1b0;
        out_buffer.type.const_qualified = false;
        out_buffer.type.volatile_qualified = false;
    }
}
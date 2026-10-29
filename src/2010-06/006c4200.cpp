// roc 2010-06 006c4200  unit: RBX::Flag  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c4200
//
// 006c4200  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006c4204  33c9                 xor ecx, ecx
// 006c4206  3bc1                 cmp eax, ecx
// 006c4208  7441                 je 0x6c424b
// 006c420a  83f801               cmp eax, 1
// 006c420d  743c                 je 0x6c424b
// 006c420f  83f802               cmp eax, 2
// 006c4212  7459                 je 0x6c426d
// 006c4214  83f803               cmp eax, 3
// 006c4217  7521                 jne 0x6c423a
// 006c4219  56                   push esi
// 006c421a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c421e  8b0e                 mov ecx, dword ptr [esi]
// 006c4220  681805bd00           push 0xbd0518
// 006c4225  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 006c422b  0fb6c0               movzx eax, al
// 006c422e  f7d8                 neg eax
// 006c4230  1bc0                 sbb eax, eax
// 006c4232  23442408             and eax, dword ptr [esp + 8]
// 006c4236  8906                 mov dword ptr [esi], eax
// 006c4238  5e                   pop esi
// 006c4239  c3                   ret 
// 006c423a  8b442408             mov eax, dword ptr [esp + 8]
// 006c423e  c7001805bd00         mov dword ptr [eax], 0xbd0518
// 006c4244  884804               mov byte ptr [eax + 4], cl
// 006c4247  884805               mov byte ptr [eax + 5], cl
// 006c424a  c3                   ret 
// 006c424b  8b442408             mov eax, dword ptr [esp + 8]
// 006c424f  3bc1                 cmp eax, ecx
// 006c4251  741a                 je 0x6c426d
// 006c4253  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006c4257  8b11                 mov edx, dword ptr [ecx]
// 006c4259  8910                 mov dword ptr [eax], edx
// 006c425b  8b5104               mov edx, dword ptr [ecx + 4]
// 006c425e  895004               mov dword ptr [eax + 4], edx
// 006c4261  8b5108               mov edx, dword ptr [ecx + 8]
// 006c4264  895008               mov dword ptr [eax + 8], edx
// 006c4267  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 006c426a  89480c               mov dword ptr [eax + 0xc], ecx
// 006c426d  c3                   ret 
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
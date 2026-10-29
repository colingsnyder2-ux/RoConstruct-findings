// roc 2009-06 0069b950  unit: RBX::Flag  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0069b950
//
// 0069b950  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0069b954  33c9                 xor ecx, ecx
// 0069b956  3bc1                 cmp eax, ecx
// 0069b958  7441                 je 0x69b99b
// 0069b95a  83f801               cmp eax, 1
// 0069b95d  743c                 je 0x69b99b
// 0069b95f  83f802               cmp eax, 2
// 0069b962  7465                 je 0x69b9c9
// 0069b964  83f803               cmp eax, 3
// 0069b967  7521                 jne 0x69b98a
// 0069b969  56                   push esi
// 0069b96a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0069b96e  8b0e                 mov ecx, dword ptr [esi]
// 0069b970  68a8fea100           push 0xa1fea8
// 0069b975  ff15a4e98900         call dword ptr [0x89e9a4]
// 0069b97b  0fb6c0               movzx eax, al
// 0069b97e  f7d8                 neg eax
// 0069b980  1bc0                 sbb eax, eax
// 0069b982  23442408             and eax, dword ptr [esp + 8]
// 0069b986  8906                 mov dword ptr [esi], eax
// 0069b988  5e                   pop esi
// 0069b989  c3                   ret 
// 0069b98a  8b442408             mov eax, dword ptr [esp + 8]
// 0069b98e  c700a8fea100         mov dword ptr [eax], 0xa1fea8
// 0069b994  884804               mov byte ptr [eax + 4], cl
// 0069b997  884805               mov byte ptr [eax + 5], cl
// 0069b99a  c3                   ret 
// 0069b99b  8b442408             mov eax, dword ptr [esp + 8]
// 0069b99f  3bc1                 cmp eax, ecx
// 0069b9a1  7426                 je 0x69b9c9
// 0069b9a3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0069b9a7  8b11                 mov edx, dword ptr [ecx]
// 0069b9a9  8910                 mov dword ptr [eax], edx
// 0069b9ab  8b5104               mov edx, dword ptr [ecx + 4]
// 0069b9ae  895004               mov dword ptr [eax + 4], edx
// 0069b9b1  8b5108               mov edx, dword ptr [ecx + 8]
// 0069b9b4  895008               mov dword ptr [eax + 8], edx
// 0069b9b7  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0069b9ba  89500c               mov dword ptr [eax + 0xc], edx
// 0069b9bd  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0069b9c0  895010               mov dword ptr [eax + 0x10], edx
// 0069b9c3  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 0069b9c6  894814               mov dword ptr [eax + 0x14], ecx
// 0069b9c9  c3                   ret 
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
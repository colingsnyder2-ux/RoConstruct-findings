// roc 2011-06 0063e190  unit: RBX::Workspace  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063e190
//
// 0063e190  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063e194  33c9                 xor ecx, ecx
// 0063e196  3bc1                 cmp eax, ecx
// 0063e198  7441                 je 0x63e1db
// 0063e19a  83f801               cmp eax, 1
// 0063e19d  743c                 je 0x63e1db
// 0063e19f  83f802               cmp eax, 2
// 0063e1a2  7465                 je 0x63e209
// 0063e1a4  83f803               cmp eax, 3
// 0063e1a7  7521                 jne 0x63e1ca
// 0063e1a9  56                   push esi
// 0063e1aa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0063e1ae  8b0e                 mov ecx, dword ptr [esi]
// 0063e1b0  68b817c500           push 0xc517b8
// 0063e1b5  ff15500aa400         call dword ptr [0xa40a50]
// 0063e1bb  0fb6c0               movzx eax, al
// 0063e1be  f7d8                 neg eax
// 0063e1c0  1bc0                 sbb eax, eax
// 0063e1c2  23442408             and eax, dword ptr [esp + 8]
// 0063e1c6  8906                 mov dword ptr [esi], eax
// 0063e1c8  5e                   pop esi
// 0063e1c9  c3                   ret 
// 0063e1ca  8b442408             mov eax, dword ptr [esp + 8]
// 0063e1ce  c700b817c500         mov dword ptr [eax], 0xc517b8
// 0063e1d4  884804               mov byte ptr [eax + 4], cl
// 0063e1d7  884805               mov byte ptr [eax + 5], cl
// 0063e1da  c3                   ret 
// 0063e1db  8b442408             mov eax, dword ptr [esp + 8]
// 0063e1df  3bc1                 cmp eax, ecx
// 0063e1e1  7426                 je 0x63e209
// 0063e1e3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0063e1e7  8b11                 mov edx, dword ptr [ecx]
// 0063e1e9  8910                 mov dword ptr [eax], edx
// 0063e1eb  8b5104               mov edx, dword ptr [ecx + 4]
// 0063e1ee  895004               mov dword ptr [eax + 4], edx
// 0063e1f1  8b5108               mov edx, dword ptr [ecx + 8]
// 0063e1f4  895008               mov dword ptr [eax + 8], edx
// 0063e1f7  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0063e1fa  89500c               mov dword ptr [eax + 0xc], edx
// 0063e1fd  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0063e200  895010               mov dword ptr [eax + 0x10], edx
// 0063e203  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 0063e206  894814               mov dword ptr [eax + 0x14], ecx
// 0063e209  c3                   ret 
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
// roc 2009-06 0070aa60  unit: RBX::TaskScheduler::PAVJob::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0070aa60
//
// 0070aa60  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0070aa64  33c9                 xor ecx, ecx
// 0070aa66  3bc1                 cmp eax, ecx
// 0070aa68  7441                 je 0x70aaab
// 0070aa6a  83f801               cmp eax, 1
// 0070aa6d  743c                 je 0x70aaab
// 0070aa6f  83f802               cmp eax, 2
// 0070aa72  744d                 je 0x70aac1
// 0070aa74  83f803               cmp eax, 3
// 0070aa77  7521                 jne 0x70aa9a
// 0070aa79  56                   push esi
// 0070aa7a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0070aa7e  8b0e                 mov ecx, dword ptr [esi]
// 0070aa80  68784ba200           push 0xa24b78
// 0070aa85  ff15a4e98900         call dword ptr [0x89e9a4]
// 0070aa8b  0fb6c0               movzx eax, al
// 0070aa8e  f7d8                 neg eax
// 0070aa90  1bc0                 sbb eax, eax
// 0070aa92  23442408             and eax, dword ptr [esp + 8]
// 0070aa96  8906                 mov dword ptr [esi], eax
// 0070aa98  5e                   pop esi
// 0070aa99  c3                   ret 
// 0070aa9a  8b442408             mov eax, dword ptr [esp + 8]
// 0070aa9e  c700784ba200         mov dword ptr [eax], 0xa24b78
// 0070aaa4  884804               mov byte ptr [eax + 4], cl
// 0070aaa7  884805               mov byte ptr [eax + 5], cl
// 0070aaaa  c3                   ret 
// 0070aaab  8b442408             mov eax, dword ptr [esp + 8]
// 0070aaaf  3bc1                 cmp eax, ecx
// 0070aab1  740e                 je 0x70aac1
// 0070aab3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0070aab7  8b11                 mov edx, dword ptr [ecx]
// 0070aab9  8910                 mov dword ptr [eax], edx
// 0070aabb  8b4904               mov ecx, dword ptr [ecx + 4]
// 0070aabe  894804               mov dword ptr [eax + 4], ecx
// 0070aac1  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

#include <typeinfo>
#include <new>

// boost::detail::function::functor_manager<F>::manage for a small, trivially copyable functor
// stored in place; 0xb3346c is typeid(F)
extern const type_info type_descriptor_b3346c;

struct Functor
{
    int f0, f1;
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
    char data[8];
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
        if (check_type == type_descriptor_b3346c)
            out_buffer.obj_ptr = (void *)&in_buffer.data;
        else
            out_buffer.obj_ptr = 0;
    } else {
        out_buffer.type.type = &type_descriptor_b3346c;
        out_buffer.type.const_qualified = false;
        out_buffer.type.volatile_qualified = false;
    }
}
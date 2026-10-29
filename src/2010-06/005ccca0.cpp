// roc 2010-06 005ccca0  unit: RBX::DataModel::PAVGenericJob::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ccca0
//
// 005ccca0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ccca4  33c9                 xor ecx, ecx
// 005ccca6  3bc1                 cmp eax, ecx
// 005ccca8  7441                 je 0x5ccceb
// 005cccaa  83f801               cmp eax, 1
// 005cccad  743c                 je 0x5ccceb
// 005cccaf  83f802               cmp eax, 2
// 005cccb2  744d                 je 0x5ccd01
// 005cccb4  83f803               cmp eax, 3
// 005cccb7  7521                 jne 0x5cccda
// 005cccb9  56                   push esi
// 005cccba  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005cccbe  8b0e                 mov ecx, dword ptr [esi]
// 005cccc0  686c89ba00           push 0xba896c
// 005cccc5  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 005ccccb  0fb6c0               movzx eax, al
// 005cccce  f7d8                 neg eax
// 005cccd0  1bc0                 sbb eax, eax
// 005cccd2  23442408             and eax, dword ptr [esp + 8]
// 005cccd6  8906                 mov dword ptr [esi], eax
// 005cccd8  5e                   pop esi
// 005cccd9  c3                   ret 
// 005cccda  8b442408             mov eax, dword ptr [esp + 8]
// 005cccde  c7006c89ba00         mov dword ptr [eax], 0xba896c
// 005ccce4  884804               mov byte ptr [eax + 4], cl
// 005ccce7  884805               mov byte ptr [eax + 5], cl
// 005cccea  c3                   ret 
// 005ccceb  8b442408             mov eax, dword ptr [esp + 8]
// 005cccef  3bc1                 cmp eax, ecx
// 005cccf1  740e                 je 0x5ccd01
// 005cccf3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005cccf7  8b11                 mov edx, dword ptr [ecx]
// 005cccf9  8910                 mov dword ptr [eax], edx
// 005cccfb  8b4904               mov ecx, dword ptr [ecx + 4]
// 005cccfe  894804               mov dword ptr [eax + 4], ecx
// 005ccd01  c3                   ret 
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
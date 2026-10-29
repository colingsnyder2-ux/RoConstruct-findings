// roc 2011-06 007fb880  unit: RBX::TaskScheduler::PAVJob::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007fb880
//
// 007fb880  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007fb884  33c9                 xor ecx, ecx
// 007fb886  3bc1                 cmp eax, ecx
// 007fb888  7441                 je 0x7fb8cb
// 007fb88a  83f801               cmp eax, 1
// 007fb88d  743c                 je 0x7fb8cb
// 007fb88f  83f802               cmp eax, 2
// 007fb892  744d                 je 0x7fb8e1
// 007fb894  83f803               cmp eax, 3
// 007fb897  7521                 jne 0x7fb8ba
// 007fb899  56                   push esi
// 007fb89a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007fb89e  8b0e                 mov ecx, dword ptr [esi]
// 007fb8a0  684852c900           push 0xc95248
// 007fb8a5  ff15500aa400         call dword ptr [0xa40a50]
// 007fb8ab  0fb6c0               movzx eax, al
// 007fb8ae  f7d8                 neg eax
// 007fb8b0  1bc0                 sbb eax, eax
// 007fb8b2  23442408             and eax, dword ptr [esp + 8]
// 007fb8b6  8906                 mov dword ptr [esi], eax
// 007fb8b8  5e                   pop esi
// 007fb8b9  c3                   ret 
// 007fb8ba  8b442408             mov eax, dword ptr [esp + 8]
// 007fb8be  c7004852c900         mov dword ptr [eax], 0xc95248
// 007fb8c4  884804               mov byte ptr [eax + 4], cl
// 007fb8c7  884805               mov byte ptr [eax + 5], cl
// 007fb8ca  c3                   ret 
// 007fb8cb  8b442408             mov eax, dword ptr [esp + 8]
// 007fb8cf  3bc1                 cmp eax, ecx
// 007fb8d1  740e                 je 0x7fb8e1
// 007fb8d3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007fb8d7  8b11                 mov edx, dword ptr [ecx]
// 007fb8d9  8910                 mov dword ptr [eax], edx
// 007fb8db  8b4904               mov ecx, dword ptr [ecx + 4]
// 007fb8de  894804               mov dword ptr [eax + 4], ecx
// 007fb8e1  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
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
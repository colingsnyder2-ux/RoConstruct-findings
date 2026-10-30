// roc 2009-06 005fae50  unit: RBX::DataModel::PAVGenericJob::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fae50
//
// 005fae50  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005fae54  33c9                 xor ecx, ecx
// 005fae56  3bc1                 cmp eax, ecx
// 005fae58  7441                 je 0x5fae9b
// 005fae5a  83f801               cmp eax, 1
// 005fae5d  743c                 je 0x5fae9b
// 005fae5f  83f802               cmp eax, 2
// 005fae62  7459                 je 0x5faebd
// 005fae64  83f803               cmp eax, 3
// 005fae67  7521                 jne 0x5fae8a
// 005fae69  56                   push esi
// 005fae6a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005fae6e  8b0e                 mov ecx, dword ptr [esi]
// 005fae70  687865a000           push 0xa06578
// 005fae75  ff15a4e98900         call dword ptr [0x89e9a4]
// 005fae7b  0fb6c0               movzx eax, al
// 005fae7e  f7d8                 neg eax
// 005fae80  1bc0                 sbb eax, eax
// 005fae82  23442408             and eax, dword ptr [esp + 8]
// 005fae86  8906                 mov dword ptr [esi], eax
// 005fae88  5e                   pop esi
// 005fae89  c3                   ret 
// 005fae8a  8b442408             mov eax, dword ptr [esp + 8]
// 005fae8e  c7007865a000         mov dword ptr [eax], 0xa06578
// 005fae94  884804               mov byte ptr [eax + 4], cl
// 005fae97  884805               mov byte ptr [eax + 5], cl
// 005fae9a  c3                   ret 
// 005fae9b  8b442408             mov eax, dword ptr [esp + 8]
// 005fae9f  3bc1                 cmp eax, ecx
// 005faea1  741a                 je 0x5faebd
// 005faea3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005faea7  8b11                 mov edx, dword ptr [ecx]
// 005faea9  8910                 mov dword ptr [eax], edx
// 005faeab  8b5104               mov edx, dword ptr [ecx + 4]
// 005faeae  895004               mov dword ptr [eax + 4], edx
// 005faeb1  8b5108               mov edx, dword ptr [ecx + 8]
// 005faeb4  895008               mov dword ptr [eax + 8], edx
// 005faeb7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 005faeba  89480c               mov dword ptr [eax + 0xc], ecx
// 005faebd  c3                   ret 
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
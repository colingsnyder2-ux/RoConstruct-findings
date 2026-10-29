// roc 2010-06 005ccd10  unit: RBX::DataModel::PAVGenericJob::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ccd10
//
// 005ccd10  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ccd14  33c9                 xor ecx, ecx
// 005ccd16  3bc1                 cmp eax, ecx
// 005ccd18  7441                 je 0x5ccd5b
// 005ccd1a  83f801               cmp eax, 1
// 005ccd1d  743c                 je 0x5ccd5b
// 005ccd1f  83f802               cmp eax, 2
// 005ccd22  7459                 je 0x5ccd7d
// 005ccd24  83f803               cmp eax, 3
// 005ccd27  7521                 jne 0x5ccd4a
// 005ccd29  56                   push esi
// 005ccd2a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ccd2e  8b0e                 mov ecx, dword ptr [esi]
// 005ccd30  68488cba00           push 0xba8c48
// 005ccd35  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 005ccd3b  0fb6c0               movzx eax, al
// 005ccd3e  f7d8                 neg eax
// 005ccd40  1bc0                 sbb eax, eax
// 005ccd42  23442408             and eax, dword ptr [esp + 8]
// 005ccd46  8906                 mov dword ptr [esi], eax
// 005ccd48  5e                   pop esi
// 005ccd49  c3                   ret 
// 005ccd4a  8b442408             mov eax, dword ptr [esp + 8]
// 005ccd4e  c700488cba00         mov dword ptr [eax], 0xba8c48
// 005ccd54  884804               mov byte ptr [eax + 4], cl
// 005ccd57  884805               mov byte ptr [eax + 5], cl
// 005ccd5a  c3                   ret 
// 005ccd5b  8b442408             mov eax, dword ptr [esp + 8]
// 005ccd5f  3bc1                 cmp eax, ecx
// 005ccd61  741a                 je 0x5ccd7d
// 005ccd63  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005ccd67  8b11                 mov edx, dword ptr [ecx]
// 005ccd69  8910                 mov dword ptr [eax], edx
// 005ccd6b  8b5104               mov edx, dword ptr [ecx + 4]
// 005ccd6e  895004               mov dword ptr [eax + 4], edx
// 005ccd71  8b5108               mov edx, dword ptr [ecx + 8]
// 005ccd74  895008               mov dword ptr [eax + 8], edx
// 005ccd77  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 005ccd7a  89480c               mov dword ptr [eax + 0xc], ecx
// 005ccd7d  c3                   ret 
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
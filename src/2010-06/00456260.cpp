// roc 2010-06 00456260  unit: VCWorkspace::?$CComObject  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00456260
//
// 00456260  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00456264  33c9                 xor ecx, ecx
// 00456266  3bc1                 cmp eax, ecx
// 00456268  7441                 je 0x4562ab
// 0045626a  83f801               cmp eax, 1
// 0045626d  743c                 je 0x4562ab
// 0045626f  83f802               cmp eax, 2
// 00456272  7459                 je 0x4562cd
// 00456274  83f803               cmp eax, 3
// 00456277  7521                 jne 0x45629a
// 00456279  56                   push esi
// 0045627a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0045627e  8b0e                 mov ecx, dword ptr [esi]
// 00456280  68f829b800           push 0xb829f8
// 00456285  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0045628b  0fb6c0               movzx eax, al
// 0045628e  f7d8                 neg eax
// 00456290  1bc0                 sbb eax, eax
// 00456292  23442408             and eax, dword ptr [esp + 8]
// 00456296  8906                 mov dword ptr [esi], eax
// 00456298  5e                   pop esi
// 00456299  c3                   ret 
// 0045629a  8b442408             mov eax, dword ptr [esp + 8]
// 0045629e  c700f829b800         mov dword ptr [eax], 0xb829f8
// 004562a4  884804               mov byte ptr [eax + 4], cl
// 004562a7  884805               mov byte ptr [eax + 5], cl
// 004562aa  c3                   ret 
// 004562ab  8b442408             mov eax, dword ptr [esp + 8]
// 004562af  3bc1                 cmp eax, ecx
// 004562b1  741a                 je 0x4562cd
// 004562b3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004562b7  8b11                 mov edx, dword ptr [ecx]
// 004562b9  8910                 mov dword ptr [eax], edx
// 004562bb  8b5104               mov edx, dword ptr [ecx + 4]
// 004562be  895004               mov dword ptr [eax + 4], edx
// 004562c1  8b5108               mov edx, dword ptr [ecx + 8]
// 004562c4  895008               mov dword ptr [eax + 8], edx
// 004562c7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 004562ca  89480c               mov dword ptr [eax + 0xc], ecx
// 004562cd  c3                   ret 
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
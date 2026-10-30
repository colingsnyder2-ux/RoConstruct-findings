// roc 2010-06 00461200  unit: CRobloxReportPaneView  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00461200
//
// 00461200  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00461204  33c9                 xor ecx, ecx
// 00461206  3bc1                 cmp eax, ecx
// 00461208  7441                 je 0x46124b
// 0046120a  83f801               cmp eax, 1
// 0046120d  743c                 je 0x46124b
// 0046120f  83f802               cmp eax, 2
// 00461212  7453                 je 0x461267
// 00461214  83f803               cmp eax, 3
// 00461217  7521                 jne 0x46123a
// 00461219  56                   push esi
// 0046121a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0046121e  8b0e                 mov ecx, dword ptr [esi]
// 00461220  68a03ab800           push 0xb83aa0
// 00461225  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0046122b  0fb6c0               movzx eax, al
// 0046122e  f7d8                 neg eax
// 00461230  1bc0                 sbb eax, eax
// 00461232  23442408             and eax, dword ptr [esp + 8]
// 00461236  8906                 mov dword ptr [esi], eax
// 00461238  5e                   pop esi
// 00461239  c3                   ret 
// 0046123a  8b442408             mov eax, dword ptr [esp + 8]
// 0046123e  c700a03ab800         mov dword ptr [eax], 0xb83aa0
// 00461244  884804               mov byte ptr [eax + 4], cl
// 00461247  884805               mov byte ptr [eax + 5], cl
// 0046124a  c3                   ret 
// 0046124b  8b442408             mov eax, dword ptr [esp + 8]
// 0046124f  3bc1                 cmp eax, ecx
// 00461251  7414                 je 0x461267
// 00461253  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00461257  8b11                 mov edx, dword ptr [ecx]
// 00461259  8910                 mov dword ptr [eax], edx
// 0046125b  8b5104               mov edx, dword ptr [ecx + 4]
// 0046125e  895004               mov dword ptr [eax + 4], edx
// 00461261  8b4908               mov ecx, dword ptr [ecx + 8]
// 00461264  894808               mov dword ptr [eax + 8], ecx
// 00461267  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

#include <typeinfo>
#include <new>

// boost::detail::function::functor_manager<F>::manage for a small, trivially copyable functor
// stored in place; 0xb38a08 is typeid(F)
extern const type_info type_descriptor_b38a08;

struct Functor
{
    int f0, f1, f2;
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
    char data[12];
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
        if (check_type == type_descriptor_b38a08)
            out_buffer.obj_ptr = (void *)&in_buffer.data;
        else
            out_buffer.obj_ptr = 0;
    } else {
        out_buffer.type.type = &type_descriptor_b38a08;
        out_buffer.type.const_qualified = false;
        out_buffer.type.volatile_qualified = false;
    }
}
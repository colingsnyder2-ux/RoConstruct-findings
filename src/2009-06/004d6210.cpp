// roc 2009-06 004d6210  unit: RBX::Network::Server  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d6210
//
// 004d6210  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004d6214  33c9                 xor ecx, ecx
// 004d6216  3bc1                 cmp eax, ecx
// 004d6218  7441                 je 0x4d625b
// 004d621a  83f801               cmp eax, 1
// 004d621d  743c                 je 0x4d625b
// 004d621f  83f802               cmp eax, 2
// 004d6222  7459                 je 0x4d627d
// 004d6224  83f803               cmp eax, 3
// 004d6227  7521                 jne 0x4d624a
// 004d6229  56                   push esi
// 004d622a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004d622e  8b0e                 mov ecx, dword ptr [esi]
// 004d6230  6850249f00           push 0x9f2450
// 004d6235  ff15a4e98900         call dword ptr [0x89e9a4]
// 004d623b  0fb6c0               movzx eax, al
// 004d623e  f7d8                 neg eax
// 004d6240  1bc0                 sbb eax, eax
// 004d6242  23442408             and eax, dword ptr [esp + 8]
// 004d6246  8906                 mov dword ptr [esi], eax
// 004d6248  5e                   pop esi
// 004d6249  c3                   ret 
// 004d624a  8b442408             mov eax, dword ptr [esp + 8]
// 004d624e  c70050249f00         mov dword ptr [eax], 0x9f2450
// 004d6254  884804               mov byte ptr [eax + 4], cl
// 004d6257  884805               mov byte ptr [eax + 5], cl
// 004d625a  c3                   ret 
// 004d625b  8b442408             mov eax, dword ptr [esp + 8]
// 004d625f  3bc1                 cmp eax, ecx
// 004d6261  741a                 je 0x4d627d
// 004d6263  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d6267  8b11                 mov edx, dword ptr [ecx]
// 004d6269  8910                 mov dword ptr [eax], edx
// 004d626b  8b5104               mov edx, dword ptr [ecx + 4]
// 004d626e  895004               mov dword ptr [eax + 4], edx
// 004d6271  8b5108               mov edx, dword ptr [ecx + 8]
// 004d6274  895008               mov dword ptr [eax + 8], edx
// 004d6277  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 004d627a  89480c               mov dword ptr [eax + 0xc], ecx
// 004d627d  c3                   ret 
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
// roc 2009-06 0062b160  unit: RBX::Workspace  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062b160
//
// 0062b160  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0062b164  33c9                 xor ecx, ecx
// 0062b166  3bc1                 cmp eax, ecx
// 0062b168  7441                 je 0x62b1ab
// 0062b16a  83f801               cmp eax, 1
// 0062b16d  743c                 je 0x62b1ab
// 0062b16f  83f802               cmp eax, 2
// 0062b172  7459                 je 0x62b1cd
// 0062b174  83f803               cmp eax, 3
// 0062b177  7521                 jne 0x62b19a
// 0062b179  56                   push esi
// 0062b17a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062b17e  8b0e                 mov ecx, dword ptr [esi]
// 0062b180  68c0bca000           push 0xa0bcc0
// 0062b185  ff15a4e98900         call dword ptr [0x89e9a4]
// 0062b18b  0fb6c0               movzx eax, al
// 0062b18e  f7d8                 neg eax
// 0062b190  1bc0                 sbb eax, eax
// 0062b192  23442408             and eax, dword ptr [esp + 8]
// 0062b196  8906                 mov dword ptr [esi], eax
// 0062b198  5e                   pop esi
// 0062b199  c3                   ret 
// 0062b19a  8b442408             mov eax, dword ptr [esp + 8]
// 0062b19e  c700c0bca000         mov dword ptr [eax], 0xa0bcc0
// 0062b1a4  884804               mov byte ptr [eax + 4], cl
// 0062b1a7  884805               mov byte ptr [eax + 5], cl
// 0062b1aa  c3                   ret 
// 0062b1ab  8b442408             mov eax, dword ptr [esp + 8]
// 0062b1af  3bc1                 cmp eax, ecx
// 0062b1b1  741a                 je 0x62b1cd
// 0062b1b3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0062b1b7  8b11                 mov edx, dword ptr [ecx]
// 0062b1b9  8910                 mov dword ptr [eax], edx
// 0062b1bb  8b5104               mov edx, dword ptr [ecx + 4]
// 0062b1be  895004               mov dword ptr [eax + 4], edx
// 0062b1c1  8b5108               mov edx, dword ptr [ecx + 8]
// 0062b1c4  895008               mov dword ptr [eax + 8], edx
// 0062b1c7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0062b1ca  89480c               mov dword ptr [eax + 0xc], ecx
// 0062b1cd  c3                   ret 
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
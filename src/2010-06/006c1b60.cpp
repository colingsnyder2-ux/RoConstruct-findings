// roc 2010-06 006c1b60  unit: CRobloxControlColorSelector  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c1b60
//
// 006c1b60  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006c1b64  33c9                 xor ecx, ecx
// 006c1b66  3bc1                 cmp eax, ecx
// 006c1b68  7441                 je 0x6c1bab
// 006c1b6a  83f801               cmp eax, 1
// 006c1b6d  743c                 je 0x6c1bab
// 006c1b6f  83f802               cmp eax, 2
// 006c1b72  7459                 je 0x6c1bcd
// 006c1b74  83f803               cmp eax, 3
// 006c1b77  7521                 jne 0x6c1b9a
// 006c1b79  56                   push esi
// 006c1b7a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c1b7e  8b0e                 mov ecx, dword ptr [esi]
// 006c1b80  6860f8bc00           push 0xbcf860
// 006c1b85  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 006c1b8b  0fb6c0               movzx eax, al
// 006c1b8e  f7d8                 neg eax
// 006c1b90  1bc0                 sbb eax, eax
// 006c1b92  23442408             and eax, dword ptr [esp + 8]
// 006c1b96  8906                 mov dword ptr [esi], eax
// 006c1b98  5e                   pop esi
// 006c1b99  c3                   ret 
// 006c1b9a  8b442408             mov eax, dword ptr [esp + 8]
// 006c1b9e  c70060f8bc00         mov dword ptr [eax], 0xbcf860
// 006c1ba4  884804               mov byte ptr [eax + 4], cl
// 006c1ba7  884805               mov byte ptr [eax + 5], cl
// 006c1baa  c3                   ret 
// 006c1bab  8b442408             mov eax, dword ptr [esp + 8]
// 006c1baf  3bc1                 cmp eax, ecx
// 006c1bb1  741a                 je 0x6c1bcd
// 006c1bb3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006c1bb7  8b11                 mov edx, dword ptr [ecx]
// 006c1bb9  8910                 mov dword ptr [eax], edx
// 006c1bbb  8b5104               mov edx, dword ptr [ecx + 4]
// 006c1bbe  895004               mov dword ptr [eax + 4], edx
// 006c1bc1  8b5108               mov edx, dword ptr [ecx + 8]
// 006c1bc4  895008               mov dword ptr [eax + 8], edx
// 006c1bc7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 006c1bca  89480c               mov dword ptr [eax + 0xc], ecx
// 006c1bcd  c3                   ret 
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
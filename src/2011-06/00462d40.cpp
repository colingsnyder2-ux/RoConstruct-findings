// roc 2011-06 00462d40  unit: CRobloxApp  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00462d40
//
// 00462d40  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00462d44  33c9                 xor ecx, ecx
// 00462d46  3bc1                 cmp eax, ecx
// 00462d48  7441                 je 0x462d8b
// 00462d4a  83f801               cmp eax, 1
// 00462d4d  743c                 je 0x462d8b
// 00462d4f  83f802               cmp eax, 2
// 00462d52  745f                 je 0x462db3
// 00462d54  83f803               cmp eax, 3
// 00462d57  7521                 jne 0x462d7a
// 00462d59  56                   push esi
// 00462d5a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00462d5e  8b0e                 mov ecx, dword ptr [esi]
// 00462d60  689841c100           push 0xc14198
// 00462d65  ff15500aa400         call dword ptr [0xa40a50]
// 00462d6b  0fb6c0               movzx eax, al
// 00462d6e  f7d8                 neg eax
// 00462d70  1bc0                 sbb eax, eax
// 00462d72  23442408             and eax, dword ptr [esp + 8]
// 00462d76  8906                 mov dword ptr [esi], eax
// 00462d78  5e                   pop esi
// 00462d79  c3                   ret 
// 00462d7a  8b442408             mov eax, dword ptr [esp + 8]
// 00462d7e  c7009841c100         mov dword ptr [eax], 0xc14198
// 00462d84  884804               mov byte ptr [eax + 4], cl
// 00462d87  884805               mov byte ptr [eax + 5], cl
// 00462d8a  c3                   ret 
// 00462d8b  8b442408             mov eax, dword ptr [esp + 8]
// 00462d8f  3bc1                 cmp eax, ecx
// 00462d91  7420                 je 0x462db3
// 00462d93  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00462d97  8b11                 mov edx, dword ptr [ecx]
// 00462d99  8910                 mov dword ptr [eax], edx
// 00462d9b  8b5104               mov edx, dword ptr [ecx + 4]
// 00462d9e  895004               mov dword ptr [eax + 4], edx
// 00462da1  8b5108               mov edx, dword ptr [ecx + 8]
// 00462da4  895008               mov dword ptr [eax + 8], edx
// 00462da7  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00462daa  89500c               mov dword ptr [eax + 0xc], edx
// 00462dad  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00462db0  894810               mov dword ptr [eax + 0x10], ecx
// 00462db3  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

#include <typeinfo>
#include <new>

// boost::detail::function::functor_manager<F>::manage for a small, trivially copyable functor
// stored in place; 0xb04cc8 is typeid(F)
extern const type_info type_descriptor_b04cc8;

struct Functor
{
    int f0, f1, f2, f3, f4;
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
    char data[20];
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
        if (check_type == type_descriptor_b04cc8)
            out_buffer.obj_ptr = (void *)&in_buffer.data;
        else
            out_buffer.obj_ptr = 0;
    } else {
        out_buffer.type.type = &type_descriptor_b04cc8;
        out_buffer.type.const_qualified = false;
        out_buffer.type.volatile_qualified = false;
    }
}
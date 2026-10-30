// roc 2011-06 00462c60  unit: CRobloxApp  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00462c60
//
// 00462c60  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00462c64  33c9                 xor ecx, ecx
// 00462c66  3bc1                 cmp eax, ecx
// 00462c68  7441                 je 0x462cab
// 00462c6a  83f801               cmp eax, 1
// 00462c6d  743c                 je 0x462cab
// 00462c6f  83f802               cmp eax, 2
// 00462c72  7459                 je 0x462ccd
// 00462c74  83f803               cmp eax, 3
// 00462c77  7521                 jne 0x462c9a
// 00462c79  56                   push esi
// 00462c7a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00462c7e  8b0e                 mov ecx, dword ptr [esi]
// 00462c80  685840c100           push 0xc14058
// 00462c85  ff15500aa400         call dword ptr [0xa40a50]
// 00462c8b  0fb6c0               movzx eax, al
// 00462c8e  f7d8                 neg eax
// 00462c90  1bc0                 sbb eax, eax
// 00462c92  23442408             and eax, dword ptr [esp + 8]
// 00462c96  8906                 mov dword ptr [esi], eax
// 00462c98  5e                   pop esi
// 00462c99  c3                   ret 
// 00462c9a  8b442408             mov eax, dword ptr [esp + 8]
// 00462c9e  c7005840c100         mov dword ptr [eax], 0xc14058
// 00462ca4  884804               mov byte ptr [eax + 4], cl
// 00462ca7  884805               mov byte ptr [eax + 5], cl
// 00462caa  c3                   ret 
// 00462cab  8b442408             mov eax, dword ptr [esp + 8]
// 00462caf  3bc1                 cmp eax, ecx
// 00462cb1  741a                 je 0x462ccd
// 00462cb3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00462cb7  8b11                 mov edx, dword ptr [ecx]
// 00462cb9  8910                 mov dword ptr [eax], edx
// 00462cbb  8b5104               mov edx, dword ptr [ecx + 4]
// 00462cbe  895004               mov dword ptr [eax + 4], edx
// 00462cc1  8b5108               mov edx, dword ptr [ecx + 8]
// 00462cc4  895008               mov dword ptr [eax + 8], edx
// 00462cc7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00462cca  89480c               mov dword ptr [eax + 0xc], ecx
// 00462ccd  c3                   ret 
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
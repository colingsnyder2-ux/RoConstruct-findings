// roc 2009-06 005084e0  unit: RBX::Network::PhysicsSender::Job  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005084e0
//
// 005084e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005084e4  33c9                 xor ecx, ecx
// 005084e6  3bc1                 cmp eax, ecx
// 005084e8  7441                 je 0x50852b
// 005084ea  83f801               cmp eax, 1
// 005084ed  743c                 je 0x50852b
// 005084ef  83f802               cmp eax, 2
// 005084f2  7459                 je 0x50854d
// 005084f4  83f803               cmp eax, 3
// 005084f7  7521                 jne 0x50851a
// 005084f9  56                   push esi
// 005084fa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005084fe  8b0e                 mov ecx, dword ptr [esi]
// 00508500  68c0609f00           push 0x9f60c0
// 00508505  ff15a4e98900         call dword ptr [0x89e9a4]
// 0050850b  0fb6c0               movzx eax, al
// 0050850e  f7d8                 neg eax
// 00508510  1bc0                 sbb eax, eax
// 00508512  23442408             and eax, dword ptr [esp + 8]
// 00508516  8906                 mov dword ptr [esi], eax
// 00508518  5e                   pop esi
// 00508519  c3                   ret 
// 0050851a  8b442408             mov eax, dword ptr [esp + 8]
// 0050851e  c700c0609f00         mov dword ptr [eax], 0x9f60c0
// 00508524  884804               mov byte ptr [eax + 4], cl
// 00508527  884805               mov byte ptr [eax + 5], cl
// 0050852a  c3                   ret 
// 0050852b  8b442408             mov eax, dword ptr [esp + 8]
// 0050852f  3bc1                 cmp eax, ecx
// 00508531  741a                 je 0x50854d
// 00508533  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00508537  8b11                 mov edx, dword ptr [ecx]
// 00508539  8910                 mov dword ptr [eax], edx
// 0050853b  8b5104               mov edx, dword ptr [ecx + 4]
// 0050853e  895004               mov dword ptr [eax + 4], edx
// 00508541  8b5108               mov edx, dword ptr [ecx + 8]
// 00508544  895008               mov dword ptr [eax + 8], edx
// 00508547  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0050854a  89480c               mov dword ptr [eax + 0xc], ecx
// 0050854d  c3                   ret 
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
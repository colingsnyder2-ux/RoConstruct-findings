// roc 2009-06 0067d4b0  unit: RBX::JointsService  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067d4b0
//
// 0067d4b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0067d4b4  33c9                 xor ecx, ecx
// 0067d4b6  3bc1                 cmp eax, ecx
// 0067d4b8  7441                 je 0x67d4fb
// 0067d4ba  83f801               cmp eax, 1
// 0067d4bd  743c                 je 0x67d4fb
// 0067d4bf  83f802               cmp eax, 2
// 0067d4c2  7459                 je 0x67d51d
// 0067d4c4  83f803               cmp eax, 3
// 0067d4c7  7521                 jne 0x67d4ea
// 0067d4c9  56                   push esi
// 0067d4ca  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0067d4ce  8b0e                 mov ecx, dword ptr [esi]
// 0067d4d0  68789da100           push 0xa19d78
// 0067d4d5  ff15a4e98900         call dword ptr [0x89e9a4]
// 0067d4db  0fb6c0               movzx eax, al
// 0067d4de  f7d8                 neg eax
// 0067d4e0  1bc0                 sbb eax, eax
// 0067d4e2  23442408             and eax, dword ptr [esp + 8]
// 0067d4e6  8906                 mov dword ptr [esi], eax
// 0067d4e8  5e                   pop esi
// 0067d4e9  c3                   ret 
// 0067d4ea  8b442408             mov eax, dword ptr [esp + 8]
// 0067d4ee  c700789da100         mov dword ptr [eax], 0xa19d78
// 0067d4f4  884804               mov byte ptr [eax + 4], cl
// 0067d4f7  884805               mov byte ptr [eax + 5], cl
// 0067d4fa  c3                   ret 
// 0067d4fb  8b442408             mov eax, dword ptr [esp + 8]
// 0067d4ff  3bc1                 cmp eax, ecx
// 0067d501  741a                 je 0x67d51d
// 0067d503  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0067d507  8b11                 mov edx, dword ptr [ecx]
// 0067d509  8910                 mov dword ptr [eax], edx
// 0067d50b  8b5104               mov edx, dword ptr [ecx + 4]
// 0067d50e  895004               mov dword ptr [eax + 4], edx
// 0067d511  8b5108               mov edx, dword ptr [ecx + 8]
// 0067d514  895008               mov dword ptr [eax + 8], edx
// 0067d517  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0067d51a  89480c               mov dword ptr [eax + 0xc], ecx
// 0067d51d  c3                   ret 
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
// roc 2009-06 0047d8d0  unit: Ogre::ManualObject  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0047d8d0
//
// 0047d8d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0047d8d4  33c9                 xor ecx, ecx
// 0047d8d6  3bc1                 cmp eax, ecx
// 0047d8d8  7441                 je 0x47d91b
// 0047d8da  83f801               cmp eax, 1
// 0047d8dd  743c                 je 0x47d91b
// 0047d8df  83f802               cmp eax, 2
// 0047d8e2  7459                 je 0x47d93d
// 0047d8e4  83f803               cmp eax, 3
// 0047d8e7  7521                 jne 0x47d90a
// 0047d8e9  56                   push esi
// 0047d8ea  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0047d8ee  8b0e                 mov ecx, dword ptr [esi]
// 0047d8f0  68289c9e00           push 0x9e9c28
// 0047d8f5  ff15a4e98900         call dword ptr [0x89e9a4]
// 0047d8fb  0fb6c0               movzx eax, al
// 0047d8fe  f7d8                 neg eax
// 0047d900  1bc0                 sbb eax, eax
// 0047d902  23442408             and eax, dword ptr [esp + 8]
// 0047d906  8906                 mov dword ptr [esi], eax
// 0047d908  5e                   pop esi
// 0047d909  c3                   ret 
// 0047d90a  8b442408             mov eax, dword ptr [esp + 8]
// 0047d90e  c700289c9e00         mov dword ptr [eax], 0x9e9c28
// 0047d914  884804               mov byte ptr [eax + 4], cl
// 0047d917  884805               mov byte ptr [eax + 5], cl
// 0047d91a  c3                   ret 
// 0047d91b  8b442408             mov eax, dword ptr [esp + 8]
// 0047d91f  3bc1                 cmp eax, ecx
// 0047d921  741a                 je 0x47d93d
// 0047d923  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0047d927  8b11                 mov edx, dword ptr [ecx]
// 0047d929  8910                 mov dword ptr [eax], edx
// 0047d92b  8b5104               mov edx, dword ptr [ecx + 4]
// 0047d92e  895004               mov dword ptr [eax + 4], edx
// 0047d931  8b5108               mov edx, dword ptr [ecx + 8]
// 0047d934  895008               mov dword ptr [eax + 8], edx
// 0047d937  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0047d93a  89480c               mov dword ptr [eax + 0xc], ecx
// 0047d93d  c3                   ret 
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
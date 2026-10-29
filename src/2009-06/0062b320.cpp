// roc 2009-06 0062b320  unit: RBX::Workspace  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062b320
//
// 0062b320  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0062b324  33c9                 xor ecx, ecx
// 0062b326  3bc1                 cmp eax, ecx
// 0062b328  7441                 je 0x62b36b
// 0062b32a  83f801               cmp eax, 1
// 0062b32d  743c                 je 0x62b36b
// 0062b32f  83f802               cmp eax, 2
// 0062b332  7459                 je 0x62b38d
// 0062b334  83f803               cmp eax, 3
// 0062b337  7521                 jne 0x62b35a
// 0062b339  56                   push esi
// 0062b33a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062b33e  8b0e                 mov ecx, dword ptr [esi]
// 0062b340  68f8bea000           push 0xa0bef8
// 0062b345  ff15a4e98900         call dword ptr [0x89e9a4]
// 0062b34b  0fb6c0               movzx eax, al
// 0062b34e  f7d8                 neg eax
// 0062b350  1bc0                 sbb eax, eax
// 0062b352  23442408             and eax, dword ptr [esp + 8]
// 0062b356  8906                 mov dword ptr [esi], eax
// 0062b358  5e                   pop esi
// 0062b359  c3                   ret 
// 0062b35a  8b442408             mov eax, dword ptr [esp + 8]
// 0062b35e  c700f8bea000         mov dword ptr [eax], 0xa0bef8
// 0062b364  884804               mov byte ptr [eax + 4], cl
// 0062b367  884805               mov byte ptr [eax + 5], cl
// 0062b36a  c3                   ret 
// 0062b36b  8b442408             mov eax, dword ptr [esp + 8]
// 0062b36f  3bc1                 cmp eax, ecx
// 0062b371  741a                 je 0x62b38d
// 0062b373  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0062b377  8b11                 mov edx, dword ptr [ecx]
// 0062b379  8910                 mov dword ptr [eax], edx
// 0062b37b  8b5104               mov edx, dword ptr [ecx + 4]
// 0062b37e  895004               mov dword ptr [eax + 4], edx
// 0062b381  8b5108               mov edx, dword ptr [ecx + 8]
// 0062b384  895008               mov dword ptr [eax + 8], edx
// 0062b387  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0062b38a  89480c               mov dword ptr [eax + 0xc], ecx
// 0062b38d  c3                   ret 
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
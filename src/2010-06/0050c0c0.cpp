// roc 2010-06 0050c0c0  unit: RBX::Network::NetworkOwnerJob  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0050c0c0
//
// 0050c0c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0050c0c4  33c9                 xor ecx, ecx
// 0050c0c6  3bc1                 cmp eax, ecx
// 0050c0c8  7441                 je 0x50c10b
// 0050c0ca  83f801               cmp eax, 1
// 0050c0cd  743c                 je 0x50c10b
// 0050c0cf  83f802               cmp eax, 2
// 0050c0d2  7459                 je 0x50c12d
// 0050c0d4  83f803               cmp eax, 3
// 0050c0d7  7521                 jne 0x50c0fa
// 0050c0d9  56                   push esi
// 0050c0da  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0050c0de  8b0e                 mov ecx, dword ptr [esi]
// 0050c0e0  68b050b900           push 0xb950b0
// 0050c0e5  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0050c0eb  0fb6c0               movzx eax, al
// 0050c0ee  f7d8                 neg eax
// 0050c0f0  1bc0                 sbb eax, eax
// 0050c0f2  23442408             and eax, dword ptr [esp + 8]
// 0050c0f6  8906                 mov dword ptr [esi], eax
// 0050c0f8  5e                   pop esi
// 0050c0f9  c3                   ret 
// 0050c0fa  8b442408             mov eax, dword ptr [esp + 8]
// 0050c0fe  c700b050b900         mov dword ptr [eax], 0xb950b0
// 0050c104  884804               mov byte ptr [eax + 4], cl
// 0050c107  884805               mov byte ptr [eax + 5], cl
// 0050c10a  c3                   ret 
// 0050c10b  8b442408             mov eax, dword ptr [esp + 8]
// 0050c10f  3bc1                 cmp eax, ecx
// 0050c111  741a                 je 0x50c12d
// 0050c113  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0050c117  8b11                 mov edx, dword ptr [ecx]
// 0050c119  8910                 mov dword ptr [eax], edx
// 0050c11b  8b5104               mov edx, dword ptr [ecx + 4]
// 0050c11e  895004               mov dword ptr [eax + 4], edx
// 0050c121  8b5108               mov edx, dword ptr [ecx + 8]
// 0050c124  895008               mov dword ptr [eax + 8], edx
// 0050c127  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0050c12a  89480c               mov dword ptr [eax + 0xc], ecx
// 0050c12d  c3                   ret 
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
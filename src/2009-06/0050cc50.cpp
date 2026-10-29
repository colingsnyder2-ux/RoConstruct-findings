// roc 2009-06 0050cc50  unit: RBX::Network::DirectPhysicsReceiver  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0050cc50
//
// 0050cc50  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0050cc54  33c9                 xor ecx, ecx
// 0050cc56  3bc1                 cmp eax, ecx
// 0050cc58  7441                 je 0x50cc9b
// 0050cc5a  83f801               cmp eax, 1
// 0050cc5d  743c                 je 0x50cc9b
// 0050cc5f  83f802               cmp eax, 2
// 0050cc62  7459                 je 0x50ccbd
// 0050cc64  83f803               cmp eax, 3
// 0050cc67  7521                 jne 0x50cc8a
// 0050cc69  56                   push esi
// 0050cc6a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0050cc6e  8b0e                 mov ecx, dword ptr [esi]
// 0050cc70  6898649f00           push 0x9f6498
// 0050cc75  ff15a4e98900         call dword ptr [0x89e9a4]
// 0050cc7b  0fb6c0               movzx eax, al
// 0050cc7e  f7d8                 neg eax
// 0050cc80  1bc0                 sbb eax, eax
// 0050cc82  23442408             and eax, dword ptr [esp + 8]
// 0050cc86  8906                 mov dword ptr [esi], eax
// 0050cc88  5e                   pop esi
// 0050cc89  c3                   ret 
// 0050cc8a  8b442408             mov eax, dword ptr [esp + 8]
// 0050cc8e  c70098649f00         mov dword ptr [eax], 0x9f6498
// 0050cc94  884804               mov byte ptr [eax + 4], cl
// 0050cc97  884805               mov byte ptr [eax + 5], cl
// 0050cc9a  c3                   ret 
// 0050cc9b  8b442408             mov eax, dword ptr [esp + 8]
// 0050cc9f  3bc1                 cmp eax, ecx
// 0050cca1  741a                 je 0x50ccbd
// 0050cca3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0050cca7  8b11                 mov edx, dword ptr [ecx]
// 0050cca9  8910                 mov dword ptr [eax], edx
// 0050ccab  8b5104               mov edx, dword ptr [ecx + 4]
// 0050ccae  895004               mov dword ptr [eax + 4], edx
// 0050ccb1  8b5108               mov edx, dword ptr [ecx + 8]
// 0050ccb4  895008               mov dword ptr [eax + 8], edx
// 0050ccb7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0050ccba  89480c               mov dword ptr [eax + 0xc], ecx
// 0050ccbd  c3                   ret 
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
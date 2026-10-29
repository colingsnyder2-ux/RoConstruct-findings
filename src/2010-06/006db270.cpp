// roc 2010-06 006db270  unit: RBX::VehicleSeat  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006db270
//
// 006db270  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006db274  33c9                 xor ecx, ecx
// 006db276  3bc1                 cmp eax, ecx
// 006db278  7441                 je 0x6db2bb
// 006db27a  83f801               cmp eax, 1
// 006db27d  743c                 je 0x6db2bb
// 006db27f  83f802               cmp eax, 2
// 006db282  7465                 je 0x6db2e9
// 006db284  83f803               cmp eax, 3
// 006db287  7521                 jne 0x6db2aa
// 006db289  56                   push esi
// 006db28a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006db28e  8b0e                 mov ecx, dword ptr [esi]
// 006db290  68a869bd00           push 0xbd69a8
// 006db295  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 006db29b  0fb6c0               movzx eax, al
// 006db29e  f7d8                 neg eax
// 006db2a0  1bc0                 sbb eax, eax
// 006db2a2  23442408             and eax, dword ptr [esp + 8]
// 006db2a6  8906                 mov dword ptr [esi], eax
// 006db2a8  5e                   pop esi
// 006db2a9  c3                   ret 
// 006db2aa  8b442408             mov eax, dword ptr [esp + 8]
// 006db2ae  c700a869bd00         mov dword ptr [eax], 0xbd69a8
// 006db2b4  884804               mov byte ptr [eax + 4], cl
// 006db2b7  884805               mov byte ptr [eax + 5], cl
// 006db2ba  c3                   ret 
// 006db2bb  8b442408             mov eax, dword ptr [esp + 8]
// 006db2bf  3bc1                 cmp eax, ecx
// 006db2c1  7426                 je 0x6db2e9
// 006db2c3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006db2c7  8b11                 mov edx, dword ptr [ecx]
// 006db2c9  8910                 mov dword ptr [eax], edx
// 006db2cb  8b5104               mov edx, dword ptr [ecx + 4]
// 006db2ce  895004               mov dword ptr [eax + 4], edx
// 006db2d1  8b5108               mov edx, dword ptr [ecx + 8]
// 006db2d4  895008               mov dword ptr [eax + 8], edx
// 006db2d7  8b510c               mov edx, dword ptr [ecx + 0xc]
// 006db2da  89500c               mov dword ptr [eax + 0xc], edx
// 006db2dd  8b5110               mov edx, dword ptr [ecx + 0x10]
// 006db2e0  895010               mov dword ptr [eax + 0x10], edx
// 006db2e3  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 006db2e6  894814               mov dword ptr [eax + 0x14], ecx
// 006db2e9  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

#include <typeinfo>
#include <new>

// boost::detail::function::functor_manager<F>::manage for a small, trivially copyable functor
// stored in place; 0xb2f1b0 is typeid(F)
extern const type_info type_descriptor_b2f1b0;

struct Functor
{
    int f0, f1, f2, f3, f4, f5;
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
    char data[24];
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
        if (check_type == type_descriptor_b2f1b0)
            out_buffer.obj_ptr = (void *)&in_buffer.data;
        else
            out_buffer.obj_ptr = 0;
    } else {
        out_buffer.type.type = &type_descriptor_b2f1b0;
        out_buffer.type.const_qualified = false;
        out_buffer.type.volatile_qualified = false;
    }
}
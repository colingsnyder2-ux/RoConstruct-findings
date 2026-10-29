// roc 2011-06 006916f0  unit: RBX::VBasicPartInstance::?$FactoryProduct  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006916f0
//
// 006916f0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006916f4  33c9                 xor ecx, ecx
// 006916f6  3bc1                 cmp eax, ecx
// 006916f8  7441                 je 0x69173b
// 006916fa  83f801               cmp eax, 1
// 006916fd  743c                 je 0x69173b
// 006916ff  83f802               cmp eax, 2
// 00691702  7465                 je 0x691769
// 00691704  83f803               cmp eax, 3
// 00691707  7521                 jne 0x69172a
// 00691709  56                   push esi
// 0069170a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0069170e  8b0e                 mov ecx, dword ptr [esi]
// 00691710  687003c600           push 0xc60370
// 00691715  ff15500aa400         call dword ptr [0xa40a50]
// 0069171b  0fb6c0               movzx eax, al
// 0069171e  f7d8                 neg eax
// 00691720  1bc0                 sbb eax, eax
// 00691722  23442408             and eax, dword ptr [esp + 8]
// 00691726  8906                 mov dword ptr [esi], eax
// 00691728  5e                   pop esi
// 00691729  c3                   ret 
// 0069172a  8b442408             mov eax, dword ptr [esp + 8]
// 0069172e  c7007003c600         mov dword ptr [eax], 0xc60370
// 00691734  884804               mov byte ptr [eax + 4], cl
// 00691737  884805               mov byte ptr [eax + 5], cl
// 0069173a  c3                   ret 
// 0069173b  8b442408             mov eax, dword ptr [esp + 8]
// 0069173f  3bc1                 cmp eax, ecx
// 00691741  7426                 je 0x691769
// 00691743  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00691747  8b11                 mov edx, dword ptr [ecx]
// 00691749  8910                 mov dword ptr [eax], edx
// 0069174b  8b5104               mov edx, dword ptr [ecx + 4]
// 0069174e  895004               mov dword ptr [eax + 4], edx
// 00691751  8b5108               mov edx, dword ptr [ecx + 8]
// 00691754  895008               mov dword ptr [eax + 8], edx
// 00691757  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0069175a  89500c               mov dword ptr [eax + 0xc], edx
// 0069175d  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00691760  895010               mov dword ptr [eax + 0x10], edx
// 00691763  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 00691766  894814               mov dword ptr [eax + 0x14], ecx
// 00691769  c3                   ret 
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
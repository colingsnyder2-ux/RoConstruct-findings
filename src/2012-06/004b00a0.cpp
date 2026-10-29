// roc 2012-06 004b00a0  unit: RBX::TextDisplay  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004b00a0
//
// 004b00a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004b00a4  33c9                 xor ecx, ecx
// 004b00a6  3bc1                 cmp eax, ecx
// 004b00a8  7441                 je 0x4b00eb
// 004b00aa  83f801               cmp eax, 1
// 004b00ad  743c                 je 0x4b00eb
// 004b00af  83f802               cmp eax, 2
// 004b00b2  7459                 je 0x4b010d
// 004b00b4  83f803               cmp eax, 3
// 004b00b7  7521                 jne 0x4b00da
// 004b00b9  56                   push esi
// 004b00ba  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004b00be  8b0e                 mov ecx, dword ptr [esi]
// 004b00c0  681823d700           push 0xd72318
// 004b00c5  ff15ec29b200         call dword ptr [0xb229ec]
// 004b00cb  0fb6c0               movzx eax, al
// 004b00ce  f7d8                 neg eax
// 004b00d0  1bc0                 sbb eax, eax
// 004b00d2  23442408             and eax, dword ptr [esp + 8]
// 004b00d6  8906                 mov dword ptr [esi], eax
// 004b00d8  5e                   pop esi
// 004b00d9  c3                   ret 
// 004b00da  8b442408             mov eax, dword ptr [esp + 8]
// 004b00de  c7001823d700         mov dword ptr [eax], 0xd72318
// 004b00e4  884804               mov byte ptr [eax + 4], cl
// 004b00e7  884805               mov byte ptr [eax + 5], cl
// 004b00ea  c3                   ret 
// 004b00eb  8b442408             mov eax, dword ptr [esp + 8]
// 004b00ef  3bc1                 cmp eax, ecx
// 004b00f1  741a                 je 0x4b010d
// 004b00f3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004b00f7  8b11                 mov edx, dword ptr [ecx]
// 004b00f9  8910                 mov dword ptr [eax], edx
// 004b00fb  8b5104               mov edx, dword ptr [ecx + 4]
// 004b00fe  895004               mov dword ptr [eax + 4], edx
// 004b0101  8b5108               mov edx, dword ptr [ecx + 8]
// 004b0104  895008               mov dword ptr [eax + 8], edx
// 004b0107  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 004b010a  89480c               mov dword ptr [eax + 0xc], ecx
// 004b010d  c3                   ret 
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
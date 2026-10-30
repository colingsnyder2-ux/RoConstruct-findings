// roc 2012-06 004b0180  unit: RBX::TextDisplay  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004b0180
//
// 004b0180  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004b0184  33c9                 xor ecx, ecx
// 004b0186  3bc1                 cmp eax, ecx
// 004b0188  7441                 je 0x4b01cb
// 004b018a  83f801               cmp eax, 1
// 004b018d  743c                 je 0x4b01cb
// 004b018f  83f802               cmp eax, 2
// 004b0192  7459                 je 0x4b01ed
// 004b0194  83f803               cmp eax, 3
// 004b0197  7521                 jne 0x4b01ba
// 004b0199  56                   push esi
// 004b019a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004b019e  8b0e                 mov ecx, dword ptr [esi]
// 004b01a0  689824d700           push 0xd72498
// 004b01a5  ff15ec29b200         call dword ptr [0xb229ec]
// 004b01ab  0fb6c0               movzx eax, al
// 004b01ae  f7d8                 neg eax
// 004b01b0  1bc0                 sbb eax, eax
// 004b01b2  23442408             and eax, dword ptr [esp + 8]
// 004b01b6  8906                 mov dword ptr [esi], eax
// 004b01b8  5e                   pop esi
// 004b01b9  c3                   ret 
// 004b01ba  8b442408             mov eax, dword ptr [esp + 8]
// 004b01be  c7009824d700         mov dword ptr [eax], 0xd72498
// 004b01c4  884804               mov byte ptr [eax + 4], cl
// 004b01c7  884805               mov byte ptr [eax + 5], cl
// 004b01ca  c3                   ret 
// 004b01cb  8b442408             mov eax, dword ptr [esp + 8]
// 004b01cf  3bc1                 cmp eax, ecx
// 004b01d1  741a                 je 0x4b01ed
// 004b01d3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004b01d7  8b11                 mov edx, dword ptr [ecx]
// 004b01d9  8910                 mov dword ptr [eax], edx
// 004b01db  8b5104               mov edx, dword ptr [ecx + 4]
// 004b01de  895004               mov dword ptr [eax + 4], edx
// 004b01e1  8b5108               mov edx, dword ptr [ecx + 8]
// 004b01e4  895008               mov dword ptr [eax + 8], edx
// 004b01e7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 004b01ea  89480c               mov dword ptr [eax + 0xc], ecx
// 004b01ed  c3                   ret 
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
// roc 2009-06 00454270  unit: CRobloxReportPaneView  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00454270
//
// 00454270  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00454274  33c9                 xor ecx, ecx
// 00454276  3bc1                 cmp eax, ecx
// 00454278  7441                 je 0x4542bb
// 0045427a  83f801               cmp eax, 1
// 0045427d  743c                 je 0x4542bb
// 0045427f  83f802               cmp eax, 2
// 00454282  7459                 je 0x4542dd
// 00454284  83f803               cmp eax, 3
// 00454287  7521                 jne 0x4542aa
// 00454289  56                   push esi
// 0045428a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0045428e  8b0e                 mov ecx, dword ptr [esi]
// 00454290  6838549e00           push 0x9e5438
// 00454295  ff15a4e98900         call dword ptr [0x89e9a4]
// 0045429b  0fb6c0               movzx eax, al
// 0045429e  f7d8                 neg eax
// 004542a0  1bc0                 sbb eax, eax
// 004542a2  23442408             and eax, dword ptr [esp + 8]
// 004542a6  8906                 mov dword ptr [esi], eax
// 004542a8  5e                   pop esi
// 004542a9  c3                   ret 
// 004542aa  8b442408             mov eax, dword ptr [esp + 8]
// 004542ae  c70038549e00         mov dword ptr [eax], 0x9e5438
// 004542b4  884804               mov byte ptr [eax + 4], cl
// 004542b7  884805               mov byte ptr [eax + 5], cl
// 004542ba  c3                   ret 
// 004542bb  8b442408             mov eax, dword ptr [esp + 8]
// 004542bf  3bc1                 cmp eax, ecx
// 004542c1  741a                 je 0x4542dd
// 004542c3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004542c7  8b11                 mov edx, dword ptr [ecx]
// 004542c9  8910                 mov dword ptr [eax], edx
// 004542cb  8b5104               mov edx, dword ptr [ecx + 4]
// 004542ce  895004               mov dword ptr [eax + 4], edx
// 004542d1  8b5108               mov edx, dword ptr [ecx + 8]
// 004542d4  895008               mov dword ptr [eax + 8], edx
// 004542d7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 004542da  89480c               mov dword ptr [eax + 0xc], ecx
// 004542dd  c3                   ret 
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
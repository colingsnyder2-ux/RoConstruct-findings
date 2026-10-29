// roc 2010-06 0065f1e0  unit: RBX::Backpack  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0065f1e0
//
// 0065f1e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0065f1e4  33c9                 xor ecx, ecx
// 0065f1e6  3bc1                 cmp eax, ecx
// 0065f1e8  7441                 je 0x65f22b
// 0065f1ea  83f801               cmp eax, 1
// 0065f1ed  743c                 je 0x65f22b
// 0065f1ef  83f802               cmp eax, 2
// 0065f1f2  7459                 je 0x65f24d
// 0065f1f4  83f803               cmp eax, 3
// 0065f1f7  7521                 jne 0x65f21a
// 0065f1f9  56                   push esi
// 0065f1fa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065f1fe  8b0e                 mov ecx, dword ptr [esi]
// 0065f200  6850b8bb00           push 0xbbb850
// 0065f205  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0065f20b  0fb6c0               movzx eax, al
// 0065f20e  f7d8                 neg eax
// 0065f210  1bc0                 sbb eax, eax
// 0065f212  23442408             and eax, dword ptr [esp + 8]
// 0065f216  8906                 mov dword ptr [esi], eax
// 0065f218  5e                   pop esi
// 0065f219  c3                   ret 
// 0065f21a  8b442408             mov eax, dword ptr [esp + 8]
// 0065f21e  c70050b8bb00         mov dword ptr [eax], 0xbbb850
// 0065f224  884804               mov byte ptr [eax + 4], cl
// 0065f227  884805               mov byte ptr [eax + 5], cl
// 0065f22a  c3                   ret 
// 0065f22b  8b442408             mov eax, dword ptr [esp + 8]
// 0065f22f  3bc1                 cmp eax, ecx
// 0065f231  741a                 je 0x65f24d
// 0065f233  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0065f237  8b11                 mov edx, dword ptr [ecx]
// 0065f239  8910                 mov dword ptr [eax], edx
// 0065f23b  8b5104               mov edx, dword ptr [ecx + 4]
// 0065f23e  895004               mov dword ptr [eax + 4], edx
// 0065f241  8b5108               mov edx, dword ptr [ecx + 8]
// 0065f244  895008               mov dword ptr [eax + 8], edx
// 0065f247  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0065f24a  89480c               mov dword ptr [eax + 0xc], ecx
// 0065f24d  c3                   ret 
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
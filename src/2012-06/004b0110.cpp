// roc 2012-06 004b0110  unit: RBX::TextDisplay  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004b0110
//
// 004b0110  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004b0114  33c9                 xor ecx, ecx
// 004b0116  3bc1                 cmp eax, ecx
// 004b0118  7441                 je 0x4b015b
// 004b011a  83f801               cmp eax, 1
// 004b011d  743c                 je 0x4b015b
// 004b011f  83f802               cmp eax, 2
// 004b0122  7459                 je 0x4b017d
// 004b0124  83f803               cmp eax, 3
// 004b0127  7521                 jne 0x4b014a
// 004b0129  56                   push esi
// 004b012a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004b012e  8b0e                 mov ecx, dword ptr [esi]
// 004b0130  68f823d700           push 0xd723f8
// 004b0135  ff15ec29b200         call dword ptr [0xb229ec]
// 004b013b  0fb6c0               movzx eax, al
// 004b013e  f7d8                 neg eax
// 004b0140  1bc0                 sbb eax, eax
// 004b0142  23442408             and eax, dword ptr [esp + 8]
// 004b0146  8906                 mov dword ptr [esi], eax
// 004b0148  5e                   pop esi
// 004b0149  c3                   ret 
// 004b014a  8b442408             mov eax, dword ptr [esp + 8]
// 004b014e  c700f823d700         mov dword ptr [eax], 0xd723f8
// 004b0154  884804               mov byte ptr [eax + 4], cl
// 004b0157  884805               mov byte ptr [eax + 5], cl
// 004b015a  c3                   ret 
// 004b015b  8b442408             mov eax, dword ptr [esp + 8]
// 004b015f  3bc1                 cmp eax, ecx
// 004b0161  741a                 je 0x4b017d
// 004b0163  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004b0167  8b11                 mov edx, dword ptr [ecx]
// 004b0169  8910                 mov dword ptr [eax], edx
// 004b016b  8b5104               mov edx, dword ptr [ecx + 4]
// 004b016e  895004               mov dword ptr [eax + 4], edx
// 004b0171  8b5108               mov edx, dword ptr [ecx + 8]
// 004b0174  895008               mov dword ptr [eax + 8], edx
// 004b0177  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 004b017a  89480c               mov dword ptr [eax + 0xc], ecx
// 004b017d  c3                   ret 
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
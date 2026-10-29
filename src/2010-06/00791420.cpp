// roc 2010-06 00791420  unit: RBX::HUMAN::Running  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00791420
//
// 00791420  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00791424  33c9                 xor ecx, ecx
// 00791426  3bc1                 cmp eax, ecx
// 00791428  7441                 je 0x79146b
// 0079142a  83f801               cmp eax, 1
// 0079142d  743c                 je 0x79146b
// 0079142f  83f802               cmp eax, 2
// 00791432  7459                 je 0x79148d
// 00791434  83f803               cmp eax, 3
// 00791437  7521                 jne 0x79145a
// 00791439  56                   push esi
// 0079143a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0079143e  8b0e                 mov ecx, dword ptr [esi]
// 00791440  68f850be00           push 0xbe50f8
// 00791445  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0079144b  0fb6c0               movzx eax, al
// 0079144e  f7d8                 neg eax
// 00791450  1bc0                 sbb eax, eax
// 00791452  23442408             and eax, dword ptr [esp + 8]
// 00791456  8906                 mov dword ptr [esi], eax
// 00791458  5e                   pop esi
// 00791459  c3                   ret 
// 0079145a  8b442408             mov eax, dword ptr [esp + 8]
// 0079145e  c700f850be00         mov dword ptr [eax], 0xbe50f8
// 00791464  884804               mov byte ptr [eax + 4], cl
// 00791467  884805               mov byte ptr [eax + 5], cl
// 0079146a  c3                   ret 
// 0079146b  8b442408             mov eax, dword ptr [esp + 8]
// 0079146f  3bc1                 cmp eax, ecx
// 00791471  741a                 je 0x79148d
// 00791473  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00791477  8b11                 mov edx, dword ptr [ecx]
// 00791479  8910                 mov dword ptr [eax], edx
// 0079147b  8b5104               mov edx, dword ptr [ecx + 4]
// 0079147e  895004               mov dword ptr [eax + 4], edx
// 00791481  8b5108               mov edx, dword ptr [ecx + 8]
// 00791484  895008               mov dword ptr [eax + 8], edx
// 00791487  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0079148a  89480c               mov dword ptr [eax + 0xc], ecx
// 0079148d  c3                   ret 
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
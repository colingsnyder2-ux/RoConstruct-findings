// roc 2009-06 00643610  unit: RBX::WoodTool  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00643610
//
// 00643610  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00643614  33c9                 xor ecx, ecx
// 00643616  3bc1                 cmp eax, ecx
// 00643618  7441                 je 0x64365b
// 0064361a  83f801               cmp eax, 1
// 0064361d  743c                 je 0x64365b
// 0064361f  83f802               cmp eax, 2
// 00643622  7459                 je 0x64367d
// 00643624  83f803               cmp eax, 3
// 00643627  7521                 jne 0x64364a
// 00643629  56                   push esi
// 0064362a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0064362e  8b0e                 mov ecx, dword ptr [esi]
// 00643630  6830dea000           push 0xa0de30
// 00643635  ff15a4e98900         call dword ptr [0x89e9a4]
// 0064363b  0fb6c0               movzx eax, al
// 0064363e  f7d8                 neg eax
// 00643640  1bc0                 sbb eax, eax
// 00643642  23442408             and eax, dword ptr [esp + 8]
// 00643646  8906                 mov dword ptr [esi], eax
// 00643648  5e                   pop esi
// 00643649  c3                   ret 
// 0064364a  8b442408             mov eax, dword ptr [esp + 8]
// 0064364e  c70030dea000         mov dword ptr [eax], 0xa0de30
// 00643654  884804               mov byte ptr [eax + 4], cl
// 00643657  884805               mov byte ptr [eax + 5], cl
// 0064365a  c3                   ret 
// 0064365b  8b442408             mov eax, dword ptr [esp + 8]
// 0064365f  3bc1                 cmp eax, ecx
// 00643661  741a                 je 0x64367d
// 00643663  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00643667  8b11                 mov edx, dword ptr [ecx]
// 00643669  8910                 mov dword ptr [eax], edx
// 0064366b  8b5104               mov edx, dword ptr [ecx + 4]
// 0064366e  895004               mov dword ptr [eax + 4], edx
// 00643671  8b5108               mov edx, dword ptr [ecx + 8]
// 00643674  895008               mov dword ptr [eax + 8], edx
// 00643677  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0064367a  89480c               mov dword ptr [eax + 0xc], ecx
// 0064367d  c3                   ret 
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
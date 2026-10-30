// roc 2010-06 005f57a0  unit: RBX::VHopperBin::?$FactoryProduct  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f57a0
//
// 005f57a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005f57a4  33c9                 xor ecx, ecx
// 005f57a6  3bc1                 cmp eax, ecx
// 005f57a8  7441                 je 0x5f57eb
// 005f57aa  83f801               cmp eax, 1
// 005f57ad  743c                 je 0x5f57eb
// 005f57af  83f802               cmp eax, 2
// 005f57b2  7459                 je 0x5f580d
// 005f57b4  83f803               cmp eax, 3
// 005f57b7  7521                 jne 0x5f57da
// 005f57b9  56                   push esi
// 005f57ba  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005f57be  8b0e                 mov ecx, dword ptr [esi]
// 005f57c0  68c8beba00           push 0xbabec8
// 005f57c5  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 005f57cb  0fb6c0               movzx eax, al
// 005f57ce  f7d8                 neg eax
// 005f57d0  1bc0                 sbb eax, eax
// 005f57d2  23442408             and eax, dword ptr [esp + 8]
// 005f57d6  8906                 mov dword ptr [esi], eax
// 005f57d8  5e                   pop esi
// 005f57d9  c3                   ret 
// 005f57da  8b442408             mov eax, dword ptr [esp + 8]
// 005f57de  c700c8beba00         mov dword ptr [eax], 0xbabec8
// 005f57e4  884804               mov byte ptr [eax + 4], cl
// 005f57e7  884805               mov byte ptr [eax + 5], cl
// 005f57ea  c3                   ret 
// 005f57eb  8b442408             mov eax, dword ptr [esp + 8]
// 005f57ef  3bc1                 cmp eax, ecx
// 005f57f1  741a                 je 0x5f580d
// 005f57f3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f57f7  8b11                 mov edx, dword ptr [ecx]
// 005f57f9  8910                 mov dword ptr [eax], edx
// 005f57fb  8b5104               mov edx, dword ptr [ecx + 4]
// 005f57fe  895004               mov dword ptr [eax + 4], edx
// 005f5801  8b5108               mov edx, dword ptr [ecx + 8]
// 005f5804  895008               mov dword ptr [eax + 8], edx
// 005f5807  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 005f580a  89480c               mov dword ptr [eax + 0xc], ecx
// 005f580d  c3                   ret 
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
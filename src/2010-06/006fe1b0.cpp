// roc 2010-06 006fe1b0  unit: RBX::VAnimationTrack::?$EventDesc  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006fe1b0
//
// 006fe1b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006fe1b4  33c9                 xor ecx, ecx
// 006fe1b6  3bc1                 cmp eax, ecx
// 006fe1b8  7441                 je 0x6fe1fb
// 006fe1ba  83f801               cmp eax, 1
// 006fe1bd  743c                 je 0x6fe1fb
// 006fe1bf  83f802               cmp eax, 2
// 006fe1c2  7459                 je 0x6fe21d
// 006fe1c4  83f803               cmp eax, 3
// 006fe1c7  7521                 jne 0x6fe1ea
// 006fe1c9  56                   push esi
// 006fe1ca  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006fe1ce  8b0e                 mov ecx, dword ptr [esi]
// 006fe1d0  6800febd00           push 0xbdfe00
// 006fe1d5  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 006fe1db  0fb6c0               movzx eax, al
// 006fe1de  f7d8                 neg eax
// 006fe1e0  1bc0                 sbb eax, eax
// 006fe1e2  23442408             and eax, dword ptr [esp + 8]
// 006fe1e6  8906                 mov dword ptr [esi], eax
// 006fe1e8  5e                   pop esi
// 006fe1e9  c3                   ret 
// 006fe1ea  8b442408             mov eax, dword ptr [esp + 8]
// 006fe1ee  c70000febd00         mov dword ptr [eax], 0xbdfe00
// 006fe1f4  884804               mov byte ptr [eax + 4], cl
// 006fe1f7  884805               mov byte ptr [eax + 5], cl
// 006fe1fa  c3                   ret 
// 006fe1fb  8b442408             mov eax, dword ptr [esp + 8]
// 006fe1ff  3bc1                 cmp eax, ecx
// 006fe201  741a                 je 0x6fe21d
// 006fe203  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fe207  8b11                 mov edx, dword ptr [ecx]
// 006fe209  8910                 mov dword ptr [eax], edx
// 006fe20b  8b5104               mov edx, dword ptr [ecx + 4]
// 006fe20e  895004               mov dword ptr [eax + 4], edx
// 006fe211  8b5108               mov edx, dword ptr [ecx + 8]
// 006fe214  895008               mov dword ptr [eax + 8], edx
// 006fe217  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 006fe21a  89480c               mov dword ptr [eax + 0xc], ecx
// 006fe21d  c3                   ret 
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
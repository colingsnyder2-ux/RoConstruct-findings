// roc 2012-06 0047b170  unit: VCWorkspace::?$CComObject  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0047b170
//
// 0047b170  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0047b174  33c9                 xor ecx, ecx
// 0047b176  3bc1                 cmp eax, ecx
// 0047b178  7441                 je 0x47b1bb
// 0047b17a  83f801               cmp eax, 1
// 0047b17d  743c                 je 0x47b1bb
// 0047b17f  83f802               cmp eax, 2
// 0047b182  744d                 je 0x47b1d1
// 0047b184  83f803               cmp eax, 3
// 0047b187  7521                 jne 0x47b1aa
// 0047b189  56                   push esi
// 0047b18a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0047b18e  8b0e                 mov ecx, dword ptr [esi]
// 0047b190  68d0dad600           push 0xd6dad0
// 0047b195  ff15ec29b200         call dword ptr [0xb229ec]
// 0047b19b  0fb6c0               movzx eax, al
// 0047b19e  f7d8                 neg eax
// 0047b1a0  1bc0                 sbb eax, eax
// 0047b1a2  23442408             and eax, dword ptr [esp + 8]
// 0047b1a6  8906                 mov dword ptr [esi], eax
// 0047b1a8  5e                   pop esi
// 0047b1a9  c3                   ret 
// 0047b1aa  8b442408             mov eax, dword ptr [esp + 8]
// 0047b1ae  c700d0dad600         mov dword ptr [eax], 0xd6dad0
// 0047b1b4  884804               mov byte ptr [eax + 4], cl
// 0047b1b7  884805               mov byte ptr [eax + 5], cl
// 0047b1ba  c3                   ret 
// 0047b1bb  8b442408             mov eax, dword ptr [esp + 8]
// 0047b1bf  3bc1                 cmp eax, ecx
// 0047b1c1  740e                 je 0x47b1d1
// 0047b1c3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0047b1c7  8b11                 mov edx, dword ptr [ecx]
// 0047b1c9  8910                 mov dword ptr [eax], edx
// 0047b1cb  8b4904               mov ecx, dword ptr [ecx + 4]
// 0047b1ce  894804               mov dword ptr [eax + 4], ecx
// 0047b1d1  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

#include <typeinfo>
#include <new>

// boost::detail::function::functor_manager<F>::manage for a small, trivially copyable functor
// stored in place; 0xb3346c is typeid(F)
extern const type_info type_descriptor_b3346c;

struct Functor
{
    int f0, f1;
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
    char data[8];
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
        if (check_type == type_descriptor_b3346c)
            out_buffer.obj_ptr = (void *)&in_buffer.data;
        else
            out_buffer.obj_ptr = 0;
    } else {
        out_buffer.type.type = &type_descriptor_b3346c;
        out_buffer.type.const_qualified = false;
        out_buffer.type.volatile_qualified = false;
    }
}
// roc 2012-06 0047b090  unit: VCWorkspace::?$CComObject  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0047b090
//
// 0047b090  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0047b094  33c9                 xor ecx, ecx
// 0047b096  3bc1                 cmp eax, ecx
// 0047b098  7441                 je 0x47b0db
// 0047b09a  83f801               cmp eax, 1
// 0047b09d  743c                 je 0x47b0db
// 0047b09f  83f802               cmp eax, 2
// 0047b0a2  744d                 je 0x47b0f1
// 0047b0a4  83f803               cmp eax, 3
// 0047b0a7  7521                 jne 0x47b0ca
// 0047b0a9  56                   push esi
// 0047b0aa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0047b0ae  8b0e                 mov ecx, dword ptr [esi]
// 0047b0b0  68d0d9d600           push 0xd6d9d0
// 0047b0b5  ff15ec29b200         call dword ptr [0xb229ec]
// 0047b0bb  0fb6c0               movzx eax, al
// 0047b0be  f7d8                 neg eax
// 0047b0c0  1bc0                 sbb eax, eax
// 0047b0c2  23442408             and eax, dword ptr [esp + 8]
// 0047b0c6  8906                 mov dword ptr [esi], eax
// 0047b0c8  5e                   pop esi
// 0047b0c9  c3                   ret 
// 0047b0ca  8b442408             mov eax, dword ptr [esp + 8]
// 0047b0ce  c700d0d9d600         mov dword ptr [eax], 0xd6d9d0
// 0047b0d4  884804               mov byte ptr [eax + 4], cl
// 0047b0d7  884805               mov byte ptr [eax + 5], cl
// 0047b0da  c3                   ret 
// 0047b0db  8b442408             mov eax, dword ptr [esp + 8]
// 0047b0df  3bc1                 cmp eax, ecx
// 0047b0e1  740e                 je 0x47b0f1
// 0047b0e3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0047b0e7  8b11                 mov edx, dword ptr [ecx]
// 0047b0e9  8910                 mov dword ptr [eax], edx
// 0047b0eb  8b4904               mov ecx, dword ptr [ecx + 4]
// 0047b0ee  894804               mov dword ptr [eax + 4], ecx
// 0047b0f1  c3                   ret 
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
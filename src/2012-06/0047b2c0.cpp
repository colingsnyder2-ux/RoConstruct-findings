// roc 2012-06 0047b2c0  unit: VCWorkspace::?$CComObject  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0047b2c0
//
// 0047b2c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0047b2c4  33c9                 xor ecx, ecx
// 0047b2c6  3bc1                 cmp eax, ecx
// 0047b2c8  7441                 je 0x47b30b
// 0047b2ca  83f801               cmp eax, 1
// 0047b2cd  743c                 je 0x47b30b
// 0047b2cf  83f802               cmp eax, 2
// 0047b2d2  744d                 je 0x47b321
// 0047b2d4  83f803               cmp eax, 3
// 0047b2d7  7521                 jne 0x47b2fa
// 0047b2d9  56                   push esi
// 0047b2da  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0047b2de  8b0e                 mov ecx, dword ptr [esi]
// 0047b2e0  68e8dcd600           push 0xd6dce8
// 0047b2e5  ff15ec29b200         call dword ptr [0xb229ec]
// 0047b2eb  0fb6c0               movzx eax, al
// 0047b2ee  f7d8                 neg eax
// 0047b2f0  1bc0                 sbb eax, eax
// 0047b2f2  23442408             and eax, dword ptr [esp + 8]
// 0047b2f6  8906                 mov dword ptr [esi], eax
// 0047b2f8  5e                   pop esi
// 0047b2f9  c3                   ret 
// 0047b2fa  8b442408             mov eax, dword ptr [esp + 8]
// 0047b2fe  c700e8dcd600         mov dword ptr [eax], 0xd6dce8
// 0047b304  884804               mov byte ptr [eax + 4], cl
// 0047b307  884805               mov byte ptr [eax + 5], cl
// 0047b30a  c3                   ret 
// 0047b30b  8b442408             mov eax, dword ptr [esp + 8]
// 0047b30f  3bc1                 cmp eax, ecx
// 0047b311  740e                 je 0x47b321
// 0047b313  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0047b317  8b11                 mov edx, dword ptr [ecx]
// 0047b319  8910                 mov dword ptr [eax], edx
// 0047b31b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0047b31e  894804               mov dword ptr [eax + 4], ecx
// 0047b321  c3                   ret 
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
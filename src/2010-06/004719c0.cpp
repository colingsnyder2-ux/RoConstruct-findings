// roc 2010-06 004719c0  unit: CScriptEditor  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004719c0
//
// 004719c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004719c4  33c9                 xor ecx, ecx
// 004719c6  3bc1                 cmp eax, ecx
// 004719c8  7441                 je 0x471a0b
// 004719ca  83f801               cmp eax, 1
// 004719cd  743c                 je 0x471a0b
// 004719cf  83f802               cmp eax, 2
// 004719d2  744d                 je 0x471a21
// 004719d4  83f803               cmp eax, 3
// 004719d7  7521                 jne 0x4719fa
// 004719d9  56                   push esi
// 004719da  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004719de  8b0e                 mov ecx, dword ptr [esi]
// 004719e0  68a04fb800           push 0xb84fa0
// 004719e5  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 004719eb  0fb6c0               movzx eax, al
// 004719ee  f7d8                 neg eax
// 004719f0  1bc0                 sbb eax, eax
// 004719f2  23442408             and eax, dword ptr [esp + 8]
// 004719f6  8906                 mov dword ptr [esi], eax
// 004719f8  5e                   pop esi
// 004719f9  c3                   ret 
// 004719fa  8b442408             mov eax, dword ptr [esp + 8]
// 004719fe  c700a04fb800         mov dword ptr [eax], 0xb84fa0
// 00471a04  884804               mov byte ptr [eax + 4], cl
// 00471a07  884805               mov byte ptr [eax + 5], cl
// 00471a0a  c3                   ret 
// 00471a0b  8b442408             mov eax, dword ptr [esp + 8]
// 00471a0f  3bc1                 cmp eax, ecx
// 00471a11  740e                 je 0x471a21
// 00471a13  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00471a17  8b11                 mov edx, dword ptr [ecx]
// 00471a19  8910                 mov dword ptr [eax], edx
// 00471a1b  8b4904               mov ecx, dword ptr [ecx + 4]
// 00471a1e  894804               mov dword ptr [eax + 4], ecx
// 00471a21  c3                   ret 
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
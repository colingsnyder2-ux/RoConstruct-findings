// roc 2011-06 004f4f70  unit: RBX::VContentId::?$holder  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f4f70
//
// 004f4f70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004f4f74  33c9                 xor ecx, ecx
// 004f4f76  3bc1                 cmp eax, ecx
// 004f4f78  7441                 je 0x4f4fbb
// 004f4f7a  83f801               cmp eax, 1
// 004f4f7d  743c                 je 0x4f4fbb
// 004f4f7f  83f802               cmp eax, 2
// 004f4f82  744d                 je 0x4f4fd1
// 004f4f84  83f803               cmp eax, 3
// 004f4f87  7521                 jne 0x4f4faa
// 004f4f89  56                   push esi
// 004f4f8a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004f4f8e  8b0e                 mov ecx, dword ptr [esi]
// 004f4f90  68a8b3c200           push 0xc2b3a8
// 004f4f95  ff15500aa400         call dword ptr [0xa40a50]
// 004f4f9b  0fb6c0               movzx eax, al
// 004f4f9e  f7d8                 neg eax
// 004f4fa0  1bc0                 sbb eax, eax
// 004f4fa2  23442408             and eax, dword ptr [esp + 8]
// 004f4fa6  8906                 mov dword ptr [esi], eax
// 004f4fa8  5e                   pop esi
// 004f4fa9  c3                   ret 
// 004f4faa  8b442408             mov eax, dword ptr [esp + 8]
// 004f4fae  c700a8b3c200         mov dword ptr [eax], 0xc2b3a8
// 004f4fb4  884804               mov byte ptr [eax + 4], cl
// 004f4fb7  884805               mov byte ptr [eax + 5], cl
// 004f4fba  c3                   ret 
// 004f4fbb  8b442408             mov eax, dword ptr [esp + 8]
// 004f4fbf  3bc1                 cmp eax, ecx
// 004f4fc1  740e                 je 0x4f4fd1
// 004f4fc3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f4fc7  8b11                 mov edx, dword ptr [ecx]
// 004f4fc9  8910                 mov dword ptr [eax], edx
// 004f4fcb  8b4904               mov ecx, dword ptr [ecx + 4]
// 004f4fce  894804               mov dword ptr [eax + 4], ecx
// 004f4fd1  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
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
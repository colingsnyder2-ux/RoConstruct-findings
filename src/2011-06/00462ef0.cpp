// roc 2011-06 00462ef0  unit: CRobloxApp  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00462ef0
//
// 00462ef0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00462ef4  33c9                 xor ecx, ecx
// 00462ef6  3bc1                 cmp eax, ecx
// 00462ef8  7441                 je 0x462f3b
// 00462efa  83f801               cmp eax, 1
// 00462efd  743c                 je 0x462f3b
// 00462eff  83f802               cmp eax, 2
// 00462f02  744d                 je 0x462f51
// 00462f04  83f803               cmp eax, 3
// 00462f07  7521                 jne 0x462f2a
// 00462f09  56                   push esi
// 00462f0a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00462f0e  8b0e                 mov ecx, dword ptr [esi]
// 00462f10  681045c100           push 0xc14510
// 00462f15  ff15500aa400         call dword ptr [0xa40a50]
// 00462f1b  0fb6c0               movzx eax, al
// 00462f1e  f7d8                 neg eax
// 00462f20  1bc0                 sbb eax, eax
// 00462f22  23442408             and eax, dword ptr [esp + 8]
// 00462f26  8906                 mov dword ptr [esi], eax
// 00462f28  5e                   pop esi
// 00462f29  c3                   ret 
// 00462f2a  8b442408             mov eax, dword ptr [esp + 8]
// 00462f2e  c7001045c100         mov dword ptr [eax], 0xc14510
// 00462f34  884804               mov byte ptr [eax + 4], cl
// 00462f37  884805               mov byte ptr [eax + 5], cl
// 00462f3a  c3                   ret 
// 00462f3b  8b442408             mov eax, dword ptr [esp + 8]
// 00462f3f  3bc1                 cmp eax, ecx
// 00462f41  740e                 je 0x462f51
// 00462f43  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00462f47  8b11                 mov edx, dword ptr [ecx]
// 00462f49  8910                 mov dword ptr [eax], edx
// 00462f4b  8b4904               mov ecx, dword ptr [ecx + 4]
// 00462f4e  894804               mov dword ptr [eax + 4], ecx
// 00462f51  c3                   ret 
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
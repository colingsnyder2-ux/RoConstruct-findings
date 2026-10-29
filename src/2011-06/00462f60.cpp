// roc 2011-06 00462f60  unit: CRobloxApp  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00462f60
//
// 00462f60  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00462f64  33c9                 xor ecx, ecx
// 00462f66  3bc1                 cmp eax, ecx
// 00462f68  7441                 je 0x462fab
// 00462f6a  83f801               cmp eax, 1
// 00462f6d  743c                 je 0x462fab
// 00462f6f  83f802               cmp eax, 2
// 00462f72  744d                 je 0x462fc1
// 00462f74  83f803               cmp eax, 3
// 00462f77  7521                 jne 0x462f9a
// 00462f79  56                   push esi
// 00462f7a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00462f7e  8b0e                 mov ecx, dword ptr [esi]
// 00462f80  687845c100           push 0xc14578
// 00462f85  ff15500aa400         call dword ptr [0xa40a50]
// 00462f8b  0fb6c0               movzx eax, al
// 00462f8e  f7d8                 neg eax
// 00462f90  1bc0                 sbb eax, eax
// 00462f92  23442408             and eax, dword ptr [esp + 8]
// 00462f96  8906                 mov dword ptr [esi], eax
// 00462f98  5e                   pop esi
// 00462f99  c3                   ret 
// 00462f9a  8b442408             mov eax, dword ptr [esp + 8]
// 00462f9e  c7007845c100         mov dword ptr [eax], 0xc14578
// 00462fa4  884804               mov byte ptr [eax + 4], cl
// 00462fa7  884805               mov byte ptr [eax + 5], cl
// 00462faa  c3                   ret 
// 00462fab  8b442408             mov eax, dword ptr [esp + 8]
// 00462faf  3bc1                 cmp eax, ecx
// 00462fb1  740e                 je 0x462fc1
// 00462fb3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00462fb7  8b11                 mov edx, dword ptr [ecx]
// 00462fb9  8910                 mov dword ptr [eax], edx
// 00462fbb  8b4904               mov ecx, dword ptr [ecx + 4]
// 00462fbe  894804               mov dword ptr [eax + 4], ecx
// 00462fc1  c3                   ret 
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
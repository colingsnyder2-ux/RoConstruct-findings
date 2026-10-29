// roc 2009-06 0042f800  unit: COutputView  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042f800
//
// 0042f800  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042f804  33c9                 xor ecx, ecx
// 0042f806  3bc1                 cmp eax, ecx
// 0042f808  7441                 je 0x42f84b
// 0042f80a  83f801               cmp eax, 1
// 0042f80d  743c                 je 0x42f84b
// 0042f80f  83f802               cmp eax, 2
// 0042f812  744d                 je 0x42f861
// 0042f814  83f803               cmp eax, 3
// 0042f817  7521                 jne 0x42f83a
// 0042f819  56                   push esi
// 0042f81a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0042f81e  8b0e                 mov ecx, dword ptr [esi]
// 0042f820  6878129e00           push 0x9e1278
// 0042f825  ff15a4e98900         call dword ptr [0x89e9a4]
// 0042f82b  0fb6c0               movzx eax, al
// 0042f82e  f7d8                 neg eax
// 0042f830  1bc0                 sbb eax, eax
// 0042f832  23442408             and eax, dword ptr [esp + 8]
// 0042f836  8906                 mov dword ptr [esi], eax
// 0042f838  5e                   pop esi
// 0042f839  c3                   ret 
// 0042f83a  8b442408             mov eax, dword ptr [esp + 8]
// 0042f83e  c70078129e00         mov dword ptr [eax], 0x9e1278
// 0042f844  884804               mov byte ptr [eax + 4], cl
// 0042f847  884805               mov byte ptr [eax + 5], cl
// 0042f84a  c3                   ret 
// 0042f84b  8b442408             mov eax, dword ptr [esp + 8]
// 0042f84f  3bc1                 cmp eax, ecx
// 0042f851  740e                 je 0x42f861
// 0042f853  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0042f857  8b11                 mov edx, dword ptr [ecx]
// 0042f859  8910                 mov dword ptr [eax], edx
// 0042f85b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0042f85e  894804               mov dword ptr [eax + 4], ecx
// 0042f861  c3                   ret 
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
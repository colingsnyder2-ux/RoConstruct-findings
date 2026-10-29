// roc 2009-06 00431850  unit: CPropertyGridItemBrickColor  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00431850
//
// 00431850  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00431854  33c9                 xor ecx, ecx
// 00431856  3bc1                 cmp eax, ecx
// 00431858  7441                 je 0x43189b
// 0043185a  83f801               cmp eax, 1
// 0043185d  743c                 je 0x43189b
// 0043185f  83f802               cmp eax, 2
// 00431862  744d                 je 0x4318b1
// 00431864  83f803               cmp eax, 3
// 00431867  7521                 jne 0x43188a
// 00431869  56                   push esi
// 0043186a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0043186e  8b0e                 mov ecx, dword ptr [esi]
// 00431870  6890149e00           push 0x9e1490
// 00431875  ff15a4e98900         call dword ptr [0x89e9a4]
// 0043187b  0fb6c0               movzx eax, al
// 0043187e  f7d8                 neg eax
// 00431880  1bc0                 sbb eax, eax
// 00431882  23442408             and eax, dword ptr [esp + 8]
// 00431886  8906                 mov dword ptr [esi], eax
// 00431888  5e                   pop esi
// 00431889  c3                   ret 
// 0043188a  8b442408             mov eax, dword ptr [esp + 8]
// 0043188e  c70090149e00         mov dword ptr [eax], 0x9e1490
// 00431894  884804               mov byte ptr [eax + 4], cl
// 00431897  884805               mov byte ptr [eax + 5], cl
// 0043189a  c3                   ret 
// 0043189b  8b442408             mov eax, dword ptr [esp + 8]
// 0043189f  3bc1                 cmp eax, ecx
// 004318a1  740e                 je 0x4318b1
// 004318a3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004318a7  8b11                 mov edx, dword ptr [ecx]
// 004318a9  8910                 mov dword ptr [eax], edx
// 004318ab  8b4904               mov ecx, dword ptr [ecx + 4]
// 004318ae  894804               mov dword ptr [eax + 4], ecx
// 004318b1  c3                   ret 
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
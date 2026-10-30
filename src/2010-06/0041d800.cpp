// roc 2010-06 0041d800  unit: CSelectionTreeCtrl  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0041d800
//
// 0041d800  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041d804  33c9                 xor ecx, ecx
// 0041d806  3bc1                 cmp eax, ecx
// 0041d808  7441                 je 0x41d84b
// 0041d80a  83f801               cmp eax, 1
// 0041d80d  743c                 je 0x41d84b
// 0041d80f  83f802               cmp eax, 2
// 0041d812  744d                 je 0x41d861
// 0041d814  83f803               cmp eax, 3
// 0041d817  7521                 jne 0x41d83a
// 0041d819  56                   push esi
// 0041d81a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041d81e  8b0e                 mov ecx, dword ptr [esi]
// 0041d820  68d0cdb700           push 0xb7cdd0
// 0041d825  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0041d82b  0fb6c0               movzx eax, al
// 0041d82e  f7d8                 neg eax
// 0041d830  1bc0                 sbb eax, eax
// 0041d832  23442408             and eax, dword ptr [esp + 8]
// 0041d836  8906                 mov dword ptr [esi], eax
// 0041d838  5e                   pop esi
// 0041d839  c3                   ret 
// 0041d83a  8b442408             mov eax, dword ptr [esp + 8]
// 0041d83e  c700d0cdb700         mov dword ptr [eax], 0xb7cdd0
// 0041d844  884804               mov byte ptr [eax + 4], cl
// 0041d847  884805               mov byte ptr [eax + 5], cl
// 0041d84a  c3                   ret 
// 0041d84b  8b442408             mov eax, dword ptr [esp + 8]
// 0041d84f  3bc1                 cmp eax, ecx
// 0041d851  740e                 je 0x41d861
// 0041d853  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0041d857  8b11                 mov edx, dword ptr [ecx]
// 0041d859  8910                 mov dword ptr [eax], edx
// 0041d85b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0041d85e  894804               mov dword ptr [eax + 4], ecx
// 0041d861  c3                   ret 
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
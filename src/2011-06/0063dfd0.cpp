// roc 2011-06 0063dfd0  unit: RBX::Workspace  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063dfd0
//
// 0063dfd0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063dfd4  33c9                 xor ecx, ecx
// 0063dfd6  3bc1                 cmp eax, ecx
// 0063dfd8  7441                 je 0x63e01b
// 0063dfda  83f801               cmp eax, 1
// 0063dfdd  743c                 je 0x63e01b
// 0063dfdf  83f802               cmp eax, 2
// 0063dfe2  744d                 je 0x63e031
// 0063dfe4  83f803               cmp eax, 3
// 0063dfe7  7521                 jne 0x63e00a
// 0063dfe9  56                   push esi
// 0063dfea  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0063dfee  8b0e                 mov ecx, dword ptr [esi]
// 0063dff0  688815c500           push 0xc51588
// 0063dff5  ff15500aa400         call dword ptr [0xa40a50]
// 0063dffb  0fb6c0               movzx eax, al
// 0063dffe  f7d8                 neg eax
// 0063e000  1bc0                 sbb eax, eax
// 0063e002  23442408             and eax, dword ptr [esp + 8]
// 0063e006  8906                 mov dword ptr [esi], eax
// 0063e008  5e                   pop esi
// 0063e009  c3                   ret 
// 0063e00a  8b442408             mov eax, dword ptr [esp + 8]
// 0063e00e  c7008815c500         mov dword ptr [eax], 0xc51588
// 0063e014  884804               mov byte ptr [eax + 4], cl
// 0063e017  884805               mov byte ptr [eax + 5], cl
// 0063e01a  c3                   ret 
// 0063e01b  8b442408             mov eax, dword ptr [esp + 8]
// 0063e01f  3bc1                 cmp eax, ecx
// 0063e021  740e                 je 0x63e031
// 0063e023  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0063e027  8b11                 mov edx, dword ptr [ecx]
// 0063e029  8910                 mov dword ptr [eax], edx
// 0063e02b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0063e02e  894804               mov dword ptr [eax + 4], ecx
// 0063e031  c3                   ret 
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
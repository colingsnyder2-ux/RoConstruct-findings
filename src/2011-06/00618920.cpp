// roc 2011-06 00618920  unit: RBX::ScriptContext  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00618920
//
// 00618920  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00618924  33c9                 xor ecx, ecx
// 00618926  3bc1                 cmp eax, ecx
// 00618928  7441                 je 0x61896b
// 0061892a  83f801               cmp eax, 1
// 0061892d  743c                 je 0x61896b
// 0061892f  83f802               cmp eax, 2
// 00618932  744d                 je 0x618981
// 00618934  83f803               cmp eax, 3
// 00618937  7521                 jne 0x61895a
// 00618939  56                   push esi
// 0061893a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0061893e  8b0e                 mov ecx, dword ptr [esi]
// 00618940  6868a7c400           push 0xc4a768
// 00618945  ff15500aa400         call dword ptr [0xa40a50]
// 0061894b  0fb6c0               movzx eax, al
// 0061894e  f7d8                 neg eax
// 00618950  1bc0                 sbb eax, eax
// 00618952  23442408             and eax, dword ptr [esp + 8]
// 00618956  8906                 mov dword ptr [esi], eax
// 00618958  5e                   pop esi
// 00618959  c3                   ret 
// 0061895a  8b442408             mov eax, dword ptr [esp + 8]
// 0061895e  c70068a7c400         mov dword ptr [eax], 0xc4a768
// 00618964  884804               mov byte ptr [eax + 4], cl
// 00618967  884805               mov byte ptr [eax + 5], cl
// 0061896a  c3                   ret 
// 0061896b  8b442408             mov eax, dword ptr [esp + 8]
// 0061896f  3bc1                 cmp eax, ecx
// 00618971  740e                 je 0x618981
// 00618973  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00618977  8b11                 mov edx, dword ptr [ecx]
// 00618979  8910                 mov dword ptr [eax], edx
// 0061897b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0061897e  894804               mov dword ptr [eax + 4], ecx
// 00618981  c3                   ret 
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
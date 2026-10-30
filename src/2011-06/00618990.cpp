// roc 2011-06 00618990  unit: RBX::ScriptContext  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00618990
//
// 00618990  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00618994  33c9                 xor ecx, ecx
// 00618996  3bc1                 cmp eax, ecx
// 00618998  7441                 je 0x6189db
// 0061899a  83f801               cmp eax, 1
// 0061899d  743c                 je 0x6189db
// 0061899f  83f802               cmp eax, 2
// 006189a2  744d                 je 0x6189f1
// 006189a4  83f803               cmp eax, 3
// 006189a7  7521                 jne 0x6189ca
// 006189a9  56                   push esi
// 006189aa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006189ae  8b0e                 mov ecx, dword ptr [esi]
// 006189b0  68c8a7c400           push 0xc4a7c8
// 006189b5  ff15500aa400         call dword ptr [0xa40a50]
// 006189bb  0fb6c0               movzx eax, al
// 006189be  f7d8                 neg eax
// 006189c0  1bc0                 sbb eax, eax
// 006189c2  23442408             and eax, dword ptr [esp + 8]
// 006189c6  8906                 mov dword ptr [esi], eax
// 006189c8  5e                   pop esi
// 006189c9  c3                   ret 
// 006189ca  8b442408             mov eax, dword ptr [esp + 8]
// 006189ce  c700c8a7c400         mov dword ptr [eax], 0xc4a7c8
// 006189d4  884804               mov byte ptr [eax + 4], cl
// 006189d7  884805               mov byte ptr [eax + 5], cl
// 006189da  c3                   ret 
// 006189db  8b442408             mov eax, dword ptr [esp + 8]
// 006189df  3bc1                 cmp eax, ecx
// 006189e1  740e                 je 0x6189f1
// 006189e3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006189e7  8b11                 mov edx, dword ptr [ecx]
// 006189e9  8910                 mov dword ptr [eax], edx
// 006189eb  8b4904               mov ecx, dword ptr [ecx + 4]
// 006189ee  894804               mov dword ptr [eax + 4], ecx
// 006189f1  c3                   ret 
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
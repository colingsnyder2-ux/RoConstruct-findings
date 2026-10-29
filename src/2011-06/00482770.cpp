// roc 2011-06 00482770  unit: HelpCommand  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00482770
//
// 00482770  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00482774  33c9                 xor ecx, ecx
// 00482776  3bc1                 cmp eax, ecx
// 00482778  7441                 je 0x4827bb
// 0048277a  83f801               cmp eax, 1
// 0048277d  743c                 je 0x4827bb
// 0048277f  83f802               cmp eax, 2
// 00482782  744d                 je 0x4827d1
// 00482784  83f803               cmp eax, 3
// 00482787  7521                 jne 0x4827aa
// 00482789  56                   push esi
// 0048278a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0048278e  8b0e                 mov ecx, dword ptr [esi]
// 00482790  68c87cc100           push 0xc17cc8
// 00482795  ff15500aa400         call dword ptr [0xa40a50]
// 0048279b  0fb6c0               movzx eax, al
// 0048279e  f7d8                 neg eax
// 004827a0  1bc0                 sbb eax, eax
// 004827a2  23442408             and eax, dword ptr [esp + 8]
// 004827a6  8906                 mov dword ptr [esi], eax
// 004827a8  5e                   pop esi
// 004827a9  c3                   ret 
// 004827aa  8b442408             mov eax, dword ptr [esp + 8]
// 004827ae  c700c87cc100         mov dword ptr [eax], 0xc17cc8
// 004827b4  884804               mov byte ptr [eax + 4], cl
// 004827b7  884805               mov byte ptr [eax + 5], cl
// 004827ba  c3                   ret 
// 004827bb  8b442408             mov eax, dword ptr [esp + 8]
// 004827bf  3bc1                 cmp eax, ecx
// 004827c1  740e                 je 0x4827d1
// 004827c3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004827c7  8b11                 mov edx, dword ptr [ecx]
// 004827c9  8910                 mov dword ptr [eax], edx
// 004827cb  8b4904               mov ecx, dword ptr [ecx + 4]
// 004827ce  894804               mov dword ptr [eax + 4], ecx
// 004827d1  c3                   ret 
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
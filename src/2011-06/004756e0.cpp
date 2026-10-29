// roc 2011-06 004756e0  unit: RBX::BoundVerb  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004756e0
//
// 004756e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004756e4  33c9                 xor ecx, ecx
// 004756e6  3bc1                 cmp eax, ecx
// 004756e8  7441                 je 0x47572b
// 004756ea  83f801               cmp eax, 1
// 004756ed  743c                 je 0x47572b
// 004756ef  83f802               cmp eax, 2
// 004756f2  744d                 je 0x475741
// 004756f4  83f803               cmp eax, 3
// 004756f7  7521                 jne 0x47571a
// 004756f9  56                   push esi
// 004756fa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004756fe  8b0e                 mov ecx, dword ptr [esi]
// 00475700  681066c100           push 0xc16610
// 00475705  ff15500aa400         call dword ptr [0xa40a50]
// 0047570b  0fb6c0               movzx eax, al
// 0047570e  f7d8                 neg eax
// 00475710  1bc0                 sbb eax, eax
// 00475712  23442408             and eax, dword ptr [esp + 8]
// 00475716  8906                 mov dword ptr [esi], eax
// 00475718  5e                   pop esi
// 00475719  c3                   ret 
// 0047571a  8b442408             mov eax, dword ptr [esp + 8]
// 0047571e  c7001066c100         mov dword ptr [eax], 0xc16610
// 00475724  884804               mov byte ptr [eax + 4], cl
// 00475727  884805               mov byte ptr [eax + 5], cl
// 0047572a  c3                   ret 
// 0047572b  8b442408             mov eax, dword ptr [esp + 8]
// 0047572f  3bc1                 cmp eax, ecx
// 00475731  740e                 je 0x475741
// 00475733  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00475737  8b11                 mov edx, dword ptr [ecx]
// 00475739  8910                 mov dword ptr [eax], edx
// 0047573b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0047573e  894804               mov dword ptr [eax + 4], ecx
// 00475741  c3                   ret 
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
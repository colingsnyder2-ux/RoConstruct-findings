// roc 2010-06 00464bd0  unit: CRobloxView  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00464bd0
//
// 00464bd0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00464bd4  33c9                 xor ecx, ecx
// 00464bd6  3bc1                 cmp eax, ecx
// 00464bd8  7441                 je 0x464c1b
// 00464bda  83f801               cmp eax, 1
// 00464bdd  743c                 je 0x464c1b
// 00464bdf  83f802               cmp eax, 2
// 00464be2  7459                 je 0x464c3d
// 00464be4  83f803               cmp eax, 3
// 00464be7  7521                 jne 0x464c0a
// 00464be9  56                   push esi
// 00464bea  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00464bee  8b0e                 mov ecx, dword ptr [esi]
// 00464bf0  68883fb800           push 0xb83f88
// 00464bf5  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 00464bfb  0fb6c0               movzx eax, al
// 00464bfe  f7d8                 neg eax
// 00464c00  1bc0                 sbb eax, eax
// 00464c02  23442408             and eax, dword ptr [esp + 8]
// 00464c06  8906                 mov dword ptr [esi], eax
// 00464c08  5e                   pop esi
// 00464c09  c3                   ret 
// 00464c0a  8b442408             mov eax, dword ptr [esp + 8]
// 00464c0e  c700883fb800         mov dword ptr [eax], 0xb83f88
// 00464c14  884804               mov byte ptr [eax + 4], cl
// 00464c17  884805               mov byte ptr [eax + 5], cl
// 00464c1a  c3                   ret 
// 00464c1b  8b442408             mov eax, dword ptr [esp + 8]
// 00464c1f  3bc1                 cmp eax, ecx
// 00464c21  741a                 je 0x464c3d
// 00464c23  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00464c27  8b11                 mov edx, dword ptr [ecx]
// 00464c29  8910                 mov dword ptr [eax], edx
// 00464c2b  8b5104               mov edx, dword ptr [ecx + 4]
// 00464c2e  895004               mov dword ptr [eax + 4], edx
// 00464c31  8b5108               mov edx, dword ptr [ecx + 8]
// 00464c34  895008               mov dword ptr [eax + 8], edx
// 00464c37  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00464c3a  89480c               mov dword ptr [eax + 0xc], ecx
// 00464c3d  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

#include <typeinfo>
#include <new>

// boost::detail::function::functor_manager<F>::manage for a small, trivially copyable functor
// stored in place; 0xb33668 is typeid(F)
extern const type_info type_descriptor_b33668;

struct Functor
{
    int f0, f1, f2, f3;
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
    char data[16];
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
        if (check_type == type_descriptor_b33668)
            out_buffer.obj_ptr = (void *)&in_buffer.data;
        else
            out_buffer.obj_ptr = 0;
    } else {
        out_buffer.type.type = &type_descriptor_b33668;
        out_buffer.type.const_qualified = false;
        out_buffer.type.volatile_qualified = false;
    }
}
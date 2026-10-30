// roc 2010-06 0065f100  unit: RBX::Backpack  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0065f100
//
// 0065f100  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0065f104  33c9                 xor ecx, ecx
// 0065f106  3bc1                 cmp eax, ecx
// 0065f108  7441                 je 0x65f14b
// 0065f10a  83f801               cmp eax, 1
// 0065f10d  743c                 je 0x65f14b
// 0065f10f  83f802               cmp eax, 2
// 0065f112  744d                 je 0x65f161
// 0065f114  83f803               cmp eax, 3
// 0065f117  7521                 jne 0x65f13a
// 0065f119  56                   push esi
// 0065f11a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065f11e  8b0e                 mov ecx, dword ptr [esi]
// 0065f120  6818b6bb00           push 0xbbb618
// 0065f125  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0065f12b  0fb6c0               movzx eax, al
// 0065f12e  f7d8                 neg eax
// 0065f130  1bc0                 sbb eax, eax
// 0065f132  23442408             and eax, dword ptr [esp + 8]
// 0065f136  8906                 mov dword ptr [esi], eax
// 0065f138  5e                   pop esi
// 0065f139  c3                   ret 
// 0065f13a  8b442408             mov eax, dword ptr [esp + 8]
// 0065f13e  c70018b6bb00         mov dword ptr [eax], 0xbbb618
// 0065f144  884804               mov byte ptr [eax + 4], cl
// 0065f147  884805               mov byte ptr [eax + 5], cl
// 0065f14a  c3                   ret 
// 0065f14b  8b442408             mov eax, dword ptr [esp + 8]
// 0065f14f  3bc1                 cmp eax, ecx
// 0065f151  740e                 je 0x65f161
// 0065f153  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0065f157  8b11                 mov edx, dword ptr [ecx]
// 0065f159  8910                 mov dword ptr [eax], edx
// 0065f15b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0065f15e  894804               mov dword ptr [eax + 4], ecx
// 0065f161  c3                   ret 
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
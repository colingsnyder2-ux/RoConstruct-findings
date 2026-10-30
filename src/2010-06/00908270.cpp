// roc 2010-06 00908270  unit: Ogre::RbxCluster  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00908270
//
// 00908270  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00908274  33c9                 xor ecx, ecx
// 00908276  3bc1                 cmp eax, ecx
// 00908278  7441                 je 0x9082bb
// 0090827a  83f801               cmp eax, 1
// 0090827d  743c                 je 0x9082bb
// 0090827f  83f802               cmp eax, 2
// 00908282  744d                 je 0x9082d1
// 00908284  83f803               cmp eax, 3
// 00908287  7521                 jne 0x9082aa
// 00908289  56                   push esi
// 0090828a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0090828e  8b0e                 mov ecx, dword ptr [esi]
// 00908290  68d8e8bf00           push 0xbfe8d8
// 00908295  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0090829b  0fb6c0               movzx eax, al
// 0090829e  f7d8                 neg eax
// 009082a0  1bc0                 sbb eax, eax
// 009082a2  23442408             and eax, dword ptr [esp + 8]
// 009082a6  8906                 mov dword ptr [esi], eax
// 009082a8  5e                   pop esi
// 009082a9  c3                   ret 
// 009082aa  8b442408             mov eax, dword ptr [esp + 8]
// 009082ae  c700d8e8bf00         mov dword ptr [eax], 0xbfe8d8
// 009082b4  884804               mov byte ptr [eax + 4], cl
// 009082b7  884805               mov byte ptr [eax + 5], cl
// 009082ba  c3                   ret 
// 009082bb  8b442408             mov eax, dword ptr [esp + 8]
// 009082bf  3bc1                 cmp eax, ecx
// 009082c1  740e                 je 0x9082d1
// 009082c3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009082c7  8b11                 mov edx, dword ptr [ecx]
// 009082c9  8910                 mov dword ptr [eax], edx
// 009082cb  8b4904               mov ecx, dword ptr [ecx + 4]
// 009082ce  894804               mov dword ptr [eax + 4], ecx
// 009082d1  c3                   ret 
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
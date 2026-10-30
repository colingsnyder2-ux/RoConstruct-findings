// roc 2009-06 0047d860  unit: Ogre::ManualObject  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0047d860
//
// 0047d860  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0047d864  33c9                 xor ecx, ecx
// 0047d866  3bc1                 cmp eax, ecx
// 0047d868  7441                 je 0x47d8ab
// 0047d86a  83f801               cmp eax, 1
// 0047d86d  743c                 je 0x47d8ab
// 0047d86f  83f802               cmp eax, 2
// 0047d872  7459                 je 0x47d8cd
// 0047d874  83f803               cmp eax, 3
// 0047d877  7521                 jne 0x47d89a
// 0047d879  56                   push esi
// 0047d87a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0047d87e  8b0e                 mov ecx, dword ptr [esi]
// 0047d880  68989b9e00           push 0x9e9b98
// 0047d885  ff15a4e98900         call dword ptr [0x89e9a4]
// 0047d88b  0fb6c0               movzx eax, al
// 0047d88e  f7d8                 neg eax
// 0047d890  1bc0                 sbb eax, eax
// 0047d892  23442408             and eax, dword ptr [esp + 8]
// 0047d896  8906                 mov dword ptr [esi], eax
// 0047d898  5e                   pop esi
// 0047d899  c3                   ret 
// 0047d89a  8b442408             mov eax, dword ptr [esp + 8]
// 0047d89e  c700989b9e00         mov dword ptr [eax], 0x9e9b98
// 0047d8a4  884804               mov byte ptr [eax + 4], cl
// 0047d8a7  884805               mov byte ptr [eax + 5], cl
// 0047d8aa  c3                   ret 
// 0047d8ab  8b442408             mov eax, dword ptr [esp + 8]
// 0047d8af  3bc1                 cmp eax, ecx
// 0047d8b1  741a                 je 0x47d8cd
// 0047d8b3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0047d8b7  8b11                 mov edx, dword ptr [ecx]
// 0047d8b9  8910                 mov dword ptr [eax], edx
// 0047d8bb  8b5104               mov edx, dword ptr [ecx + 4]
// 0047d8be  895004               mov dword ptr [eax + 4], edx
// 0047d8c1  8b5108               mov edx, dword ptr [ecx + 8]
// 0047d8c4  895008               mov dword ptr [eax + 8], edx
// 0047d8c7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0047d8ca  89480c               mov dword ptr [eax + 0xc], ecx
// 0047d8cd  c3                   ret 
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
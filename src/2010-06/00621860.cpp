// roc 2010-06 00621860  unit: RBX::DropperTool  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00621860
//
// 00621860  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00621864  33c9                 xor ecx, ecx
// 00621866  3bc1                 cmp eax, ecx
// 00621868  7441                 je 0x6218ab
// 0062186a  83f801               cmp eax, 1
// 0062186d  743c                 je 0x6218ab
// 0062186f  83f802               cmp eax, 2
// 00621872  7459                 je 0x6218cd
// 00621874  83f803               cmp eax, 3
// 00621877  7521                 jne 0x62189a
// 00621879  56                   push esi
// 0062187a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062187e  8b0e                 mov ecx, dword ptr [esi]
// 00621880  68d00dbb00           push 0xbb0dd0
// 00621885  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0062188b  0fb6c0               movzx eax, al
// 0062188e  f7d8                 neg eax
// 00621890  1bc0                 sbb eax, eax
// 00621892  23442408             and eax, dword ptr [esp + 8]
// 00621896  8906                 mov dword ptr [esi], eax
// 00621898  5e                   pop esi
// 00621899  c3                   ret 
// 0062189a  8b442408             mov eax, dword ptr [esp + 8]
// 0062189e  c700d00dbb00         mov dword ptr [eax], 0xbb0dd0
// 006218a4  884804               mov byte ptr [eax + 4], cl
// 006218a7  884805               mov byte ptr [eax + 5], cl
// 006218aa  c3                   ret 
// 006218ab  8b442408             mov eax, dword ptr [esp + 8]
// 006218af  3bc1                 cmp eax, ecx
// 006218b1  741a                 je 0x6218cd
// 006218b3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006218b7  8b11                 mov edx, dword ptr [ecx]
// 006218b9  8910                 mov dword ptr [eax], edx
// 006218bb  8b5104               mov edx, dword ptr [ecx + 4]
// 006218be  895004               mov dword ptr [eax + 4], edx
// 006218c1  8b5108               mov edx, dword ptr [ecx + 8]
// 006218c4  895008               mov dword ptr [eax + 8], edx
// 006218c7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 006218ca  89480c               mov dword ptr [eax + 0xc], ecx
// 006218cd  c3                   ret 
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
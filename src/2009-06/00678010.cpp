// roc 2009-06 00678010  unit: RBX::Message  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00678010
//
// 00678010  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00678014  33c9                 xor ecx, ecx
// 00678016  3bc1                 cmp eax, ecx
// 00678018  7441                 je 0x67805b
// 0067801a  83f801               cmp eax, 1
// 0067801d  743c                 je 0x67805b
// 0067801f  83f802               cmp eax, 2
// 00678022  7459                 je 0x67807d
// 00678024  83f803               cmp eax, 3
// 00678027  7521                 jne 0x67804a
// 00678029  56                   push esi
// 0067802a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0067802e  8b0e                 mov ecx, dword ptr [esi]
// 00678030  685881a100           push 0xa18158
// 00678035  ff15a4e98900         call dword ptr [0x89e9a4]
// 0067803b  0fb6c0               movzx eax, al
// 0067803e  f7d8                 neg eax
// 00678040  1bc0                 sbb eax, eax
// 00678042  23442408             and eax, dword ptr [esp + 8]
// 00678046  8906                 mov dword ptr [esi], eax
// 00678048  5e                   pop esi
// 00678049  c3                   ret 
// 0067804a  8b442408             mov eax, dword ptr [esp + 8]
// 0067804e  c7005881a100         mov dword ptr [eax], 0xa18158
// 00678054  884804               mov byte ptr [eax + 4], cl
// 00678057  884805               mov byte ptr [eax + 5], cl
// 0067805a  c3                   ret 
// 0067805b  8b442408             mov eax, dword ptr [esp + 8]
// 0067805f  3bc1                 cmp eax, ecx
// 00678061  741a                 je 0x67807d
// 00678063  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00678067  8b11                 mov edx, dword ptr [ecx]
// 00678069  8910                 mov dword ptr [eax], edx
// 0067806b  8b5104               mov edx, dword ptr [ecx + 4]
// 0067806e  895004               mov dword ptr [eax + 4], edx
// 00678071  8b5108               mov edx, dword ptr [ecx + 8]
// 00678074  895008               mov dword ptr [eax + 8], edx
// 00678077  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0067807a  89480c               mov dword ptr [eax + 0xc], ecx
// 0067807d  c3                   ret 
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
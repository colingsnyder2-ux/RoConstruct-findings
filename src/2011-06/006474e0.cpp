// roc 2011-06 006474e0  unit: RBX::CoreGuiService  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006474e0
//
// 006474e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006474e4  33c9                 xor ecx, ecx
// 006474e6  3bc1                 cmp eax, ecx
// 006474e8  7441                 je 0x64752b
// 006474ea  83f801               cmp eax, 1
// 006474ed  743c                 je 0x64752b
// 006474ef  83f802               cmp eax, 2
// 006474f2  7465                 je 0x647559
// 006474f4  83f803               cmp eax, 3
// 006474f7  7521                 jne 0x64751a
// 006474f9  56                   push esi
// 006474fa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006474fe  8b0e                 mov ecx, dword ptr [esi]
// 00647500  68502cc500           push 0xc52c50
// 00647505  ff15500aa400         call dword ptr [0xa40a50]
// 0064750b  0fb6c0               movzx eax, al
// 0064750e  f7d8                 neg eax
// 00647510  1bc0                 sbb eax, eax
// 00647512  23442408             and eax, dword ptr [esp + 8]
// 00647516  8906                 mov dword ptr [esi], eax
// 00647518  5e                   pop esi
// 00647519  c3                   ret 
// 0064751a  8b442408             mov eax, dword ptr [esp + 8]
// 0064751e  c700502cc500         mov dword ptr [eax], 0xc52c50
// 00647524  884804               mov byte ptr [eax + 4], cl
// 00647527  884805               mov byte ptr [eax + 5], cl
// 0064752a  c3                   ret 
// 0064752b  8b442408             mov eax, dword ptr [esp + 8]
// 0064752f  3bc1                 cmp eax, ecx
// 00647531  7426                 je 0x647559
// 00647533  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00647537  8b11                 mov edx, dword ptr [ecx]
// 00647539  8910                 mov dword ptr [eax], edx
// 0064753b  8b5104               mov edx, dword ptr [ecx + 4]
// 0064753e  895004               mov dword ptr [eax + 4], edx
// 00647541  8b5108               mov edx, dword ptr [ecx + 8]
// 00647544  895008               mov dword ptr [eax + 8], edx
// 00647547  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0064754a  89500c               mov dword ptr [eax + 0xc], edx
// 0064754d  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00647550  895010               mov dword ptr [eax + 0x10], edx
// 00647553  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 00647556  894814               mov dword ptr [eax + 0x14], ecx
// 00647559  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

#include <typeinfo>
#include <new>

// boost::detail::function::functor_manager<F>::manage for a small, trivially copyable functor
// stored in place; 0xb2f1b0 is typeid(F)
extern const type_info type_descriptor_b2f1b0;

struct Functor
{
    int f0, f1, f2, f3, f4, f5;
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
    char data[24];
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
        if (check_type == type_descriptor_b2f1b0)
            out_buffer.obj_ptr = (void *)&in_buffer.data;
        else
            out_buffer.obj_ptr = 0;
    } else {
        out_buffer.type.type = &type_descriptor_b2f1b0;
        out_buffer.type.const_qualified = false;
        out_buffer.type.volatile_qualified = false;
    }
}
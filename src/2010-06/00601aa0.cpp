// roc 2010-06 00601aa0  unit: RBX::Workspace  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00601aa0
//
// 00601aa0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00601aa4  33c9                 xor ecx, ecx
// 00601aa6  3bc1                 cmp eax, ecx
// 00601aa8  7441                 je 0x601aeb
// 00601aaa  83f801               cmp eax, 1
// 00601aad  743c                 je 0x601aeb
// 00601aaf  83f802               cmp eax, 2
// 00601ab2  7459                 je 0x601b0d
// 00601ab4  83f803               cmp eax, 3
// 00601ab7  7521                 jne 0x601ada
// 00601ab9  56                   push esi
// 00601aba  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00601abe  8b0e                 mov ecx, dword ptr [esi]
// 00601ac0  6848eaba00           push 0xbaea48
// 00601ac5  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 00601acb  0fb6c0               movzx eax, al
// 00601ace  f7d8                 neg eax
// 00601ad0  1bc0                 sbb eax, eax
// 00601ad2  23442408             and eax, dword ptr [esp + 8]
// 00601ad6  8906                 mov dword ptr [esi], eax
// 00601ad8  5e                   pop esi
// 00601ad9  c3                   ret 
// 00601ada  8b442408             mov eax, dword ptr [esp + 8]
// 00601ade  c70048eaba00         mov dword ptr [eax], 0xbaea48
// 00601ae4  884804               mov byte ptr [eax + 4], cl
// 00601ae7  884805               mov byte ptr [eax + 5], cl
// 00601aea  c3                   ret 
// 00601aeb  8b442408             mov eax, dword ptr [esp + 8]
// 00601aef  3bc1                 cmp eax, ecx
// 00601af1  741a                 je 0x601b0d
// 00601af3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00601af7  8b11                 mov edx, dword ptr [ecx]
// 00601af9  8910                 mov dword ptr [eax], edx
// 00601afb  8b5104               mov edx, dword ptr [ecx + 4]
// 00601afe  895004               mov dword ptr [eax + 4], edx
// 00601b01  8b5108               mov edx, dword ptr [ecx + 8]
// 00601b04  895008               mov dword ptr [eax + 8], edx
// 00601b07  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00601b0a  89480c               mov dword ptr [eax + 0xc], ecx
// 00601b0d  c3                   ret 
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
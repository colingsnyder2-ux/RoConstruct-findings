// roc 2010-06 0060bcb0  unit: RBX::ScriptContext  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060bcb0
//
// 0060bcb0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0060bcb4  33c9                 xor ecx, ecx
// 0060bcb6  3bc1                 cmp eax, ecx
// 0060bcb8  7441                 je 0x60bcfb
// 0060bcba  83f801               cmp eax, 1
// 0060bcbd  743c                 je 0x60bcfb
// 0060bcbf  83f802               cmp eax, 2
// 0060bcc2  7459                 je 0x60bd1d
// 0060bcc4  83f803               cmp eax, 3
// 0060bcc7  7521                 jne 0x60bcea
// 0060bcc9  56                   push esi
// 0060bcca  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0060bcce  8b0e                 mov ecx, dword ptr [esi]
// 0060bcd0  6870fbba00           push 0xbafb70
// 0060bcd5  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0060bcdb  0fb6c0               movzx eax, al
// 0060bcde  f7d8                 neg eax
// 0060bce0  1bc0                 sbb eax, eax
// 0060bce2  23442408             and eax, dword ptr [esp + 8]
// 0060bce6  8906                 mov dword ptr [esi], eax
// 0060bce8  5e                   pop esi
// 0060bce9  c3                   ret 
// 0060bcea  8b442408             mov eax, dword ptr [esp + 8]
// 0060bcee  c70070fbba00         mov dword ptr [eax], 0xbafb70
// 0060bcf4  884804               mov byte ptr [eax + 4], cl
// 0060bcf7  884805               mov byte ptr [eax + 5], cl
// 0060bcfa  c3                   ret 
// 0060bcfb  8b442408             mov eax, dword ptr [esp + 8]
// 0060bcff  3bc1                 cmp eax, ecx
// 0060bd01  741a                 je 0x60bd1d
// 0060bd03  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060bd07  8b11                 mov edx, dword ptr [ecx]
// 0060bd09  8910                 mov dword ptr [eax], edx
// 0060bd0b  8b5104               mov edx, dword ptr [ecx + 4]
// 0060bd0e  895004               mov dword ptr [eax + 4], edx
// 0060bd11  8b5108               mov edx, dword ptr [ecx + 8]
// 0060bd14  895008               mov dword ptr [eax + 8], edx
// 0060bd17  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0060bd1a  89480c               mov dword ptr [eax + 0xc], ecx
// 0060bd1d  c3                   ret 
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
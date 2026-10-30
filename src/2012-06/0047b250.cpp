// roc 2012-06 0047b250  unit: VCWorkspace::?$CComObject  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0047b250
//
// 0047b250  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0047b254  33c9                 xor ecx, ecx
// 0047b256  3bc1                 cmp eax, ecx
// 0047b258  7441                 je 0x47b29b
// 0047b25a  83f801               cmp eax, 1
// 0047b25d  743c                 je 0x47b29b
// 0047b25f  83f802               cmp eax, 2
// 0047b262  7459                 je 0x47b2bd
// 0047b264  83f803               cmp eax, 3
// 0047b267  7521                 jne 0x47b28a
// 0047b269  56                   push esi
// 0047b26a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0047b26e  8b0e                 mov ecx, dword ptr [esi]
// 0047b270  6848dcd600           push 0xd6dc48
// 0047b275  ff15ec29b200         call dword ptr [0xb229ec]
// 0047b27b  0fb6c0               movzx eax, al
// 0047b27e  f7d8                 neg eax
// 0047b280  1bc0                 sbb eax, eax
// 0047b282  23442408             and eax, dword ptr [esp + 8]
// 0047b286  8906                 mov dword ptr [esi], eax
// 0047b288  5e                   pop esi
// 0047b289  c3                   ret 
// 0047b28a  8b442408             mov eax, dword ptr [esp + 8]
// 0047b28e  c70048dcd600         mov dword ptr [eax], 0xd6dc48
// 0047b294  884804               mov byte ptr [eax + 4], cl
// 0047b297  884805               mov byte ptr [eax + 5], cl
// 0047b29a  c3                   ret 
// 0047b29b  8b442408             mov eax, dword ptr [esp + 8]
// 0047b29f  3bc1                 cmp eax, ecx
// 0047b2a1  741a                 je 0x47b2bd
// 0047b2a3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0047b2a7  8b11                 mov edx, dword ptr [ecx]
// 0047b2a9  8910                 mov dword ptr [eax], edx
// 0047b2ab  8b5104               mov edx, dword ptr [ecx + 4]
// 0047b2ae  895004               mov dword ptr [eax + 4], edx
// 0047b2b1  8b5108               mov edx, dword ptr [ecx + 8]
// 0047b2b4  895008               mov dword ptr [eax + 8], edx
// 0047b2b7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0047b2ba  89480c               mov dword ptr [eax + 0xc], ecx
// 0047b2bd  c3                   ret 
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
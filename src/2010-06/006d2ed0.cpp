// roc 2010-06 006d2ed0  unit: InsertService  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d2ed0
//
// 006d2ed0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006d2ed4  33c9                 xor ecx, ecx
// 006d2ed6  3bc1                 cmp eax, ecx
// 006d2ed8  7441                 je 0x6d2f1b
// 006d2eda  83f801               cmp eax, 1
// 006d2edd  743c                 je 0x6d2f1b
// 006d2edf  83f802               cmp eax, 2
// 006d2ee2  7465                 je 0x6d2f49
// 006d2ee4  83f803               cmp eax, 3
// 006d2ee7  7521                 jne 0x6d2f0a
// 006d2ee9  56                   push esi
// 006d2eea  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006d2eee  8b0e                 mov ecx, dword ptr [esi]
// 006d2ef0  680848bd00           push 0xbd4808
// 006d2ef5  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 006d2efb  0fb6c0               movzx eax, al
// 006d2efe  f7d8                 neg eax
// 006d2f00  1bc0                 sbb eax, eax
// 006d2f02  23442408             and eax, dword ptr [esp + 8]
// 006d2f06  8906                 mov dword ptr [esi], eax
// 006d2f08  5e                   pop esi
// 006d2f09  c3                   ret 
// 006d2f0a  8b442408             mov eax, dword ptr [esp + 8]
// 006d2f0e  c7000848bd00         mov dword ptr [eax], 0xbd4808
// 006d2f14  884804               mov byte ptr [eax + 4], cl
// 006d2f17  884805               mov byte ptr [eax + 5], cl
// 006d2f1a  c3                   ret 
// 006d2f1b  8b442408             mov eax, dword ptr [esp + 8]
// 006d2f1f  3bc1                 cmp eax, ecx
// 006d2f21  7426                 je 0x6d2f49
// 006d2f23  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006d2f27  8b11                 mov edx, dword ptr [ecx]
// 006d2f29  8910                 mov dword ptr [eax], edx
// 006d2f2b  8b5104               mov edx, dword ptr [ecx + 4]
// 006d2f2e  895004               mov dword ptr [eax + 4], edx
// 006d2f31  8b5108               mov edx, dword ptr [ecx + 8]
// 006d2f34  895008               mov dword ptr [eax + 8], edx
// 006d2f37  8b510c               mov edx, dword ptr [ecx + 0xc]
// 006d2f3a  89500c               mov dword ptr [eax + 0xc], edx
// 006d2f3d  8b5110               mov edx, dword ptr [ecx + 0x10]
// 006d2f40  895010               mov dword ptr [eax + 0x10], edx
// 006d2f43  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 006d2f46  894814               mov dword ptr [eax + 0x14], ecx
// 006d2f49  c3                   ret 
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
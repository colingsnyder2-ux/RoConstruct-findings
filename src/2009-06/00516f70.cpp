// roc 2009-06 00516f70  unit: RBX::MeshRefPartAdapter  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00516f70
//
// 00516f70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00516f74  33c9                 xor ecx, ecx
// 00516f76  3bc1                 cmp eax, ecx
// 00516f78  7441                 je 0x516fbb
// 00516f7a  83f801               cmp eax, 1
// 00516f7d  743c                 je 0x516fbb
// 00516f7f  83f802               cmp eax, 2
// 00516f82  7459                 je 0x516fdd
// 00516f84  83f803               cmp eax, 3
// 00516f87  7521                 jne 0x516faa
// 00516f89  56                   push esi
// 00516f8a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00516f8e  8b0e                 mov ecx, dword ptr [esi]
// 00516f90  6818a99f00           push 0x9fa918
// 00516f95  ff15a4e98900         call dword ptr [0x89e9a4]
// 00516f9b  0fb6c0               movzx eax, al
// 00516f9e  f7d8                 neg eax
// 00516fa0  1bc0                 sbb eax, eax
// 00516fa2  23442408             and eax, dword ptr [esp + 8]
// 00516fa6  8906                 mov dword ptr [esi], eax
// 00516fa8  5e                   pop esi
// 00516fa9  c3                   ret 
// 00516faa  8b442408             mov eax, dword ptr [esp + 8]
// 00516fae  c70018a99f00         mov dword ptr [eax], 0x9fa918
// 00516fb4  884804               mov byte ptr [eax + 4], cl
// 00516fb7  884805               mov byte ptr [eax + 5], cl
// 00516fba  c3                   ret 
// 00516fbb  8b442408             mov eax, dword ptr [esp + 8]
// 00516fbf  3bc1                 cmp eax, ecx
// 00516fc1  741a                 je 0x516fdd
// 00516fc3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00516fc7  8b11                 mov edx, dword ptr [ecx]
// 00516fc9  8910                 mov dword ptr [eax], edx
// 00516fcb  8b5104               mov edx, dword ptr [ecx + 4]
// 00516fce  895004               mov dword ptr [eax + 4], edx
// 00516fd1  8b5108               mov edx, dword ptr [ecx + 8]
// 00516fd4  895008               mov dword ptr [eax + 8], edx
// 00516fd7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00516fda  89480c               mov dword ptr [eax + 0xc], ecx
// 00516fdd  c3                   ret 
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
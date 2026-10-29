// roc 2010-06 0041ae90  unit: CXTPReportGroupRow_Batch  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0041ae90
//
// 0041ae90  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041ae94  33c9                 xor ecx, ecx
// 0041ae96  3bc1                 cmp eax, ecx
// 0041ae98  7441                 je 0x41aedb
// 0041ae9a  83f801               cmp eax, 1
// 0041ae9d  743c                 je 0x41aedb
// 0041ae9f  83f802               cmp eax, 2
// 0041aea2  744d                 je 0x41aef1
// 0041aea4  83f803               cmp eax, 3
// 0041aea7  7521                 jne 0x41aeca
// 0041aea9  56                   push esi
// 0041aeaa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041aeae  8b0e                 mov ecx, dword ptr [esi]
// 0041aeb0  6838cab700           push 0xb7ca38
// 0041aeb5  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0041aebb  0fb6c0               movzx eax, al
// 0041aebe  f7d8                 neg eax
// 0041aec0  1bc0                 sbb eax, eax
// 0041aec2  23442408             and eax, dword ptr [esp + 8]
// 0041aec6  8906                 mov dword ptr [esi], eax
// 0041aec8  5e                   pop esi
// 0041aec9  c3                   ret 
// 0041aeca  8b442408             mov eax, dword ptr [esp + 8]
// 0041aece  c70038cab700         mov dword ptr [eax], 0xb7ca38
// 0041aed4  884804               mov byte ptr [eax + 4], cl
// 0041aed7  884805               mov byte ptr [eax + 5], cl
// 0041aeda  c3                   ret 
// 0041aedb  8b442408             mov eax, dword ptr [esp + 8]
// 0041aedf  3bc1                 cmp eax, ecx
// 0041aee1  740e                 je 0x41aef1
// 0041aee3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0041aee7  8b11                 mov edx, dword ptr [ecx]
// 0041aee9  8910                 mov dword ptr [eax], edx
// 0041aeeb  8b4904               mov ecx, dword ptr [ecx + 4]
// 0041aeee  894804               mov dword ptr [eax + 4], ecx
// 0041aef1  c3                   ret 
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
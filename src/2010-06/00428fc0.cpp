// roc 2010-06 00428fc0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$sp_counted_impl_p  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00428fc0
//
// 00428fc0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00428fc4  33c9                 xor ecx, ecx
// 00428fc6  3bc1                 cmp eax, ecx
// 00428fc8  7441                 je 0x42900b
// 00428fca  83f801               cmp eax, 1
// 00428fcd  743c                 je 0x42900b
// 00428fcf  83f802               cmp eax, 2
// 00428fd2  745f                 je 0x429033
// 00428fd4  83f803               cmp eax, 3
// 00428fd7  7521                 jne 0x428ffa
// 00428fd9  56                   push esi
// 00428fda  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00428fde  8b0e                 mov ecx, dword ptr [esi]
// 00428fe0  68c8dcb700           push 0xb7dcc8
// 00428fe5  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 00428feb  0fb6c0               movzx eax, al
// 00428fee  f7d8                 neg eax
// 00428ff0  1bc0                 sbb eax, eax
// 00428ff2  23442408             and eax, dword ptr [esp + 8]
// 00428ff6  8906                 mov dword ptr [esi], eax
// 00428ff8  5e                   pop esi
// 00428ff9  c3                   ret 
// 00428ffa  8b442408             mov eax, dword ptr [esp + 8]
// 00428ffe  c700c8dcb700         mov dword ptr [eax], 0xb7dcc8
// 00429004  884804               mov byte ptr [eax + 4], cl
// 00429007  884805               mov byte ptr [eax + 5], cl
// 0042900a  c3                   ret 
// 0042900b  8b442408             mov eax, dword ptr [esp + 8]
// 0042900f  3bc1                 cmp eax, ecx
// 00429011  7420                 je 0x429033
// 00429013  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00429017  8b11                 mov edx, dword ptr [ecx]
// 00429019  8910                 mov dword ptr [eax], edx
// 0042901b  8b5104               mov edx, dword ptr [ecx + 4]
// 0042901e  895004               mov dword ptr [eax + 4], edx
// 00429021  8b5108               mov edx, dword ptr [ecx + 8]
// 00429024  895008               mov dword ptr [eax + 8], edx
// 00429027  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0042902a  89500c               mov dword ptr [eax + 0xc], edx
// 0042902d  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00429030  894810               mov dword ptr [eax + 0x10], ecx
// 00429033  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

#include <typeinfo>
#include <new>

// boost::detail::function::functor_manager<F>::manage for a small, trivially copyable functor
// stored in place; 0xb04cc8 is typeid(F)
extern const type_info type_descriptor_b04cc8;

struct Functor
{
    int f0, f1, f2, f3, f4;
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
    char data[20];
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
        if (check_type == type_descriptor_b04cc8)
            out_buffer.obj_ptr = (void *)&in_buffer.data;
        else
            out_buffer.obj_ptr = 0;
    } else {
        out_buffer.type.type = &type_descriptor_b04cc8;
        out_buffer.type.const_qualified = false;
        out_buffer.type.volatile_qualified = false;
    }
}
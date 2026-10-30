// roc 2009-06 005d33f0  unit: RBX::VInstance::?$EventDesc  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d33f0
//
// 005d33f0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005d33f4  33c9                 xor ecx, ecx
// 005d33f6  3bc1                 cmp eax, ecx
// 005d33f8  7441                 je 0x5d343b
// 005d33fa  83f801               cmp eax, 1
// 005d33fd  743c                 je 0x5d343b
// 005d33ff  83f802               cmp eax, 2
// 005d3402  7459                 je 0x5d345d
// 005d3404  83f803               cmp eax, 3
// 005d3407  7521                 jne 0x5d342a
// 005d3409  56                   push esi
// 005d340a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005d340e  8b0e                 mov ecx, dword ptr [esi]
// 005d3410  6880f69f00           push 0x9ff680
// 005d3415  ff15a4e98900         call dword ptr [0x89e9a4]
// 005d341b  0fb6c0               movzx eax, al
// 005d341e  f7d8                 neg eax
// 005d3420  1bc0                 sbb eax, eax
// 005d3422  23442408             and eax, dword ptr [esp + 8]
// 005d3426  8906                 mov dword ptr [esi], eax
// 005d3428  5e                   pop esi
// 005d3429  c3                   ret 
// 005d342a  8b442408             mov eax, dword ptr [esp + 8]
// 005d342e  c70080f69f00         mov dword ptr [eax], 0x9ff680
// 005d3434  884804               mov byte ptr [eax + 4], cl
// 005d3437  884805               mov byte ptr [eax + 5], cl
// 005d343a  c3                   ret 
// 005d343b  8b442408             mov eax, dword ptr [esp + 8]
// 005d343f  3bc1                 cmp eax, ecx
// 005d3441  741a                 je 0x5d345d
// 005d3443  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d3447  8b11                 mov edx, dword ptr [ecx]
// 005d3449  8910                 mov dword ptr [eax], edx
// 005d344b  8b5104               mov edx, dword ptr [ecx + 4]
// 005d344e  895004               mov dword ptr [eax + 4], edx
// 005d3451  8b5108               mov edx, dword ptr [ecx + 8]
// 005d3454  895008               mov dword ptr [eax + 8], edx
// 005d3457  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 005d345a  89480c               mov dword ptr [eax + 0xc], ecx
// 005d345d  c3                   ret 
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
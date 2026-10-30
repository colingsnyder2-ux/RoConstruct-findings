// roc 2009-06 0069ddb0  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0069ddb0
//
// 0069ddb0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0069ddb4  33c9                 xor ecx, ecx
// 0069ddb6  3bc1                 cmp eax, ecx
// 0069ddb8  7441                 je 0x69ddfb
// 0069ddba  83f801               cmp eax, 1
// 0069ddbd  743c                 je 0x69ddfb
// 0069ddbf  83f802               cmp eax, 2
// 0069ddc2  7459                 je 0x69de1d
// 0069ddc4  83f803               cmp eax, 3
// 0069ddc7  7521                 jne 0x69ddea
// 0069ddc9  56                   push esi
// 0069ddca  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0069ddce  8b0e                 mov ecx, dword ptr [esi]
// 0069ddd0  68f807a200           push 0xa207f8
// 0069ddd5  ff15a4e98900         call dword ptr [0x89e9a4]
// 0069dddb  0fb6c0               movzx eax, al
// 0069ddde  f7d8                 neg eax
// 0069dde0  1bc0                 sbb eax, eax
// 0069dde2  23442408             and eax, dword ptr [esp + 8]
// 0069dde6  8906                 mov dword ptr [esi], eax
// 0069dde8  5e                   pop esi
// 0069dde9  c3                   ret 
// 0069ddea  8b442408             mov eax, dword ptr [esp + 8]
// 0069ddee  c700f807a200         mov dword ptr [eax], 0xa207f8
// 0069ddf4  884804               mov byte ptr [eax + 4], cl
// 0069ddf7  884805               mov byte ptr [eax + 5], cl
// 0069ddfa  c3                   ret 
// 0069ddfb  8b442408             mov eax, dword ptr [esp + 8]
// 0069ddff  3bc1                 cmp eax, ecx
// 0069de01  741a                 je 0x69de1d
// 0069de03  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0069de07  8b11                 mov edx, dword ptr [ecx]
// 0069de09  8910                 mov dword ptr [eax], edx
// 0069de0b  8b5104               mov edx, dword ptr [ecx + 4]
// 0069de0e  895004               mov dword ptr [eax + 4], edx
// 0069de11  8b5108               mov edx, dword ptr [ecx + 8]
// 0069de14  895008               mov dword ptr [eax + 8], edx
// 0069de17  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0069de1a  89480c               mov dword ptr [eax + 0xc], ecx
// 0069de1d  c3                   ret 
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
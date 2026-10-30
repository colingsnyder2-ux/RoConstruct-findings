// roc 2011-06 0046fbe0  unit: VCWorkspace::?$CComObject  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046fbe0
//
// 0046fbe0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0046fbe4  33c9                 xor ecx, ecx
// 0046fbe6  3bc1                 cmp eax, ecx
// 0046fbe8  7441                 je 0x46fc2b
// 0046fbea  83f801               cmp eax, 1
// 0046fbed  743c                 je 0x46fc2b
// 0046fbef  83f802               cmp eax, 2
// 0046fbf2  7459                 je 0x46fc4d
// 0046fbf4  83f803               cmp eax, 3
// 0046fbf7  7521                 jne 0x46fc1a
// 0046fbf9  56                   push esi
// 0046fbfa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0046fbfe  8b0e                 mov ecx, dword ptr [esi]
// 0046fc00  68585ac100           push 0xc15a58
// 0046fc05  ff15500aa400         call dword ptr [0xa40a50]
// 0046fc0b  0fb6c0               movzx eax, al
// 0046fc0e  f7d8                 neg eax
// 0046fc10  1bc0                 sbb eax, eax
// 0046fc12  23442408             and eax, dword ptr [esp + 8]
// 0046fc16  8906                 mov dword ptr [esi], eax
// 0046fc18  5e                   pop esi
// 0046fc19  c3                   ret 
// 0046fc1a  8b442408             mov eax, dword ptr [esp + 8]
// 0046fc1e  c700585ac100         mov dword ptr [eax], 0xc15a58
// 0046fc24  884804               mov byte ptr [eax + 4], cl
// 0046fc27  884805               mov byte ptr [eax + 5], cl
// 0046fc2a  c3                   ret 
// 0046fc2b  8b442408             mov eax, dword ptr [esp + 8]
// 0046fc2f  3bc1                 cmp eax, ecx
// 0046fc31  741a                 je 0x46fc4d
// 0046fc33  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0046fc37  8b11                 mov edx, dword ptr [ecx]
// 0046fc39  8910                 mov dword ptr [eax], edx
// 0046fc3b  8b5104               mov edx, dword ptr [ecx + 4]
// 0046fc3e  895004               mov dword ptr [eax + 4], edx
// 0046fc41  8b5108               mov edx, dword ptr [ecx + 8]
// 0046fc44  895008               mov dword ptr [eax + 8], edx
// 0046fc47  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0046fc4a  89480c               mov dword ptr [eax + 0xc], ecx
// 0046fc4d  c3                   ret 
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
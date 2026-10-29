// roc 2010-06 00475560  unit: CSelectionCaption  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00475560
//
// 00475560  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00475564  33c9                 xor ecx, ecx
// 00475566  3bc1                 cmp eax, ecx
// 00475568  7441                 je 0x4755ab
// 0047556a  83f801               cmp eax, 1
// 0047556d  743c                 je 0x4755ab
// 0047556f  83f802               cmp eax, 2
// 00475572  7459                 je 0x4755cd
// 00475574  83f803               cmp eax, 3
// 00475577  7521                 jne 0x47559a
// 00475579  56                   push esi
// 0047557a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0047557e  8b0e                 mov ecx, dword ptr [esi]
// 00475580  68e852b800           push 0xb852e8
// 00475585  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0047558b  0fb6c0               movzx eax, al
// 0047558e  f7d8                 neg eax
// 00475590  1bc0                 sbb eax, eax
// 00475592  23442408             and eax, dword ptr [esp + 8]
// 00475596  8906                 mov dword ptr [esi], eax
// 00475598  5e                   pop esi
// 00475599  c3                   ret 
// 0047559a  8b442408             mov eax, dword ptr [esp + 8]
// 0047559e  c700e852b800         mov dword ptr [eax], 0xb852e8
// 004755a4  884804               mov byte ptr [eax + 4], cl
// 004755a7  884805               mov byte ptr [eax + 5], cl
// 004755aa  c3                   ret 
// 004755ab  8b442408             mov eax, dword ptr [esp + 8]
// 004755af  3bc1                 cmp eax, ecx
// 004755b1  741a                 je 0x4755cd
// 004755b3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004755b7  8b11                 mov edx, dword ptr [ecx]
// 004755b9  8910                 mov dword ptr [eax], edx
// 004755bb  8b5104               mov edx, dword ptr [ecx + 4]
// 004755be  895004               mov dword ptr [eax + 4], edx
// 004755c1  8b5108               mov edx, dword ptr [ecx + 8]
// 004755c4  895008               mov dword ptr [eax + 8], edx
// 004755c7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 004755ca  89480c               mov dword ptr [eax + 0xc], ecx
// 004755cd  c3                   ret 
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
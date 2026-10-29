// roc 2010-06 006217f0  unit: RBX::DropperTool  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006217f0
//
// 006217f0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006217f4  33c9                 xor ecx, ecx
// 006217f6  3bc1                 cmp eax, ecx
// 006217f8  7441                 je 0x62183b
// 006217fa  83f801               cmp eax, 1
// 006217fd  743c                 je 0x62183b
// 006217ff  83f802               cmp eax, 2
// 00621802  7459                 je 0x62185d
// 00621804  83f803               cmp eax, 3
// 00621807  7521                 jne 0x62182a
// 00621809  56                   push esi
// 0062180a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062180e  8b0e                 mov ecx, dword ptr [esi]
// 00621810  68180dbb00           push 0xbb0d18
// 00621815  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0062181b  0fb6c0               movzx eax, al
// 0062181e  f7d8                 neg eax
// 00621820  1bc0                 sbb eax, eax
// 00621822  23442408             and eax, dword ptr [esp + 8]
// 00621826  8906                 mov dword ptr [esi], eax
// 00621828  5e                   pop esi
// 00621829  c3                   ret 
// 0062182a  8b442408             mov eax, dword ptr [esp + 8]
// 0062182e  c700180dbb00         mov dword ptr [eax], 0xbb0d18
// 00621834  884804               mov byte ptr [eax + 4], cl
// 00621837  884805               mov byte ptr [eax + 5], cl
// 0062183a  c3                   ret 
// 0062183b  8b442408             mov eax, dword ptr [esp + 8]
// 0062183f  3bc1                 cmp eax, ecx
// 00621841  741a                 je 0x62185d
// 00621843  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00621847  8b11                 mov edx, dword ptr [ecx]
// 00621849  8910                 mov dword ptr [eax], edx
// 0062184b  8b5104               mov edx, dword ptr [ecx + 4]
// 0062184e  895004               mov dword ptr [eax + 4], edx
// 00621851  8b5108               mov edx, dword ptr [ecx + 8]
// 00621854  895008               mov dword ptr [eax + 8], edx
// 00621857  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0062185a  89480c               mov dword ptr [eax + 0xc], ecx
// 0062185d  c3                   ret 
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
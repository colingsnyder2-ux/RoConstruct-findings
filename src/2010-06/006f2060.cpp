// roc 2010-06 006f2060  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f2060
//
// 006f2060  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006f2064  33c9                 xor ecx, ecx
// 006f2066  3bc1                 cmp eax, ecx
// 006f2068  7441                 je 0x6f20ab
// 006f206a  83f801               cmp eax, 1
// 006f206d  743c                 je 0x6f20ab
// 006f206f  83f802               cmp eax, 2
// 006f2072  7459                 je 0x6f20cd
// 006f2074  83f803               cmp eax, 3
// 006f2077  7521                 jne 0x6f209a
// 006f2079  56                   push esi
// 006f207a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f207e  8b0e                 mov ecx, dword ptr [esi]
// 006f2080  68d0bfbd00           push 0xbdbfd0
// 006f2085  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 006f208b  0fb6c0               movzx eax, al
// 006f208e  f7d8                 neg eax
// 006f2090  1bc0                 sbb eax, eax
// 006f2092  23442408             and eax, dword ptr [esp + 8]
// 006f2096  8906                 mov dword ptr [esi], eax
// 006f2098  5e                   pop esi
// 006f2099  c3                   ret 
// 006f209a  8b442408             mov eax, dword ptr [esp + 8]
// 006f209e  c700d0bfbd00         mov dword ptr [eax], 0xbdbfd0
// 006f20a4  884804               mov byte ptr [eax + 4], cl
// 006f20a7  884805               mov byte ptr [eax + 5], cl
// 006f20aa  c3                   ret 
// 006f20ab  8b442408             mov eax, dword ptr [esp + 8]
// 006f20af  3bc1                 cmp eax, ecx
// 006f20b1  741a                 je 0x6f20cd
// 006f20b3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006f20b7  8b11                 mov edx, dword ptr [ecx]
// 006f20b9  8910                 mov dword ptr [eax], edx
// 006f20bb  8b5104               mov edx, dword ptr [ecx + 4]
// 006f20be  895004               mov dword ptr [eax + 4], edx
// 006f20c1  8b5108               mov edx, dword ptr [ecx + 8]
// 006f20c4  895008               mov dword ptr [eax + 8], edx
// 006f20c7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 006f20ca  89480c               mov dword ptr [eax + 0xc], ecx
// 006f20cd  c3                   ret 
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
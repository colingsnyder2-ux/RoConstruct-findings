// roc 2011-06 0049aee0  unit: Ogre::IFrameDataCallback  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0049aee0
//
// 0049aee0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0049aee4  33c9                 xor ecx, ecx
// 0049aee6  3bc1                 cmp eax, ecx
// 0049aee8  7441                 je 0x49af2b
// 0049aeea  83f801               cmp eax, 1
// 0049aeed  743c                 je 0x49af2b
// 0049aeef  83f802               cmp eax, 2
// 0049aef2  7459                 je 0x49af4d
// 0049aef4  83f803               cmp eax, 3
// 0049aef7  7521                 jne 0x49af1a
// 0049aef9  56                   push esi
// 0049aefa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0049aefe  8b0e                 mov ecx, dword ptr [esi]
// 0049af00  68f099c100           push 0xc199f0
// 0049af05  ff15500aa400         call dword ptr [0xa40a50]
// 0049af0b  0fb6c0               movzx eax, al
// 0049af0e  f7d8                 neg eax
// 0049af10  1bc0                 sbb eax, eax
// 0049af12  23442408             and eax, dword ptr [esp + 8]
// 0049af16  8906                 mov dword ptr [esi], eax
// 0049af18  5e                   pop esi
// 0049af19  c3                   ret 
// 0049af1a  8b442408             mov eax, dword ptr [esp + 8]
// 0049af1e  c700f099c100         mov dword ptr [eax], 0xc199f0
// 0049af24  884804               mov byte ptr [eax + 4], cl
// 0049af27  884805               mov byte ptr [eax + 5], cl
// 0049af2a  c3                   ret 
// 0049af2b  8b442408             mov eax, dword ptr [esp + 8]
// 0049af2f  3bc1                 cmp eax, ecx
// 0049af31  741a                 je 0x49af4d
// 0049af33  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049af37  8b11                 mov edx, dword ptr [ecx]
// 0049af39  8910                 mov dword ptr [eax], edx
// 0049af3b  8b5104               mov edx, dword ptr [ecx + 4]
// 0049af3e  895004               mov dword ptr [eax + 4], edx
// 0049af41  8b5108               mov edx, dword ptr [ecx + 8]
// 0049af44  895008               mov dword ptr [eax + 8], edx
// 0049af47  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0049af4a  89480c               mov dword ptr [eax + 0xc], ecx
// 0049af4d  c3                   ret 
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
// roc 2011-06 00976d80  unit: seg_00970000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00976d80
//
// 00976d80  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00976d84  33c9                 xor ecx, ecx
// 00976d86  3bc1                 cmp eax, ecx
// 00976d88  7441                 je 0x976dcb
// 00976d8a  83f801               cmp eax, 1
// 00976d8d  743c                 je 0x976dcb
// 00976d8f  83f802               cmp eax, 2
// 00976d92  7453                 je 0x976de7
// 00976d94  83f803               cmp eax, 3
// 00976d97  7521                 jne 0x976dba
// 00976d99  56                   push esi
// 00976d9a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00976d9e  8b0e                 mov ecx, dword ptr [esi]
// 00976da0  689009cb00           push 0xcb0990
// 00976da5  ff15500aa400         call dword ptr [0xa40a50]
// 00976dab  0fb6c0               movzx eax, al
// 00976dae  f7d8                 neg eax
// 00976db0  1bc0                 sbb eax, eax
// 00976db2  23442408             and eax, dword ptr [esp + 8]
// 00976db6  8906                 mov dword ptr [esi], eax
// 00976db8  5e                   pop esi
// 00976db9  c3                   ret 
// 00976dba  8b442408             mov eax, dword ptr [esp + 8]
// 00976dbe  c7009009cb00         mov dword ptr [eax], 0xcb0990
// 00976dc4  884804               mov byte ptr [eax + 4], cl
// 00976dc7  884805               mov byte ptr [eax + 5], cl
// 00976dca  c3                   ret 
// 00976dcb  8b442408             mov eax, dword ptr [esp + 8]
// 00976dcf  3bc1                 cmp eax, ecx
// 00976dd1  7414                 je 0x976de7
// 00976dd3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00976dd7  8b11                 mov edx, dword ptr [ecx]
// 00976dd9  8910                 mov dword ptr [eax], edx
// 00976ddb  8b5104               mov edx, dword ptr [ecx + 4]
// 00976dde  895004               mov dword ptr [eax + 4], edx
// 00976de1  8b4908               mov ecx, dword ptr [ecx + 8]
// 00976de4  894808               mov dword ptr [eax + 8], ecx
// 00976de7  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
#include <typeinfo>
#include <new>

// boost::detail::function::functor_manager<F>::manage for a small, trivially copyable functor
// stored in place; 0xb38a08 is typeid(F)
extern const type_info type_descriptor_b38a08;

struct Functor
{
    int f0, f1, f2;
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
    char data[12];
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
        if (check_type == type_descriptor_b38a08)
            out_buffer.obj_ptr = (void *)&in_buffer.data;
        else
            out_buffer.obj_ptr = 0;
    } else {
        out_buffer.type.type = &type_descriptor_b38a08;
        out_buffer.type.const_qualified = false;
        out_buffer.type.volatile_qualified = false;
    }
}
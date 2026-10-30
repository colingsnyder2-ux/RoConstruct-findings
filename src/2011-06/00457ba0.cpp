// roc 2011-06 00457ba0  unit: RenderStatsItem  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00457ba0
//
// 00457ba0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00457ba4  33c9                 xor ecx, ecx
// 00457ba6  3bc1                 cmp eax, ecx
// 00457ba8  7441                 je 0x457beb
// 00457baa  83f801               cmp eax, 1
// 00457bad  743c                 je 0x457beb
// 00457baf  83f802               cmp eax, 2
// 00457bb2  744d                 je 0x457c01
// 00457bb4  83f803               cmp eax, 3
// 00457bb7  7521                 jne 0x457bda
// 00457bb9  56                   push esi
// 00457bba  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00457bbe  8b0e                 mov ecx, dword ptr [esi]
// 00457bc0  68882dc100           push 0xc12d88
// 00457bc5  ff15500aa400         call dword ptr [0xa40a50]
// 00457bcb  0fb6c0               movzx eax, al
// 00457bce  f7d8                 neg eax
// 00457bd0  1bc0                 sbb eax, eax
// 00457bd2  23442408             and eax, dword ptr [esp + 8]
// 00457bd6  8906                 mov dword ptr [esi], eax
// 00457bd8  5e                   pop esi
// 00457bd9  c3                   ret 
// 00457bda  8b442408             mov eax, dword ptr [esp + 8]
// 00457bde  c700882dc100         mov dword ptr [eax], 0xc12d88
// 00457be4  884804               mov byte ptr [eax + 4], cl
// 00457be7  884805               mov byte ptr [eax + 5], cl
// 00457bea  c3                   ret 
// 00457beb  8b442408             mov eax, dword ptr [esp + 8]
// 00457bef  3bc1                 cmp eax, ecx
// 00457bf1  740e                 je 0x457c01
// 00457bf3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00457bf7  8b11                 mov edx, dword ptr [ecx]
// 00457bf9  8910                 mov dword ptr [eax], edx
// 00457bfb  8b4904               mov ecx, dword ptr [ecx + 4]
// 00457bfe  894804               mov dword ptr [eax + 4], ecx
// 00457c01  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
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
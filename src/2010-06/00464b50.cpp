// roc 2010-06 00464b50  unit: CRobloxView  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00464b50
//
// 00464b50  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00464b54  33c9                 xor ecx, ecx
// 00464b56  3bc1                 cmp eax, ecx
// 00464b58  7441                 je 0x464b9b
// 00464b5a  83f801               cmp eax, 1
// 00464b5d  743c                 je 0x464b9b
// 00464b5f  83f802               cmp eax, 2
// 00464b62  745f                 je 0x464bc3
// 00464b64  83f803               cmp eax, 3
// 00464b67  7521                 jne 0x464b8a
// 00464b69  56                   push esi
// 00464b6a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00464b6e  8b0e                 mov ecx, dword ptr [esi]
// 00464b70  68f83eb800           push 0xb83ef8
// 00464b75  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 00464b7b  0fb6c0               movzx eax, al
// 00464b7e  f7d8                 neg eax
// 00464b80  1bc0                 sbb eax, eax
// 00464b82  23442408             and eax, dword ptr [esp + 8]
// 00464b86  8906                 mov dword ptr [esi], eax
// 00464b88  5e                   pop esi
// 00464b89  c3                   ret 
// 00464b8a  8b442408             mov eax, dword ptr [esp + 8]
// 00464b8e  c700f83eb800         mov dword ptr [eax], 0xb83ef8
// 00464b94  884804               mov byte ptr [eax + 4], cl
// 00464b97  884805               mov byte ptr [eax + 5], cl
// 00464b9a  c3                   ret 
// 00464b9b  8b442408             mov eax, dword ptr [esp + 8]
// 00464b9f  3bc1                 cmp eax, ecx
// 00464ba1  7420                 je 0x464bc3
// 00464ba3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00464ba7  8b11                 mov edx, dword ptr [ecx]
// 00464ba9  8910                 mov dword ptr [eax], edx
// 00464bab  8b5104               mov edx, dword ptr [ecx + 4]
// 00464bae  895004               mov dword ptr [eax + 4], edx
// 00464bb1  8b5108               mov edx, dword ptr [ecx + 8]
// 00464bb4  895008               mov dword ptr [eax + 8], edx
// 00464bb7  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00464bba  89500c               mov dword ptr [eax + 0xc], edx
// 00464bbd  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00464bc0  894810               mov dword ptr [eax + 0x10], ecx
// 00464bc3  c3                   ret 
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
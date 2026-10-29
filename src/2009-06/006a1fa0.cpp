// roc 2009-06 006a1fa0  unit: RBX::VehicleSeat  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a1fa0
//
// 006a1fa0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006a1fa4  33c9                 xor ecx, ecx
// 006a1fa6  3bc1                 cmp eax, ecx
// 006a1fa8  7441                 je 0x6a1feb
// 006a1faa  83f801               cmp eax, 1
// 006a1fad  743c                 je 0x6a1feb
// 006a1faf  83f802               cmp eax, 2
// 006a1fb2  7465                 je 0x6a2019
// 006a1fb4  83f803               cmp eax, 3
// 006a1fb7  7521                 jne 0x6a1fda
// 006a1fb9  56                   push esi
// 006a1fba  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006a1fbe  8b0e                 mov ecx, dword ptr [esi]
// 006a1fc0  68c010a200           push 0xa210c0
// 006a1fc5  ff15a4e98900         call dword ptr [0x89e9a4]
// 006a1fcb  0fb6c0               movzx eax, al
// 006a1fce  f7d8                 neg eax
// 006a1fd0  1bc0                 sbb eax, eax
// 006a1fd2  23442408             and eax, dword ptr [esp + 8]
// 006a1fd6  8906                 mov dword ptr [esi], eax
// 006a1fd8  5e                   pop esi
// 006a1fd9  c3                   ret 
// 006a1fda  8b442408             mov eax, dword ptr [esp + 8]
// 006a1fde  c700c010a200         mov dword ptr [eax], 0xa210c0
// 006a1fe4  884804               mov byte ptr [eax + 4], cl
// 006a1fe7  884805               mov byte ptr [eax + 5], cl
// 006a1fea  c3                   ret 
// 006a1feb  8b442408             mov eax, dword ptr [esp + 8]
// 006a1fef  3bc1                 cmp eax, ecx
// 006a1ff1  7426                 je 0x6a2019
// 006a1ff3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006a1ff7  8b11                 mov edx, dword ptr [ecx]
// 006a1ff9  8910                 mov dword ptr [eax], edx
// 006a1ffb  8b5104               mov edx, dword ptr [ecx + 4]
// 006a1ffe  895004               mov dword ptr [eax + 4], edx
// 006a2001  8b5108               mov edx, dword ptr [ecx + 8]
// 006a2004  895008               mov dword ptr [eax + 8], edx
// 006a2007  8b510c               mov edx, dword ptr [ecx + 0xc]
// 006a200a  89500c               mov dword ptr [eax + 0xc], edx
// 006a200d  8b5110               mov edx, dword ptr [ecx + 0x10]
// 006a2010  895010               mov dword ptr [eax + 0x10], edx
// 006a2013  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 006a2016  894814               mov dword ptr [eax + 0x14], ecx
// 006a2019  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

#include <typeinfo>
#include <new>

// boost::detail::function::functor_manager<F>::manage for a small, trivially copyable functor
// stored in place; 0xb2f1b0 is typeid(F)
extern const type_info type_descriptor_b2f1b0;

struct Functor
{
    int f0, f1, f2, f3, f4, f5;
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
    char data[24];
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
        if (check_type == type_descriptor_b2f1b0)
            out_buffer.obj_ptr = (void *)&in_buffer.data;
        else
            out_buffer.obj_ptr = 0;
    } else {
        out_buffer.type.type = &type_descriptor_b2f1b0;
        out_buffer.type.const_qualified = false;
        out_buffer.type.volatile_qualified = false;
    }
}
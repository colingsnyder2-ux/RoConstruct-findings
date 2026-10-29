// roc 2010-06 00799710  unit: RBX::TaskScheduler::PAVJob::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00799710
//
// 00799710  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00799714  33c9                 xor ecx, ecx
// 00799716  3bc1                 cmp eax, ecx
// 00799718  7441                 je 0x79975b
// 0079971a  83f801               cmp eax, 1
// 0079971d  743c                 je 0x79975b
// 0079971f  83f802               cmp eax, 2
// 00799722  744d                 je 0x799771
// 00799724  83f803               cmp eax, 3
// 00799727  7521                 jne 0x79974a
// 00799729  56                   push esi
// 0079972a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0079972e  8b0e                 mov ecx, dword ptr [esi]
// 00799730  681859be00           push 0xbe5918
// 00799735  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0079973b  0fb6c0               movzx eax, al
// 0079973e  f7d8                 neg eax
// 00799740  1bc0                 sbb eax, eax
// 00799742  23442408             and eax, dword ptr [esp + 8]
// 00799746  8906                 mov dword ptr [esi], eax
// 00799748  5e                   pop esi
// 00799749  c3                   ret 
// 0079974a  8b442408             mov eax, dword ptr [esp + 8]
// 0079974e  c7001859be00         mov dword ptr [eax], 0xbe5918
// 00799754  884804               mov byte ptr [eax + 4], cl
// 00799757  884805               mov byte ptr [eax + 5], cl
// 0079975a  c3                   ret 
// 0079975b  8b442408             mov eax, dword ptr [esp + 8]
// 0079975f  3bc1                 cmp eax, ecx
// 00799761  740e                 je 0x799771
// 00799763  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00799767  8b11                 mov edx, dword ptr [ecx]
// 00799769  8910                 mov dword ptr [eax], edx
// 0079976b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0079976e  894804               mov dword ptr [eax + 4], ecx
// 00799771  c3                   ret 
// copied from an identical function in another client (function ?manage@@YAXABTfunction_buffer@@AAT1@W4functor_manager_operation_type@@@Z)

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
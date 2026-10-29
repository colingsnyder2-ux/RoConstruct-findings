// roc 2012-06 0046db50  unit: RBX::Security::VContext::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0046db50
//
// 0046db50  56                   push esi
// 0046db51  8bf1                 mov esi, ecx
// 0046db53  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0046db57  6860cbd600           push 0xd6cb60
// 0046db5c  ff15ec29b200         call dword ptr [0xb229ec]
// 0046db62  84c0                 test al, al
// 0046db64  7407                 je 0x46db6d
// 0046db66  8d4610               lea eax, [esi + 0x10]
// 0046db69  5e                   pop esi
// 0046db6a  c20400               ret 4
// 0046db6d  33c0                 xor eax, eax
// 0046db6f  5e                   pop esi
// 0046db70  c20400               ret 4
// copied from an identical function in another client (function ?f@S@@QAEPAXABVtype_info@@@Z)

#include <typeinfo>

// boost sp_counted_impl_pd::get_deleter shape: 0xb33248 = typeid(D), deleter at this+0x10
extern const type_info type_descriptor_b33248;

struct S
{
    char pad[0x10];
    char del;
    void *f(const type_info &ti);
};

void *S::f(const type_info &ti)
{
    return ti == type_descriptor_b33248 ? &del : 0;
}
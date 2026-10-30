// roc 2009-06 00425bc0  unit: RBX::Security::VContext::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00425bc0
//
// 00425bc0  56                   push esi
// 00425bc1  8bf1                 mov esi, ecx
// 00425bc3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00425bc7  68e8069e00           push 0x9e06e8
// 00425bcc  ff15a4e98900         call dword ptr [0x89e9a4]
// 00425bd2  84c0                 test al, al
// 00425bd4  7407                 je 0x425bdd
// 00425bd6  8d4610               lea eax, [esi + 0x10]
// 00425bd9  5e                   pop esi
// 00425bda  c20400               ret 4
// 00425bdd  33c0                 xor eax, eax
// 00425bdf  5e                   pop esi
// 00425be0  c20400               ret 4
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
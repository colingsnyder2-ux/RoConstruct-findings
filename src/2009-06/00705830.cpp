// roc 2009-06 00705830  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00705830
//
// 00705830  56                   push esi
// 00705831  8bf1                 mov esi, ecx
// 00705833  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00705837  68d045a200           push 0xa245d0
// 0070583c  ff15a4e98900         call dword ptr [0x89e9a4]
// 00705842  84c0                 test al, al
// 00705844  7407                 je 0x70584d
// 00705846  8d4610               lea eax, [esi + 0x10]
// 00705849  5e                   pop esi
// 0070584a  c20400               ret 4
// 0070584d  33c0                 xor eax, eax
// 0070584f  5e                   pop esi
// 00705850  c20400               ret 4
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
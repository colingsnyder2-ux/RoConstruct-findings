// roc 2010-06 00426bd0  unit: RBX::Security::VContext::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00426bd0
//
// 00426bd0  56                   push esi
// 00426bd1  8bf1                 mov esi, ecx
// 00426bd3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00426bd7  6800d8b700           push 0xb7d800
// 00426bdc  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 00426be2  84c0                 test al, al
// 00426be4  7407                 je 0x426bed
// 00426be6  8d4610               lea eax, [esi + 0x10]
// 00426be9  5e                   pop esi
// 00426bea  c20400               ret 4
// 00426bed  33c0                 xor eax, eax
// 00426bef  5e                   pop esi
// 00426bf0  c20400               ret 4
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
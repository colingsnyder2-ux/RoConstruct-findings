// roc 2010-06 00423c30  unit: VThreadLogManager::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00423c30
//
// 00423c30  56                   push esi
// 00423c31  8bf1                 mov esi, ecx
// 00423c33  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00423c37  6808d6b700           push 0xb7d608
// 00423c3c  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 00423c42  84c0                 test al, al
// 00423c44  7407                 je 0x423c4d
// 00423c46  8d4610               lea eax, [esi + 0x10]
// 00423c49  5e                   pop esi
// 00423c4a  c20400               ret 4
// 00423c4d  33c0                 xor eax, eax
// 00423c4f  5e                   pop esi
// 00423c50  c20400               ret 4
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
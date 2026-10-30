// roc 2009-06 00422d40  unit: VThreadLogManager::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00422d40
//
// 00422d40  56                   push esi
// 00422d41  8bf1                 mov esi, ecx
// 00422d43  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00422d47  68f0049e00           push 0x9e04f0
// 00422d4c  ff15a4e98900         call dword ptr [0x89e9a4]
// 00422d52  84c0                 test al, al
// 00422d54  7407                 je 0x422d5d
// 00422d56  8d4610               lea eax, [esi + 0x10]
// 00422d59  5e                   pop esi
// 00422d5a  c20400               ret 4
// 00422d5d  33c0                 xor eax, eax
// 00422d5f  5e                   pop esi
// 00422d60  c20400               ret 4
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
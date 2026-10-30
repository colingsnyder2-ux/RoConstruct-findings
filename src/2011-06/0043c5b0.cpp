// roc 2011-06 0043c5b0  unit: RBX::Reflection::VValue::PAV?$vector::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043c5b0
//
// 0043c5b0  56                   push esi
// 0043c5b1  8bf1                 mov esi, ecx
// 0043c5b3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0043c5b7  68a8e4c000           push 0xc0e4a8
// 0043c5bc  ff15500aa400         call dword ptr [0xa40a50]
// 0043c5c2  84c0                 test al, al
// 0043c5c4  7407                 je 0x43c5cd
// 0043c5c6  8d4610               lea eax, [esi + 0x10]
// 0043c5c9  5e                   pop esi
// 0043c5ca  c20400               ret 4
// 0043c5cd  33c0                 xor eax, eax
// 0043c5cf  5e                   pop esi
// 0043c5d0  c20400               ret 4
// copied from an identical function in another client (function ?f@S@@QAEPAXABVtype_info@@@Z)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
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
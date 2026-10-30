// roc 2011-06 0042cd90  unit: VThreadLogManager::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0042cd90
//
// 0042cd90  56                   push esi
// 0042cd91  8bf1                 mov esi, ecx
// 0042cd93  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042cd97  68b0d1c000           push 0xc0d1b0
// 0042cd9c  ff15500aa400         call dword ptr [0xa40a50]
// 0042cda2  84c0                 test al, al
// 0042cda4  7407                 je 0x42cdad
// 0042cda6  8d4610               lea eax, [esi + 0x10]
// 0042cda9  5e                   pop esi
// 0042cdaa  c20400               ret 4
// 0042cdad  33c0                 xor eax, eax
// 0042cdaf  5e                   pop esi
// 0042cdb0  c20400               ret 4
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
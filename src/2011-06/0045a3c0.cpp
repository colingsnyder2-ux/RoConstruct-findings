// roc 2011-06 0045a3c0  unit: RBX::Security::VContext::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0045a3c0
//
// 0045a3c0  56                   push esi
// 0045a3c1  8bf1                 mov esi, ecx
// 0045a3c3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0045a3c7  680038c100           push 0xc13800
// 0045a3cc  ff15500aa400         call dword ptr [0xa40a50]
// 0045a3d2  84c0                 test al, al
// 0045a3d4  7407                 je 0x45a3dd
// 0045a3d6  8d4610               lea eax, [esi + 0x10]
// 0045a3d9  5e                   pop esi
// 0045a3da  c20400               ret 4
// 0045a3dd  33c0                 xor eax, eax
// 0045a3df  5e                   pop esi
// 0045a3e0  c20400               ret 4
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
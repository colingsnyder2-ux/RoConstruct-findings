// roc 2011-06 007feee0  unit: RBX::Limits::VCounter::V?$shared_ptr::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007feee0
//
// 007feee0  56                   push esi
// 007feee1  8bf1                 mov esi, ecx
// 007feee3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007feee7  68d054c900           push 0xc954d0
// 007feeec  ff15500aa400         call dword ptr [0xa40a50]
// 007feef2  84c0                 test al, al
// 007feef4  7407                 je 0x7feefd
// 007feef6  8d4610               lea eax, [esi + 0x10]
// 007feef9  5e                   pop esi
// 007feefa  c20400               ret 4
// 007feefd  33c0                 xor eax, eax
// 007feeff  5e                   pop esi
// 007fef00  c20400               ret 4
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
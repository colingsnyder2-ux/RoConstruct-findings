// roc 2009-06 0070aa30  unit: RBX::TaskScheduler::PAVJob::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0070aa30
//
// 0070aa30  56                   push esi
// 0070aa31  8bf1                 mov esi, ecx
// 0070aa33  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0070aa37  68004ba200           push 0xa24b00
// 0070aa3c  ff15a4e98900         call dword ptr [0x89e9a4]
// 0070aa42  84c0                 test al, al
// 0070aa44  7407                 je 0x70aa4d
// 0070aa46  8d4610               lea eax, [esi + 0x10]
// 0070aa49  5e                   pop esi
// 0070aa4a  c20400               ret 4
// 0070aa4d  33c0                 xor eax, eax
// 0070aa4f  5e                   pop esi
// 0070aa50  c20400               ret 4
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
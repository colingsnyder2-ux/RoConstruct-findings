// roc 2010-06 007996e0  unit: RBX::TaskScheduler::PAVJob::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007996e0
//
// 007996e0  56                   push esi
// 007996e1  8bf1                 mov esi, ecx
// 007996e3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007996e7  68a058be00           push 0xbe58a0
// 007996ec  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 007996f2  84c0                 test al, al
// 007996f4  7407                 je 0x7996fd
// 007996f6  8d4610               lea eax, [esi + 0x10]
// 007996f9  5e                   pop esi
// 007996fa  c20400               ret 4
// 007996fd  33c0                 xor eax, eax
// 007996ff  5e                   pop esi
// 00799700  c20400               ret 4
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
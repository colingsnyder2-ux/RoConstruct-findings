// roc 2010-06 0079d180  unit: RBX::Limits::VCounter::V?$shared_ptr::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0079d180
//
// 0079d180  56                   push esi
// 0079d181  8bf1                 mov esi, ecx
// 0079d183  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0079d187  68685cbe00           push 0xbe5c68
// 0079d18c  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0079d192  84c0                 test al, al
// 0079d194  7407                 je 0x79d19d
// 0079d196  8d4610               lea eax, [esi + 0x10]
// 0079d199  5e                   pop esi
// 0079d19a  c20400               ret 4
// 0079d19d  33c0                 xor eax, eax
// 0079d19f  5e                   pop esi
// 0079d1a0  c20400               ret 4
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
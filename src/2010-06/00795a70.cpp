// roc 2010-06 00795a70  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00795a70
//
// 00795a70  56                   push esi
// 00795a71  8bf1                 mov esi, ecx
// 00795a73  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00795a77  68d853be00           push 0xbe53d8
// 00795a7c  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 00795a82  84c0                 test al, al
// 00795a84  7407                 je 0x795a8d
// 00795a86  8d4610               lea eax, [esi + 0x10]
// 00795a89  5e                   pop esi
// 00795a8a  c20400               ret 4
// 00795a8d  33c0                 xor eax, eax
// 00795a8f  5e                   pop esi
// 00795a90  c20400               ret 4
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
// roc 2011-06 007f9350  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f9350
//
// 007f9350  56                   push esi
// 007f9351  8bf1                 mov esi, ecx
// 007f9353  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007f9357  68384dc900           push 0xc94d38
// 007f935c  ff15500aa400         call dword ptr [0xa40a50]
// 007f9362  84c0                 test al, al
// 007f9364  7407                 je 0x7f936d
// 007f9366  8d4610               lea eax, [esi + 0x10]
// 007f9369  5e                   pop esi
// 007f936a  c20400               ret 4
// 007f936d  33c0                 xor eax, eax
// 007f936f  5e                   pop esi
// 007f9370  c20400               ret 4
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
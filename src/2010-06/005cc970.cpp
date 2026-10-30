// roc 2010-06 005cc970  unit: RBX::DataModel::PAVGenericJob::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005cc970
//
// 005cc970  56                   push esi
// 005cc971  8bf1                 mov esi, ecx
// 005cc973  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cc977  68d886ba00           push 0xba86d8
// 005cc97c  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 005cc982  84c0                 test al, al
// 005cc984  7407                 je 0x5cc98d
// 005cc986  8d4610               lea eax, [esi + 0x10]
// 005cc989  5e                   pop esi
// 005cc98a  c20400               ret 4
// 005cc98d  33c0                 xor eax, eax
// 005cc98f  5e                   pop esi
// 005cc990  c20400               ret 4
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
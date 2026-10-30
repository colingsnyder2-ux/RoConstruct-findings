// roc 2009-06 005fad60  unit: RBX::DataModel::PAVGenericJob::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fad60
//
// 005fad60  56                   push esi
// 005fad61  8bf1                 mov esi, ecx
// 005fad63  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fad67  687062a000           push 0xa06270
// 005fad6c  ff15a4e98900         call dword ptr [0x89e9a4]
// 005fad72  84c0                 test al, al
// 005fad74  7407                 je 0x5fad7d
// 005fad76  8d4610               lea eax, [esi + 0x10]
// 005fad79  5e                   pop esi
// 005fad7a  c20400               ret 4
// 005fad7d  33c0                 xor eax, eax
// 005fad7f  5e                   pop esi
// 005fad80  c20400               ret 4
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
// roc 2011-06 005e7420  unit: RBX::DataModel::PAVGenericJob::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e7420
//
// 005e7420  56                   push esi
// 005e7421  8bf1                 mov esi, ecx
// 005e7423  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e7427  68c055c400           push 0xc455c0
// 005e742c  ff15500aa400         call dword ptr [0xa40a50]
// 005e7432  84c0                 test al, al
// 005e7434  7407                 je 0x5e743d
// 005e7436  8d4610               lea eax, [esi + 0x10]
// 005e7439  5e                   pop esi
// 005e743a  c20400               ret 4
// 005e743d  33c0                 xor eax, eax
// 005e743f  5e                   pop esi
// 005e7440  c20400               ret 4
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
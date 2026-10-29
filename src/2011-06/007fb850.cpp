// roc 2011-06 007fb850  unit: RBX::TaskScheduler::PAVJob::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007fb850
//
// 007fb850  56                   push esi
// 007fb851  8bf1                 mov esi, ecx
// 007fb853  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007fb857  68d051c900           push 0xc951d0
// 007fb85c  ff15500aa400         call dword ptr [0xa40a50]
// 007fb862  84c0                 test al, al
// 007fb864  7407                 je 0x7fb86d
// 007fb866  8d4610               lea eax, [esi + 0x10]
// 007fb869  5e                   pop esi
// 007fb86a  c20400               ret 4
// 007fb86d  33c0                 xor eax, eax
// 007fb86f  5e                   pop esi
// 007fb870  c20400               ret 4
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
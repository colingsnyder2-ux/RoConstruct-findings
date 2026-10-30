// roc 2011-06 00771530  unit: RBX::Lua::VWaitScriptSlot::PAV?$TGenericSlotWrapper::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00771530
//
// 00771530  56                   push esi
// 00771531  8bf1                 mov esi, ecx
// 00771533  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00771537  6880f0c800           push 0xc8f080
// 0077153c  ff15500aa400         call dword ptr [0xa40a50]
// 00771542  84c0                 test al, al
// 00771544  7407                 je 0x77154d
// 00771546  8d4610               lea eax, [esi + 0x10]
// 00771549  5e                   pop esi
// 0077154a  c20400               ret 4
// 0077154d  33c0                 xor eax, eax
// 0077154f  5e                   pop esi
// 00771550  c20400               ret 4
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
// roc 2011-06 007714e0  unit: RBX::Lua::VFunctionScriptSlot::PAV?$TGenericSlotWrapper::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007714e0
//
// 007714e0  56                   push esi
// 007714e1  8bf1                 mov esi, ecx
// 007714e3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007714e7  6810f0c800           push 0xc8f010
// 007714ec  ff15500aa400         call dword ptr [0xa40a50]
// 007714f2  84c0                 test al, al
// 007714f4  7407                 je 0x7714fd
// 007714f6  8d4610               lea eax, [esi + 0x10]
// 007714f9  5e                   pop esi
// 007714fa  c20400               ret 4
// 007714fd  33c0                 xor eax, eax
// 007714ff  5e                   pop esi
// 00771500  c20400               ret 4
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
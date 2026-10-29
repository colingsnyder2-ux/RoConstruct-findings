// roc 2011-06 00418c20  unit: RBX::Reflection::VValue::$$CBV?$vector::$$A6AXV?$shared_ptr::PAV?$function::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00418c20
//
// 00418c20  56                   push esi
// 00418c21  8bf1                 mov esi, ecx
// 00418c23  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00418c27  6828adc000           push 0xc0ad28
// 00418c2c  ff15500aa400         call dword ptr [0xa40a50]
// 00418c32  84c0                 test al, al
// 00418c34  7407                 je 0x418c3d
// 00418c36  8d4610               lea eax, [esi + 0x10]
// 00418c39  5e                   pop esi
// 00418c3a  c20400               ret 4
// 00418c3d  33c0                 xor eax, eax
// 00418c3f  5e                   pop esi
// 00418c40  c20400               ret 4
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
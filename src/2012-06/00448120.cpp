// roc 2012-06 00448120  unit: RBX::Reflection::PAUTuple::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00448120
//
// 00448120  56                   push esi
// 00448121  8bf1                 mov esi, ecx
// 00448123  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00448127  68307dd600           push 0xd67d30
// 0044812c  ff15ec29b200         call dword ptr [0xb229ec]
// 00448132  84c0                 test al, al
// 00448134  7407                 je 0x44813d
// 00448136  8d4610               lea eax, [esi + 0x10]
// 00448139  5e                   pop esi
// 0044813a  c20400               ret 4
// 0044813d  33c0                 xor eax, eax
// 0044813f  5e                   pop esi
// 00448140  c20400               ret 4
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
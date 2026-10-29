// roc 2012-06 0041c1a0  unit: RBX::Reflection::$$CBUTuple::$$A6AXV?$shared_ptr::PAV?$function::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0041c1a0
//
// 0041c1a0  56                   push esi
// 0041c1a1  8bf1                 mov esi, ecx
// 0041c1a3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041c1a7  68683fd600           push 0xd63f68
// 0041c1ac  ff15ec29b200         call dword ptr [0xb229ec]
// 0041c1b2  84c0                 test al, al
// 0041c1b4  7407                 je 0x41c1bd
// 0041c1b6  8d4610               lea eax, [esi + 0x10]
// 0041c1b9  5e                   pop esi
// 0041c1ba  c20400               ret 4
// 0041c1bd  33c0                 xor eax, eax
// 0041c1bf  5e                   pop esi
// 0041c1c0  c20400               ret 4
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
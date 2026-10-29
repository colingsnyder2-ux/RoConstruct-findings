// roc 2012-06 00431600  unit: VThreadLogManager::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00431600
//
// 00431600  56                   push esi
// 00431601  8bf1                 mov esi, ecx
// 00431603  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00431607  68d85ed600           push 0xd65ed8
// 0043160c  ff15ec29b200         call dword ptr [0xb229ec]
// 00431612  84c0                 test al, al
// 00431614  7407                 je 0x43161d
// 00431616  8d4610               lea eax, [esi + 0x10]
// 00431619  5e                   pop esi
// 0043161a  c20400               ret 4
// 0043161d  33c0                 xor eax, eax
// 0043161f  5e                   pop esi
// 00431620  c20400               ret 4
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
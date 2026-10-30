// roc 2011-06 00423bc0  unit: CInsertObjectDialog  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00423bc0
//
// 00423bc0  8b01                 mov eax, dword ptr [ecx]
// 00423bc2  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 00423bc8  ffd2                 call edx
// 00423bca  8b442408             mov eax, dword ptr [esp + 8]
// 00423bce  c70000000000         mov dword ptr [eax], 0
// 00423bd4  c20800               ret 8
// copied from an identical function in another client (function ?f@S@ns_ROCX000012@@QAEXHPAH@Z)

namespace ns_ROCX000012 {
struct S;

struct VTable {
    void *slots[88];
    void (__thiscall *invoke)(S *);
};

struct S {
    VTable *vtable;
    void f(int unused, int *result);
};

void S::f(int unused, int *result)
{
    vtable->invoke(this);
    *result = 0;
}
}

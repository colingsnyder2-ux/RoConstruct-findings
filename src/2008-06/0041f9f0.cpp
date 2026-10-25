// from server: 100% by king_originala
// roc 2008-06 0041f9f0  unit: CInsertObjectDialog  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041f9f0
//
// 0041f9f0  8b01                 mov eax, dword ptr [ecx]
// 0041f9f2  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 0041f9f8  ffd2                 call edx
// 0041f9fa  8b442408             mov eax, dword ptr [esp + 8]
// 0041f9fe  c70000000000         mov dword ptr [eax], 0
// 0041fa04  c20800               ret 8

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

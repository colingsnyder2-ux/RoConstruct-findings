// from server: 100% by colin
// roc 2008-06 0040f410  unit: VCBrowserViewExternal::?$CComObject  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040f410
//
// 0040f410  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0040f414  834118ff             add dword ptr [ecx + 0x18], -1
// 0040f418  56                   push esi
// 0040f419  8b7118               mov esi, dword ptr [ecx + 0x18]
// 0040f41c  750d                 jne 0x40f42b
// 0040f41e  85c9                 test ecx, ecx
// 0040f420  7409                 je 0x40f42b
// 0040f422  8b01                 mov eax, dword ptr [ecx]
// 0040f424  8b5010               mov edx, dword ptr [eax + 0x10]
// 0040f427  6a01                 push 1
// 0040f429  ffd2                 call edx
// 0040f42b  8bc6                 mov eax, esi
// 0040f42d  5e                   pop esi
// 0040f42e  c20400               ret 4

struct S {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual ~S();
};

unsigned long __stdcall release(S* object)
{
    unsigned long* refs = reinterpret_cast<unsigned long*>(reinterpret_cast<char*>(object) + 0x18);
    unsigned long remaining = --*refs;
    if (remaining == 0)
        delete object;
    return remaining;
}

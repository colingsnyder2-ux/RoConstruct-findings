// roc 2009-12 0040de50  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040de50
//
// 0040de50  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0040de54  834118ff             add dword ptr [ecx + 0x18], -1
// 0040de58  56                   push esi
// 0040de59  8b7118               mov esi, dword ptr [ecx + 0x18]
// 0040de5c  750d                 jne 0x40de6b
// 0040de5e  85c9                 test ecx, ecx
// 0040de60  7409                 je 0x40de6b
// 0040de62  8b01                 mov eax, dword ptr [ecx]
// 0040de64  8b5010               mov edx, dword ptr [eax + 0x10]
// 0040de67  6a01                 push 1
// 0040de69  ffd2                 call edx
// 0040de6b  8bc6                 mov eax, esi
// 0040de6d  5e                   pop esi
// 0040de6e  c20400               ret 4
// copied from an identical function in another client (function ?release@@YGKPAUS@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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
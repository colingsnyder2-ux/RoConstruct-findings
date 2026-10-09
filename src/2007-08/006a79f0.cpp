// from server: 94% by colin
// roc 2007-08 006a79f0  unit: CXTPRibbonBar  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a79f0
//
// 006a79f0  56                   push esi
// 006a79f1  8bf1                 mov esi, ecx
// 006a79f3  8b8e7c020000         mov ecx, dword ptr [esi + 0x27c]
// 006a79f9  85c9                 test ecx, ecx
// 006a79fb  7412                 je 0x6a7a0f
// 006a79fd  8b01                 mov eax, dword ptr [ecx]
// 006a79ff  8b10                 mov edx, dword ptr [eax]
// 006a7a01  6a01                 push 1
// 006a7a03  ffd2                 call edx
// 006a7a05  c7867c02000000000000 mov dword ptr [esi + 0x27c], 0
// 006a7a0f  8b8e60020000         mov ecx, dword ptr [esi + 0x260]
// 006a7a15  85c9                 test ecx, ecx
// 006a7a17  7405                 je 0x6a7a1e
// 006a7a19  e8422cfdff           call 0x67a660
// 006a7a1e  8b8664020000         mov eax, dword ptr [esi + 0x264]
// 006a7a24  85c0                 test eax, eax
// 006a7a26  740b                 je 0x6a7a33
// 006a7a28  8d8878010000         lea ecx, [eax + 0x178]
// 006a7a2e  e80d6c0500           call 0x6fe640
// 006a7a33  8bce                 mov ecx, esi
// 006a7a35  5e                   pop esi
// 006a7a36  e985def9ff           jmp 0x6458c0

struct CXTPRibbonBar {
    void sub_6A79F0();
};

struct CXTPRibbonBarImpl {
    virtual void vfunc1(int);
};

struct CXTPRibbonBarImpl2 {
    void sub_67A660();
};

struct CXTPRibbonBarImpl3 {
    void sub_6FE640();
};

void __stdcall sub_6458C0(CXTPRibbonBar*);

void CXTPRibbonBar::sub_6A79F0() {
    CXTPRibbonBarImpl* p1 = *(CXTPRibbonBarImpl**)((char*)this + 0x27c);
    if (p1 != 0) {
        void (__thiscall *fn)(CXTPRibbonBarImpl*, int) = *(void (__thiscall**)(CXTPRibbonBarImpl*, int))*(void**)p1;
        fn(p1, 1);
        *(void**)((char*)this + 0x27c) = 0;
    }
    CXTPRibbonBarImpl2* p2 = *(CXTPRibbonBarImpl2**)((char*)this + 0x260);
    if (p2 != 0) {
        p2->sub_67A660();
    }
    CXTPRibbonBarImpl3* p3 = *(CXTPRibbonBarImpl3**)((char*)this + 0x264);
    if (p3 != 0) {
        CXTPRibbonBarImpl3* p4 = (CXTPRibbonBarImpl3*)((char*)p3 + 0x178);
        p4->sub_6FE640();
    }
    sub_6458C0(this);
}

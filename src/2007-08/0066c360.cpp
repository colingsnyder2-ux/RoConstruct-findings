// from server: 94% by colin
// roc 2007-08 0066c360  unit: CXTPToolBar::CControlButtonHide  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066c360
//
// 0066c360  56                   push esi
// 0066c361  57                   push edi
// 0066c362  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0066c366  57                   push edi
// 0066c367  8bf1                 mov esi, ecx
// 0066c369  e862fcffff           call 0x66bfd0
// 0066c36e  837f2812             cmp dword ptr [edi + 0x28], 0x12
// 0066c372  7317                 jae 0x66c38b
// 0066c374  6a00                 push 0
// 0066c376  81c644010000         add esi, 0x144
// 0066c37c  56                   push esi
// 0066c37d  6818ae7c00           push 0x7cae18
// 0066c382  57                   push edi
// 0066c383  e898930100           call 0x685720
// 0066c388  83c410               add esp, 0x10
// 0066c38b  5f                   pop edi
// 0066c38c  5e                   pop esi
// 0066c38d  c20400               ret 4

struct CXTPToolBar {
    void sub_66BFD0(int);
    void sub_66C360(int);
};

void CXTPToolBar::sub_66C360(int arg) {
    sub_66BFD0(arg);
    if (*(unsigned int*)(arg + 0x28) < 0x12) {
        extern void __stdcall sub_685720(int, const char*, void*, int);
        sub_685720(arg, (const char*)0x7cae18, (void*)((char*)this + 0x144), 0);
    }
}

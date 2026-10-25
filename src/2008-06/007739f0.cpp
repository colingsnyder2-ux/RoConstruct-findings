// from server: 100% by tester
// roc 2008-06 007739f0  unit: VCEdit::?$CXTMaskEditT  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007739f0
//
// 007739f0  837c2404ec           cmp dword ptr [esp + 4], -0x14
// 007739f5  56                   push esi
// 007739f6  8bf1                 mov esi, ecx
// 007739f8  7521                 jne 0x773a1b
// 007739fa  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007739fe  f7400400004000       test dword ptr [eax + 4], 0x400000
// 00773a05  7414                 je 0x773a1b
// 00773a07  8b16                 mov edx, dword ptr [esi]
// 00773a09  8b8264010000         mov eax, dword ptr [edx + 0x164]
// 00773a0f  ffd0                 call eax
// 00773a11  c786a400000001000000 mov dword ptr [esi + 0xa4], 1
// 00773a1b  8bce                 mov ecx, esi
// 00773a1d  e846d2f2ff           call 0x6a0c68
// 00773a22  5e                   pop esi
// 00773a23  c20800               ret 8

struct CXTMaskEditT {
    void OnNotify(int, int);
    void sub_63023E();
};

void CXTMaskEditT::OnNotify(int code, int pNotify) {
    if (code == -0x14) {
        if (*(unsigned int*)(pNotify + 4) & 0x400000) {
            void (__thiscall *fn)(CXTMaskEditT*) = *(void (__thiscall **)(CXTMaskEditT*))(*(int*)this + 0x164);
            fn(this);
            *(int*)((char*)this + 0xa4) = 1;
        }
    }
    sub_63023E();
}

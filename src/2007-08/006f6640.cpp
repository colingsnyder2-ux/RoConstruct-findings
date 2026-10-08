// from server: 100% by colin
// roc 2007-08 006f6640  unit: VCEdit::?$CXTMaskEditT  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f6640
//
// 006f6640  837c2404ec           cmp dword ptr [esp + 4], -0x14
// 006f6645  56                   push esi
// 006f6646  8bf1                 mov esi, ecx
// 006f6648  7521                 jne 0x6f666b
// 006f664a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006f664e  f7400400004000       test dword ptr [eax + 4], 0x400000
// 006f6655  7414                 je 0x6f666b
// 006f6657  8b16                 mov edx, dword ptr [esi]
// 006f6659  8b825c010000         mov eax, dword ptr [edx + 0x15c]
// 006f665f  ffd0                 call eax
// 006f6661  c786a400000001000000 mov dword ptr [esi + 0xa4], 1
// 006f666b  8bce                 mov ecx, esi
// 006f666d  e8cc9bf3ff           call 0x63023e
// 006f6672  5e                   pop esi
// 006f6673  c20800               ret 8

struct CXTMaskEditT {
    void OnNotify(int, int);
    void sub_63023E();
};

void CXTMaskEditT::OnNotify(int code, int pNotify) {
    if (code == -0x14) {
        if (*(unsigned int*)(pNotify + 4) & 0x400000) {
            void (__thiscall *fn)(CXTMaskEditT*) = *(void (__thiscall **)(CXTMaskEditT*))(*(int*)this + 0x15c);
            fn(this);
            *(int*)((char*)this + 0xa4) = 1;
        }
    }
    sub_63023E();
}

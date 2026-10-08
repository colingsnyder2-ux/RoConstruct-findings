// from server: 100% by colin
// roc 2007-08 006590f0  unit: CXTPReportControl  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006590f0
//
// 006590f0  56                   push esi
// 006590f1  8bf1                 mov esi, ecx
// 006590f3  e888f40d00           call 0x738580
// 006590f8  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 006590fe  8b01                 mov eax, dword ptr [ecx]
// 00659100  8b5058               mov edx, dword ptr [eax + 0x58]
// 00659103  ffd2                 call edx
// 00659105  8bce                 mov ecx, esi
// 00659107  5e                   pop esi
// 00659108  e903e3ffff           jmp 0x657410

struct CXTPReportControl {
    void sub_738580();
    void sub_657410();
    void target();
};

void CXTPReportControl::target() {
    sub_738580();
    int* p = *(int**)((char*)this + 0xb0);
    void (__thiscall *fn)(void*) = *(void (__thiscall **)(void*))((char*)*p + 0x58);
    fn(p);
    sub_657410();
}

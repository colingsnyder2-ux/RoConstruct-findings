// from server: 100% by tester
// roc 2008-06 006ce010  unit: CXTPReportControl  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ce010
//
// 006ce010  56                   push esi
// 006ce011  8bf1                 mov esi, ecx
// 006ce013  e84ae20e00           call 0x7bc262
// 006ce018  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006ce01e  8b01                 mov eax, dword ptr [ecx]
// 006ce020  8b5058               mov edx, dword ptr [eax + 0x58]
// 006ce023  ffd2                 call edx
// 006ce025  8bce                 mov ecx, esi
// 006ce027  5e                   pop esi
// 006ce028  e903dfffff           jmp 0x6cbf30

struct CXTPReportControl {
    void sub_738580();
    void sub_657410();
    void target();
};

void CXTPReportControl::target() {
    sub_738580();
    int* p = *(int**)((char*)this + 0x100);
    void (__thiscall *fn)(void*) = *(void (__thiscall **)(void*))((char*)*p + 0x58);
    fn(p);
    sub_657410();
}

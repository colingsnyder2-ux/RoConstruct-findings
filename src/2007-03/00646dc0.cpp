// roc 2007-03 00646dc0  unit: seg_00640000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00646dc0
//
// 00646dc0  56                   push esi
// 00646dc1  8bf1                 mov esi, ecx
// 00646dc3  e8043f0f00           call 0x73accc
// 00646dc8  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 00646dce  8b01                 mov eax, dword ptr [ecx]
// 00646dd0  8b5058               mov edx, dword ptr [eax + 0x58]
// 00646dd3  ffd2                 call edx
// 00646dd5  8bce                 mov ecx, esi
// 00646dd7  5e                   pop esi
// 00646dd8  e953e4ffff           jmp 0x645230
// copied from an identical function in another client (function ?target@CXTPReportControl@ns_ROCX000036@@QAEXXZ)

namespace ns_ROCX000036 {
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
}

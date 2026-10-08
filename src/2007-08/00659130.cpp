// from server: 100% by colin
// roc 2007-08 00659130  unit: CXTPReportControl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00659130
//
// 00659130  56                   push esi
// 00659131  8bf1                 mov esi, ecx
// 00659133  e80671fdff           call 0x63023e
// 00659138  8b06                 mov eax, dword ptr [esi]
// 0065913a  8b90b8010000         mov edx, dword ptr [eax + 0x1b8]
// 00659140  8bce                 mov ecx, esi
// 00659142  ffd2                 call edx
// 00659144  8bce                 mov ecx, esi
// 00659146  e8c5e2ffff           call 0x657410
// 0065914b  5e                   pop esi
// 0065914c  c20400               ret 4

struct CXTPReportControl {
    void sub_63023E();
    void sub_657410();
    void Method(int arg);
};

void CXTPReportControl::Method(int arg) {
    sub_63023E();
    void (CXTPReportControl::*pmf)() = *(void (CXTPReportControl::**)())(*(int*)this + 0x1b8);
    (this->*pmf)();
    sub_657410();
}

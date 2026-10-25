// from server: 100% by tester
// roc 2008-06 006ce050  unit: CXTPReportControl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ce050
//
// 006ce050  56                   push esi
// 006ce051  8bf1                 mov esi, ecx
// 006ce053  e8102cfdff           call 0x6a0c68
// 006ce058  8b06                 mov eax, dword ptr [esi]
// 006ce05a  8b9014020000         mov edx, dword ptr [eax + 0x214]
// 006ce060  8bce                 mov ecx, esi
// 006ce062  ffd2                 call edx
// 006ce064  8bce                 mov ecx, esi
// 006ce066  e8c5deffff           call 0x6cbf30
// 006ce06b  5e                   pop esi
// 006ce06c  c20400               ret 4

struct CXTPReportControl {
    void sub_63023E();
    void sub_657410();
    void Method(int arg);
};

void CXTPReportControl::Method(int arg) {
    sub_63023E();
    void (CXTPReportControl::*pmf)() = *(void (CXTPReportControl::**)())(*(int*)this + 0x214);
    (this->*pmf)();
    sub_657410();
}

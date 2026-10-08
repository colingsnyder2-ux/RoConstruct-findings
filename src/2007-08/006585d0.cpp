// from server: 100% by colin
// roc 2007-08 006585d0  unit: CXTPReportControl  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006585d0
//
// 006585d0  56                   push esi
// 006585d1  8bf1                 mov esi, ecx
// 006585d3  83be6801000000       cmp dword ptr [esi + 0x168], 0
// 006585da  740b                 je 0x6585e7
// 006585dc  8b8e00020000         mov ecx, dword ptr [esi + 0x200]
// 006585e2  e859810000           call 0x660740
// 006585e7  8bce                 mov ecx, esi
// 006585e9  e8507cfdff           call 0x63023e
// 006585ee  5e                   pop esi
// 006585ef  c20400               ret 4

struct CXTPReportControl {
    void sub_660740();
    void sub_63023e();
    void func(int);
};

void CXTPReportControl::func(int) {
    if (*(int*)((char*)this + 0x168) != 0) {
        (*(CXTPReportControl**)((char*)this + 0x200))->sub_660740();
    }
    sub_63023e();
}

// from server: 100% by tester
// roc 2011-06 008b8300  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b8300
//
// 008b8300  8b01                 mov eax, dword ptr [ecx]
// 008b8302  8b4078               mov eax, dword ptr [eax + 0x78]
// 008b8305  ffe0                 jmp eax

struct CXTPReportHyperlink {
    int GetSomething();
};

int CXTPReportHyperlink::GetSomething()
{
    typedef int (CXTPReportHyperlink::*PMF)();
    PMF p = *(PMF*)(*(int*)this + 0x78);
    return (this->*p)();
}
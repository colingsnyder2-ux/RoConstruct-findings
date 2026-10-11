// from server: 100% by tester
// roc 2008-06 0074ede0  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074ede0
//
// 0074ede0  8b01                 mov eax, dword ptr [ecx]
// 0074ede2  8b4078               mov eax, dword ptr [eax + 0x78]
// 0074ede5  ffe0                 jmp eax

struct CXTPReportHyperlink {
    int GetSomething();
};

int CXTPReportHyperlink::GetSomething()
{
    typedef int (CXTPReportHyperlink::*PMF)();
    PMF p = *(PMF*)(*(int*)this + 0x78);
    return (this->*p)();
}
// from server: 100% by tester
// roc 2010-06 0053c7f0  unit: RBX::AdornG3D  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0053c7f0
//
// 0053c7f0  8b01                 mov eax, dword ptr [ecx]
// 0053c7f2  8b4048               mov eax, dword ptr [eax + 0x48]
// 0053c7f5  ffe0                 jmp eax

struct CXTPReportHyperlink {
    int GetSomething();
};

int CXTPReportHyperlink::GetSomething()
{
    typedef int (CXTPReportHyperlink::*PMF)();
    PMF p = *(PMF*)(*(int*)this + 0x48);
    return (this->*p)();
}
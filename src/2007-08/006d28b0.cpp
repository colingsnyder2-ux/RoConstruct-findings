// from server: 100% by colin
// roc 2007-08 006d28b0  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d28b0
//
// 006d28b0  8b01                 mov eax, dword ptr [ecx]
// 006d28b2  8b407c               mov eax, dword ptr [eax + 0x7c]
// 006d28b5  ffe0                 jmp eax

struct CXTPReportHyperlink {
    int GetSomething();
};

int CXTPReportHyperlink::GetSomething()
{
    typedef int (CXTPReportHyperlink::*PMF)();
    PMF p = *(PMF*)(*(int*)this + 0x7c);
    return (this->*p)();
}

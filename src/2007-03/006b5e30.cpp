// roc 2007-03 006b5e30  unit: seg_006b0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006b5e30
//
// 006b5e30  8b01                 mov eax, dword ptr [ecx]
// 006b5e32  8b407c               mov eax, dword ptr [eax + 0x7c]
// 006b5e35  ffe0                 jmp eax
// copied from an identical function in another client (function ?GetSomething@CXTPReportHyperlink@ns_ROCX000014@@QAEHXZ)

namespace ns_ROCX000014 {
struct CXTPReportHyperlink {
    int GetSomething();
};

int CXTPReportHyperlink::GetSomething()
{
    typedef int (CXTPReportHyperlink::*PMF)();
    PMF p = *(PMF*)(*(int*)this + 0x7c);
    return (this->*p)();
}
}

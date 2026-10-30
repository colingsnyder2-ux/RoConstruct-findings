// roc 2009-12 005dc9b0  unit: RBX::AdornG3D  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005dc9b0
//
// 005dc9b0  8b01                 mov eax, dword ptr [ecx]
// 005dc9b2  8b4048               mov eax, dword ptr [eax + 0x48]
// 005dc9b5  ffe0                 jmp eax
// copied from an identical function in another client (function ?GetSomething@CXTPReportHyperlink@ns_ROCX00000f@@QAEHXZ)

namespace ns_ROCX00000f {
struct CXTPReportHyperlink {
    int GetSomething();
};

int CXTPReportHyperlink::GetSomething()
{
    typedef int (CXTPReportHyperlink::*PMF)();
    PMF p = *(PMF*)(*(int*)this + 0x48);
    return (this->*p)();
}
}

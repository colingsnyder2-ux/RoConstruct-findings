// from server: 100% by tester
// roc 2010-06 004fd430  unit: RBX::Network::Replicator  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004fd430
//
// 004fd430  8b01                 mov eax, dword ptr [ecx]
// 004fd432  8b4064               mov eax, dword ptr [eax + 0x64]
// 004fd435  ffe0                 jmp eax

struct CXTPReportHyperlink {
    int GetSomething();
};

int CXTPReportHyperlink::GetSomething()
{
    typedef int (CXTPReportHyperlink::*PMF)();
    PMF p = *(PMF*)(*(int*)this + 0x64);
    return (this->*p)();
}
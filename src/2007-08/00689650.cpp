// from server: 84% by colin
// roc 2007-08 00689650  unit: CXTPTabClientWnd::CWorkspace  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00689650
//
// 00689650  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 00689656  85c0                 test eax, eax
// 00689658  740d                 je 0x689667
// 0068965a  83786400             cmp dword ptr [eax + 0x64], 0
// 0068965e  7408                 je 0x689668
// 00689660  c7406001000000       mov dword ptr [eax + 0x60], 1
// 00689667  c3                   ret 
// 00689668  8bc8                 mov ecx, eax
// 0068966a  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0068966d  8b5008               mov edx, dword ptr [eax + 8]
// 00689670  83c154               add ecx, 0x54
// 00689673  ffe2                 jmp edx

struct CXTPTabClientWnd_CWorkspace
{
    char pad[0x54];
    void* m_pSomething;
    char pad2[0x8c - 0x58];
    void* m_pOther;
    void DoSomething();
};

void CXTPTabClientWnd_CWorkspace::DoSomething()
{
    void* p = m_pOther;
    if (p != 0)
    {
        if (*(int*)((char*)p + 0x64) != 0)
        {
            *(int*)((char*)p + 0x60) = 1;
            return;
        }
        void* q = *(void**)((char*)p + 0x54);
        void (*fn)() = *(void (**)())((char*)q + 8);
        fn();
    }
}

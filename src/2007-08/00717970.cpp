// from server: 92% by colin
// roc 2007-08 00717970  unit: CXTPRibbonTabPopupToolBar  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00717970
//
// 00717970  53                   push ebx
// 00717971  56                   push esi
// 00717972  8bf1                 mov esi, ecx
// 00717974  8b4614               mov eax, dword ptr [esi + 0x14]
// 00717977  8b8884000000         mov ecx, dword ptr [eax + 0x84]
// 0071797d  57                   push edi
// 0071797e  8b7938               mov edi, dword ptr [ecx + 0x38]
// 00717981  6a00                 push 0
// 00717983  8d9eb8fdffff         lea ebx, [esi - 0x248]
// 00717989  6aff                 push -1
// 0071798b  8bcb                 mov ecx, ebx
// 0071798d  e8dee0f2ff           call 0x645a70
// 00717992  837c241000           cmp dword ptr [esp + 0x10], 0
// 00717997  7409                 je 0x7179a2
// 00717999  83ef28               sub edi, 0x28
// 0071799c  7907                 jns 0x7179a5
// 0071799e  33ff                 xor edi, edi
// 007179a0  eb03                 jmp 0x7179a5
// 007179a2  83c728               add edi, 0x28
// 007179a5  3b7e04               cmp edi, dword ptr [esi + 4]
// 007179a8  740f                 je 0x7179b9
// 007179aa  8b13                 mov edx, dword ptr [ebx]
// 007179ac  8b827c010000         mov eax, dword ptr [edx + 0x17c]
// 007179b2  8bcb                 mov ecx, ebx
// 007179b4  897e04               mov dword ptr [esi + 4], edi
// 007179b7  ffd0                 call eax
// 007179b9  5f                   pop edi
// 007179ba  5e                   pop esi
// 007179bb  5b                   pop ebx
// 007179bc  c20400               ret 4

struct CXTPRibbonTabPopupToolBar {
    char pad0[4];
    int m_nOffset;
    char pad8[0x14 - 8];
    void* m_pSomething;
    void f(int n);
};

extern "C" void __stdcall sub_645a70(void*, int, int);

void CXTPRibbonTabPopupToolBar::f(int n)
{
    int* p = (int*)m_pSomething;
    int* q = (int*)p[0x84 / 4];
    int v = q[0x38 / 4];
    char* base = (char*)this - 0x248;
    sub_645a70(base, -1, 0);
    if (n != 0) {
        v -= 0x28;
        if (v < 0)
            v = 0;
    } else {
        v += 0x28;
    }
    if (v != m_nOffset) {
        int* vt = *(int**)base;
        void (__thiscall *fn)(void*) = (void (__thiscall *)(void*))vt[0x17c / 4];
        m_nOffset = v;
        fn(base);
    }
}

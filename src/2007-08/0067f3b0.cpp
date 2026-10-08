// from server: 100% by colin
// roc 2007-08 0067f3b0  unit: CXTPControlSelector  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067f3b0
//
// 0067f3b0  56                   push esi
// 0067f3b1  8bf1                 mov esi, ecx
// 0067f3b3  68306d7c00           push 0x7c6d30
// 0067f3b8  c706f8ea7c00         mov dword ptr [esi], 0x7ceaf8
// 0067f3be  c7460800000000       mov dword ptr [esi + 8], 0
// 0067f3c5  ff157cd27700         call dword ptr [0x77d27c]
// 0067f3cb  85c0                 test eax, eax
// 0067f3cd  894604               mov dword ptr [esi + 4], eax
// 0067f3d0  740f                 je 0x67f3e1
// 0067f3d2  68e4ea7c00           push 0x7ceae4
// 0067f3d7  50                   push eax
// 0067f3d8  ff1588d27700         call dword ptr [0x77d288]
// 0067f3de  894608               mov dword ptr [esi + 8], eax
// 0067f3e1  8bc6                 mov eax, esi
// 0067f3e3  5e                   pop esi
// 0067f3e4  c3                   ret 

extern "C" __declspec(dllimport) void* __stdcall LoadLibraryA(const char*);
extern "C" __declspec(dllimport) void* __stdcall GetProcAddress(void*, const char*);

struct CXTPControlSelector {
    void* m_pVtable;
    void* m_hModule;
    void* m_pGradientFill;
    CXTPControlSelector();
};

CXTPControlSelector::CXTPControlSelector()
{
    m_pVtable = (void*)0x7ceaf8;
    m_pGradientFill = 0;
    m_hModule = LoadLibraryA((const char*)0x7c6d30);
    if (m_hModule != 0)
    {
        m_pGradientFill = GetProcAddress(m_hModule, (const char*)0x7ceae4);
    }
}

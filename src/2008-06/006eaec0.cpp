// from server: 100% by tester
// roc 2008-06 006eaec0  unit: CXTPCustomizeSheet  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006eaec0
//
// 006eaec0  53                   push ebx
// 006eaec1  56                   push esi
// 006eaec2  57                   push edi
// 006eaec3  8b3d98218000         mov edi, dword ptr [0x802198]
// 006eaec9  8bf1                 mov esi, ecx
// 006eaecb  ffd7                 call edi
// 006eaecd  8b1dd82b8000         mov ebx, dword ptr [0x802bd8]
// 006eaed3  50                   push eax
// 006eaed4  6a00                 push 0
// 006eaed6  6850a36e00           push 0x6ea350
// 006eaedb  6a07                 push 7
// 006eaedd  ffd3                 call ebx
// 006eaedf  8906                 mov dword ptr [esi], eax
// 006eaee1  ffd7                 call edi
// 006eaee3  50                   push eax
// 006eaee4  6a00                 push 0
// 006eaee6  68b0a36e00           push 0x6ea3b0
// 006eaeeb  6a02                 push 2
// 006eaeed  ffd3                 call ebx
// 006eaeef  89460c               mov dword ptr [esi + 0xc], eax
// 006eaef2  ffd7                 call edi
// 006eaef4  50                   push eax
// 006eaef5  6a00                 push 0
// 006eaef7  6810a46e00           push 0x6ea410
// 006eaefc  6a04                 push 4
// 006eaefe  ffd3                 call ebx
// 006eaf00  5f                   pop edi
// 006eaf01  894618               mov dword ptr [esi + 0x18], eax
// 006eaf04  5e                   pop esi
// 006eaf05  5b                   pop ebx
// 006eaf06  c3                   ret 

extern "C" __declspec(dllimport) unsigned long __stdcall GetCurrentThreadId();
extern "C" __declspec(dllimport) void* __stdcall SetWindowsHookExA(int, void*, void*, unsigned long);

struct CXTPCustomizeSheet {
    void* m_pHook1;
    int m_pad1;
    int m_pad2;
    void* m_pHook2;
    int m_pad3;
    int m_pad4;
    void* m_pHook3;
    void Init();
};

void CXTPCustomizeSheet::Init()
{
    unsigned long (__stdcall *pGetCurrentThreadId)() = GetCurrentThreadId;
    void* (__stdcall *pSetWindowsHookExA)(int, void*, void*, unsigned long) = SetWindowsHookExA;

    unsigned long tid = pGetCurrentThreadId();
    m_pHook1 = pSetWindowsHookExA(7, (void*)0x6734f0, 0, tid);

    tid = pGetCurrentThreadId();
    m_pHook2 = pSetWindowsHookExA(2, (void*)0x673550, 0, tid);

    tid = pGetCurrentThreadId();
    m_pHook3 = pSetWindowsHookExA(4, (void*)0x6735b0, 0, tid);
}

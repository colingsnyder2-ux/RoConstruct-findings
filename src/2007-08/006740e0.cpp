// from server: 100% by colin
// roc 2007-08 006740e0  unit: CXTPCustomizeSheet  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006740e0
//
// 006740e0  53                   push ebx
// 006740e1  56                   push esi
// 006740e2  57                   push edi
// 006740e3  8b3dc4d27700         mov edi, dword ptr [0x77d2c4]
// 006740e9  8bf1                 mov esi, ecx
// 006740eb  ffd7                 call edi
// 006740ed  8b1d3cee7700         mov ebx, dword ptr [0x77ee3c]
// 006740f3  50                   push eax
// 006740f4  6a00                 push 0
// 006740f6  68f0346700           push 0x6734f0
// 006740fb  6a07                 push 7
// 006740fd  ffd3                 call ebx
// 006740ff  8906                 mov dword ptr [esi], eax
// 00674101  ffd7                 call edi
// 00674103  50                   push eax
// 00674104  6a00                 push 0
// 00674106  6850356700           push 0x673550
// 0067410b  6a02                 push 2
// 0067410d  ffd3                 call ebx
// 0067410f  89460c               mov dword ptr [esi + 0xc], eax
// 00674112  ffd7                 call edi
// 00674114  50                   push eax
// 00674115  6a00                 push 0
// 00674117  68b0356700           push 0x6735b0
// 0067411c  6a04                 push 4
// 0067411e  ffd3                 call ebx
// 00674120  5f                   pop edi
// 00674121  894618               mov dword ptr [esi + 0x18], eax
// 00674124  5e                   pop esi
// 00674125  5b                   pop ebx
// 00674126  c3                   ret 

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

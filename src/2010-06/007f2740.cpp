// from server: 100% by tester
// roc 2010-06 007f2740  unit: CXTPCustomizeSheet  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f2740
//
// 007f2740  53                   push ebx
// 007f2741  56                   push esi
// 007f2742  57                   push edi
// 007f2743  8b3d94a39e00         mov edi, dword ptr [0x9ea394]
// 007f2749  8bf1                 mov esi, ecx
// 007f274b  ffd7                 call edi
// 007f274d  8b1da0ba9e00         mov ebx, dword ptr [0x9ebaa0]
// 007f2753  50                   push eax
// 007f2754  6a00                 push 0
// 007f2756  68d01b7f00           push 0x7f1bd0
// 007f275b  6a07                 push 7
// 007f275d  ffd3                 call ebx
// 007f275f  8906                 mov dword ptr [esi], eax
// 007f2761  ffd7                 call edi
// 007f2763  50                   push eax
// 007f2764  6a00                 push 0
// 007f2766  68301c7f00           push 0x7f1c30
// 007f276b  6a02                 push 2
// 007f276d  ffd3                 call ebx
// 007f276f  89460c               mov dword ptr [esi + 0xc], eax
// 007f2772  ffd7                 call edi
// 007f2774  50                   push eax
// 007f2775  6a00                 push 0
// 007f2777  68901c7f00           push 0x7f1c90
// 007f277c  6a04                 push 4
// 007f277e  ffd3                 call ebx
// 007f2780  5f                   pop edi
// 007f2781  894618               mov dword ptr [esi + 0x18], eax
// 007f2784  5e                   pop esi
// 007f2785  5b                   pop ebx
// 007f2786  c3                   ret 

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

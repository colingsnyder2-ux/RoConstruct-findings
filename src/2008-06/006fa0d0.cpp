// from server: 100% by tester
// roc 2008-06 006fa0d0  unit: XTP_PRINT_STATE  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fa0d0
//
// 006fa0d0  56                   push esi
// 006fa0d1  8b742408             mov esi, dword ptr [esp + 8]
// 006fa0d5  85f6                 test esi, esi
// 006fa0d7  742c                 je 0x6fa105
// 006fa0d9  833df8e8970000       cmp dword ptr [0x97e8f8], 0
// 006fa0e0  753d                 jne 0x6fa11f
// 006fa0e2  ff1598218000         call dword ptr [0x802198]
// 006fa0e8  50                   push eax
// 006fa0e9  6a00                 push 0
// 006fa0eb  6800996f00           push 0x6f9900
// 006fa0f0  6a07                 push 7
// 006fa0f2  ff15d82b8000         call dword ptr [0x802bd8]
// 006fa0f8  8935fce89700         mov dword ptr [0x97e8fc], esi
// 006fa0fe  a3f8e89700           mov dword ptr [0x97e8f8], eax
// 006fa103  5e                   pop esi
// 006fa104  c3                   ret 
// 006fa105  a1f8e89700           mov eax, dword ptr [0x97e8f8]
// 006fa10a  85c0                 test eax, eax
// 006fa10c  7411                 je 0x6fa11f
// 006fa10e  50                   push eax
// 006fa10f  ff15582c8000         call dword ptr [0x802c58]
// 006fa115  c705f8e8970000000000 mov dword ptr [0x97e8f8], 0
// 006fa11f  8935fce89700         mov dword ptr [0x97e8fc], esi
// 006fa125  5e                   pop esi
// 006fa126  c3                   ret 

extern "C" __declspec(dllimport) unsigned long __stdcall GetCurrentThreadId();
extern "C" __declspec(dllimport) void* __stdcall SetWindowsHookExA(int, void*, void*, unsigned long);
extern "C" __declspec(dllimport) int __stdcall UnhookWindowsHookEx(void*);

void* g_hook = 0;
void* g_target = 0;

void __cdecl SetHook(void* target)
{
    if (target != 0)
    {
        if (g_hook == 0)
        {
            unsigned long tid = GetCurrentThreadId();
            g_hook = SetWindowsHookExA(7, (void*)0x681f70, 0, tid);
            g_target = target;
            return;
        }
    }
    else
    {
        if (g_hook != 0)
        {
            UnhookWindowsHookEx(g_hook);
            g_hook = 0;
        }
    }
    g_target = target;
}

// from server: 100% by colin
// roc 2007-08 00682740  unit: XTP_PRINT_STATE  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00682740
//
// 00682740  56                   push esi
// 00682741  8b742408             mov esi, dword ptr [esp + 8]
// 00682745  85f6                 test esi, esi
// 00682747  742c                 je 0x682775
// 00682749  833d508f8c0000       cmp dword ptr [0x8c8f50], 0
// 00682750  753d                 jne 0x68278f
// 00682752  ff15c4d27700         call dword ptr [0x77d2c4]
// 00682758  50                   push eax
// 00682759  6a00                 push 0
// 0068275b  68701f6800           push 0x681f70
// 00682760  6a07                 push 7
// 00682762  ff153cee7700         call dword ptr [0x77ee3c]
// 00682768  8935548f8c00         mov dword ptr [0x8c8f54], esi
// 0068276e  a3508f8c00           mov dword ptr [0x8c8f50], eax
// 00682773  5e                   pop esi
// 00682774  c3                   ret 
// 00682775  a1508f8c00           mov eax, dword ptr [0x8c8f50]
// 0068277a  85c0                 test eax, eax
// 0068277c  7411                 je 0x68278f
// 0068277e  50                   push eax
// 0068277f  ff1538ee7700         call dword ptr [0x77ee38]
// 00682785  c705508f8c0000000000 mov dword ptr [0x8c8f50], 0
// 0068278f  8935548f8c00         mov dword ptr [0x8c8f54], esi
// 00682795  5e                   pop esi
// 00682796  c3                   ret 

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

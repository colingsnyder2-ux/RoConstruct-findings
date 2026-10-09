// roc 2010-06 00840e00  unit: CXTPHookManager::CHookSink  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00840e00
//
// 00840e00  53                   push ebx
// 00840e01  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00840e05  56                   push esi
// 00840e06  57                   push edi
// 00840e07  53                   push ebx
// 00840e08  8bf9                 mov edi, ecx
// 00840e0a  e8a1ffffff           call 0x840db0
// 00840e0f  8bf0                 mov esi, eax
// 00840e11  85f6                 test esi, esi
// 00840e13  7413                 je 0x840e28
// 00840e15  53                   push ebx
// 00840e16  8bcf                 mov ecx, edi
// 00840e18  e8536c0000           call 0x847a70
// 00840e1d  8b06                 mov eax, dword ptr [esi]
// 00840e1f  8b5004               mov edx, dword ptr [eax + 4]
// 00840e22  6a01                 push 1
// 00840e24  8bce                 mov ecx, esi
// 00840e26  ffd2                 call edx
// 00840e28  5f                   pop edi
// 00840e29  5e                   pop esi
// 00840e2a  5b                   pop ebx
// 00840e2b  c20400               ret 4
// copied from an identical function in another client (function ?DoRemove@CHookSink@ns_ROCX000025@ns_ROCX00003b@@QAEXH@Z)

namespace ns_ROCX000025 {
namespace ns_ROCX000007 {
struct KernelData {
    void* m_field0;
    char pad0[8];
    void* m_fieldC;
};

struct Kernel {
    KernelData* getKernelData();
    int step(int a, int b, int c, int d, int e);
};

extern "C" __declspec(dllimport) void* __stdcall GetProcAddress(void* hModule, const char* lpProcName);

extern void* g_module_handle;
extern char g_proc_name[];

int Kernel::step(int a, int b, int c, int d, int e)
{
    KernelData* kd = getKernelData();
    if (kd->m_fieldC != 0 && kd->m_field0 == 0) {
        kd->m_field0 = GetProcAddress(kd->m_fieldC, g_proc_name);
    }
    void* fn = kd->m_field0;
    if (fn != 0) {
        typedef int (__stdcall *Fn)(int, int, int, int, int);
        return ((Fn)fn)(a, b, c, d, e);
    }
    return (int)0x80004005;
}
}
}

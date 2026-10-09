// roc 2009-06 00791030  unit: CXTPPropertyGridItemEnum  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00791030
//
// 00791030  56                   push esi
// 00791031  e8caffffff           call 0x791000
// 00791036  8bf0                 mov esi, eax
// 00791038  8b460c               mov eax, dword ptr [esi + 0xc]
// 0079103b  85c0                 test eax, eax
// 0079103d  7413                 je 0x791052
// 0079103f  833e00               cmp dword ptr [esi], 0
// 00791042  750e                 jne 0x791052
// 00791044  6850f68f00           push 0x8ff650
// 00791049  50                   push eax
// 0079104a  ff15e8e18900         call dword ptr [0x89e1e8]
// 00791050  8906                 mov dword ptr [esi], eax
// 00791052  8b36                 mov esi, dword ptr [esi]
// 00791054  85f6                 test esi, esi
// 00791056  741f                 je 0x791077
// 00791058  8b442418             mov eax, dword ptr [esp + 0x18]
// 0079105c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00791060  8b542410             mov edx, dword ptr [esp + 0x10]
// 00791064  50                   push eax
// 00791065  8b442410             mov eax, dword ptr [esp + 0x10]
// 00791069  51                   push ecx
// 0079106a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0079106e  52                   push edx
// 0079106f  50                   push eax
// 00791070  51                   push ecx
// 00791071  ffd6                 call esi
// 00791073  5e                   pop esi
// 00791074  c21400               ret 0x14
// 00791077  b805400080           mov eax, 0x80004005
// 0079107c  5e                   pop esi
// 0079107d  c21400               ret 0x14
// copied from an identical function in another client (function ?step@Kernel@ns_ROCX000007@@QAEHHHHHH@Z)

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

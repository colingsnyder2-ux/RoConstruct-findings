// roc 2008-06 007188d0  unit: RBX::Kernel  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007188d0
//
// 007188d0  56                   push esi
// 007188d1  e8baffffff           call 0x718890
// 007188d6  8bf0                 mov esi, eax
// 007188d8  8b460c               mov eax, dword ptr [esi + 0xc]
// 007188db  85c0                 test eax, eax
// 007188dd  7413                 je 0x7188f2
// 007188df  833e00               cmp dword ptr [esi], 0
// 007188e2  750e                 jne 0x7188f2
// 007188e4  6810e68500           push 0x85e610
// 007188e9  50                   push eax
// 007188ea  ff15c0218000         call dword ptr [0x8021c0]
// 007188f0  8906                 mov dword ptr [esi], eax
// 007188f2  8b36                 mov esi, dword ptr [esi]
// 007188f4  85f6                 test esi, esi
// 007188f6  741f                 je 0x718917
// 007188f8  8b442418             mov eax, dword ptr [esp + 0x18]
// 007188fc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00718900  8b542410             mov edx, dword ptr [esp + 0x10]
// 00718904  50                   push eax
// 00718905  8b442410             mov eax, dword ptr [esp + 0x10]
// 00718909  51                   push ecx
// 0071890a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0071890e  52                   push edx
// 0071890f  50                   push eax
// 00718910  51                   push ecx
// 00718911  ffd6                 call esi
// 00718913  5e                   pop esi
// 00718914  c21400               ret 0x14
// 00718917  b805400080           mov eax, 0x80004005
// 0071891c  5e                   pop esi
// 0071891d  c21400               ret 0x14
// copied from an identical function in another client (function ?step@Kernel@ns_ROCX000005@@QAEHHHHHH@Z)

namespace ns_ROCX000005 {
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

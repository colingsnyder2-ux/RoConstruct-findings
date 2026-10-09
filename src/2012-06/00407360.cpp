// roc 2012-06 00407360  unit: VCApp::?$CComObject  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00407360
//
// 00407360  56                   push esi
// 00407361  8bf1                 mov esi, ecx
// 00407363  8b06                 mov eax, dword ptr [esi]
// 00407365  50                   push eax
// 00407366  ff15b821b200         call dword ptr [0xb221b8]
// 0040736c  c6460401             mov byte ptr [esi + 4], 1
// 00407370  33c0                 xor eax, eax
// 00407372  5e                   pop esi
// 00407373  c3                   ret 
// copied from an identical function in another client (function ?Initialize@VCWorkspaceComObject@ns_ROCX00005c@@QAEHXZ)

namespace ns_ROCX00005c {
struct VCWorkspaceComObject {
    void* m_pVtbl;
    unsigned char m_bInitialized;
    int Initialize();
};

extern "C" void (__stdcall *EnterCriticalSection)(void* lpCriticalSection);

int VCWorkspaceComObject::Initialize()
{
    EnterCriticalSection(m_pVtbl);
    m_bInitialized = 1;
    return 0;
}
}

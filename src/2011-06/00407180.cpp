// roc 2011-06 00407180  unit: VCApp::?$CComObject  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00407180
//
// 00407180  56                   push esi
// 00407181  8bf1                 mov esi, ecx
// 00407183  8b06                 mov eax, dword ptr [esi]
// 00407185  50                   push eax
// 00407186  ff158403a400         call dword ptr [0xa40384]
// 0040718c  c6460401             mov byte ptr [esi + 4], 1
// 00407190  33c0                 xor eax, eax
// 00407192  5e                   pop esi
// 00407193  c3                   ret 
// copied from an identical function in another client (function ?Initialize@VCWorkspaceComObject@ns_ROCX000039@@QAEHXZ)

namespace ns_ROCX000039 {
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

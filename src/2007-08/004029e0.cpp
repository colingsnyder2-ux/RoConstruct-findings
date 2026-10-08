// from server: 100% by colin
// roc 2007-08 004029e0  unit: VCWorkspace::?$CComObject  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004029e0
//
// 004029e0  56                   push esi
// 004029e1  8bf1                 mov esi, ecx
// 004029e3  8b06                 mov eax, dword ptr [esi]
// 004029e5  50                   push eax
// 004029e6  ff15fcd27700         call dword ptr [0x77d2fc]
// 004029ec  c6460401             mov byte ptr [esi + 4], 1
// 004029f0  33c0                 xor eax, eax
// 004029f2  5e                   pop esi
// 004029f3  c3                   ret 

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

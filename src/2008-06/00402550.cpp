// roc 2008-06 00402550  unit: std::bad_alloc  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00402550
//
// 00402550  56                   push esi
// 00402551  8bf1                 mov esi, ecx
// 00402553  8b06                 mov eax, dword ptr [esi]
// 00402555  50                   push eax
// 00402556  ff15d4228000         call dword ptr [0x8022d4]
// 0040255c  c6460401             mov byte ptr [esi + 4], 1
// 00402560  33c0                 xor eax, eax
// 00402562  5e                   pop esi
// 00402563  c3                   ret 
// copied from an identical function in another client (function ?Initialize@VCWorkspaceComObject@ns_ROCX000008@@QAEHXZ)

namespace ns_ROCX000008 {
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

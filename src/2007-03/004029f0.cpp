// roc 2007-03 004029f0  unit: seg_00400000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004029f0
//
// 004029f0  56                   push esi
// 004029f1  8bf1                 mov esi, ecx
// 004029f3  8b06                 mov eax, dword ptr [esi]
// 004029f5  50                   push eax
// 004029f6  ff15bcd27700         call dword ptr [0x77d2bc]
// 004029fc  c6460401             mov byte ptr [esi + 4], 1
// 00402a00  33c0                 xor eax, eax
// 00402a02  5e                   pop esi
// 00402a03  c3                   ret 
// copied from an identical function in another client (function ?Initialize@VCWorkspaceComObject@ns_ROCX000017@@QAEHXZ)

namespace ns_ROCX000017 {
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

// roc 2011-06 004599d0  unit: VCRoblox3D::?$CComObject  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004599d0
//
// 004599d0  8b542408             mov edx, dword ptr [esp + 8]
// 004599d4  56                   push esi
// 004599d5  8b32                 mov esi, dword ptr [edx]
// 004599d7  57                   push edi
// 004599d8  33c9                 xor ecx, ecx
// 004599da  8d9b00000000         lea ebx, [ebx]
// 004599e0  8b81d836c100         mov eax, dword ptr [ecx + 0xc136d8]
// 004599e6  3930                 cmp dword ptr [eax], esi
// 004599e8  7518                 jne 0x459a02
// 004599ea  8b7804               mov edi, dword ptr [eax + 4]
// 004599ed  3b7a04               cmp edi, dword ptr [edx + 4]
// 004599f0  7510                 jne 0x459a02
// 004599f2  8b7808               mov edi, dword ptr [eax + 8]
// 004599f5  3b7a08               cmp edi, dword ptr [edx + 8]
// 004599f8  7508                 jne 0x459a02
// 004599fa  8b400c               mov eax, dword ptr [eax + 0xc]
// 004599fd  3b420c               cmp eax, dword ptr [edx + 0xc]
// 00459a00  7412                 je 0x459a14
// 00459a02  83c104               add ecx, 4
// 00459a05  83f904               cmp ecx, 4
// 00459a08  72d6                 jb 0x4599e0
// 00459a0a  5f                   pop edi
// 00459a0b  b801000000           mov eax, 1
// 00459a10  5e                   pop esi
// 00459a11  c20800               ret 8
// 00459a14  5f                   pop edi
// 00459a15  33c0                 xor eax, eax
// 00459a17  5e                   pop esi
// 00459a18  c20800               ret 8
// copied from an identical function in another client (function ?f@S_func_00408410@ns_ROCX000004@ns_ROCX000019@@QAEHHPAH@Z)

namespace ns_ROCX000004 {
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
}

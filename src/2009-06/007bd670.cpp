// roc 2009-06 007bd670  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007bd670
//
// 007bd670  56                   push esi
// 007bd671  8bf1                 mov esi, ecx
// 007bd673  8b06                 mov eax, dword ptr [esi]
// 007bd675  57                   push edi
// 007bd676  8b3d60e18900         mov edi, dword ptr [0x89e160]
// 007bd67c  50                   push eax
// 007bd67d  ffd7                 call edi
// 007bd67f  8b4e08               mov ecx, dword ptr [esi + 8]
// 007bd682  51                   push ecx
// 007bd683  ffd7                 call edi
// 007bd685  5f                   pop edi
// 007bd686  8d4e24               lea ecx, [esi + 0x24]
// 007bd689  5e                   pop esi
// 007bd68a  e911ffffff           jmp 0x7bd5a0
// copied from an identical function in another client (function ?Clear@CXTPCommandBarAnimation@ns_ROCX000001@@QAEXXZ)

namespace ns_ROCX000001 {
struct CXTPCommandBarAnimation {
    void* m_pAnimateInfo;
    void* m_pad0;
    void* m_pAnimateInfo2;
    char m_pad[0x18];
    void* m_pCommandBar;
    void Clear();
};

extern "C" int (__stdcall *g_pfnDeleteObject)(void*);

extern "C" void __fastcall sub_6c8fb0(void*);

void CXTPCommandBarAnimation::Clear()
{
    int (__stdcall *pfn)(void*) = g_pfnDeleteObject;
    pfn(m_pAnimateInfo);
    pfn(m_pAnimateInfo2);
    sub_6c8fb0((char*)this + 0x24);
}
}

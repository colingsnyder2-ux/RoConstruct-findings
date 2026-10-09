// roc 2009-12 0088d5e0  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088d5e0
//
// 0088d5e0  56                   push esi
// 0088d5e1  8bf1                 mov esi, ecx
// 0088d5e3  8b06                 mov eax, dword ptr [esi]
// 0088d5e5  57                   push edi
// 0088d5e6  8b3d3cb19800         mov edi, dword ptr [0x98b13c]
// 0088d5ec  50                   push eax
// 0088d5ed  ffd7                 call edi
// 0088d5ef  8b4e08               mov ecx, dword ptr [esi + 8]
// 0088d5f2  51                   push ecx
// 0088d5f3  ffd7                 call edi
// 0088d5f5  5f                   pop edi
// 0088d5f6  8d4e24               lea ecx, [esi + 0x24]
// 0088d5f9  5e                   pop esi
// 0088d5fa  e911ffffff           jmp 0x88d510
// copied from an identical function in another client (function ?Clear@CXTPCommandBarAnimation@ns_ROCX00000f@@QAEXXZ)

namespace ns_ROCX00000f {
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

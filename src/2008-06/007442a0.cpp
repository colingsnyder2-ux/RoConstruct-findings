// roc 2008-06 007442a0  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007442a0
//
// 007442a0  56                   push esi
// 007442a1  8bf1                 mov esi, ecx
// 007442a3  8b06                 mov eax, dword ptr [esi]
// 007442a5  57                   push edi
// 007442a6  8b3d50218000         mov edi, dword ptr [0x802150]
// 007442ac  50                   push eax
// 007442ad  ffd7                 call edi
// 007442af  8b4e08               mov ecx, dword ptr [esi + 8]
// 007442b2  51                   push ecx
// 007442b3  ffd7                 call edi
// 007442b5  5f                   pop edi
// 007442b6  8d4e24               lea ecx, [esi + 0x24]
// 007442b9  5e                   pop esi
// 007442ba  e911ffffff           jmp 0x7441d0
// copied from an identical function in another client (function ?Clear@CXTPCommandBarAnimation@ns_ROCX000007@@QAEXXZ)

namespace ns_ROCX000007 {
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

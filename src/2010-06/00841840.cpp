// roc 2010-06 00841840  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00841840
//
// 00841840  56                   push esi
// 00841841  8bf1                 mov esi, ecx
// 00841843  8b06                 mov eax, dword ptr [esi]
// 00841845  57                   push edi
// 00841846  8b3dd4a09e00         mov edi, dword ptr [0x9ea0d4]
// 0084184c  50                   push eax
// 0084184d  ffd7                 call edi
// 0084184f  8b4e08               mov ecx, dword ptr [esi + 8]
// 00841852  51                   push ecx
// 00841853  ffd7                 call edi
// 00841855  5f                   pop edi
// 00841856  8d4e24               lea ecx, [esi + 0x24]
// 00841859  5e                   pop esi
// 0084185a  e911ffffff           jmp 0x841770
// copied from an identical function in another client (function ?Clear@CXTPCommandBarAnimation@ns_ROCX00000b@@QAEXXZ)

namespace ns_ROCX00000b {
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

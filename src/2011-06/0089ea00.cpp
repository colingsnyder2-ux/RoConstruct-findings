// roc 2011-06 0089ea00  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089ea00
//
// 0089ea00  56                   push esi
// 0089ea01  8bf1                 mov esi, ecx
// 0089ea03  8b06                 mov eax, dword ptr [esi]
// 0089ea05  57                   push edi
// 0089ea06  8b3d9c01a400         mov edi, dword ptr [0xa4019c]
// 0089ea0c  50                   push eax
// 0089ea0d  ffd7                 call edi
// 0089ea0f  8b4e08               mov ecx, dword ptr [esi + 8]
// 0089ea12  51                   push ecx
// 0089ea13  ffd7                 call edi
// 0089ea15  5f                   pop edi
// 0089ea16  8d4e24               lea ecx, [esi + 0x24]
// 0089ea19  5e                   pop esi
// 0089ea1a  e971feffff           jmp 0x89e890
// copied from an identical function in another client (function ?Clear@CXTPCommandBarAnimation@ns_ROCX000009@@QAEXXZ)

namespace ns_ROCX000009 {
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

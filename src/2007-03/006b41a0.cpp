// roc 2007-03 006b41a0  unit: seg_006b0000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006b41a0
//
// 006b41a0  56                   push esi
// 006b41a1  8bf1                 mov esi, ecx
// 006b41a3  8b06                 mov eax, dword ptr [esi]
// 006b41a5  57                   push edi
// 006b41a6  8b3dccd07700         mov edi, dword ptr [0x77d0cc]
// 006b41ac  50                   push eax
// 006b41ad  ffd7                 call edi
// 006b41af  8b4e08               mov ecx, dword ptr [esi + 8]
// 006b41b2  51                   push ecx
// 006b41b3  ffd7                 call edi
// 006b41b5  5f                   pop edi
// 006b41b6  8d4e24               lea ecx, [esi + 0x24]
// 006b41b9  5e                   pop esi
// 006b41ba  e971feffff           jmp 0x6b4030
// copied from an identical function in another client (function ?Clear@CXTPCommandBarAnimation@ns_ROCX000005@@QAEXXZ)

namespace ns_ROCX000005 {
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

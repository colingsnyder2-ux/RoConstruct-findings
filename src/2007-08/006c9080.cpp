// from server: 100% by colin
// roc 2007-08 006c9080  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c9080
//
// 006c9080  56                   push esi
// 006c9081  8bf1                 mov esi, ecx
// 006c9083  8b06                 mov eax, dword ptr [esi]
// 006c9085  57                   push edi
// 006c9086  8b3dc8d07700         mov edi, dword ptr [0x77d0c8]
// 006c908c  50                   push eax
// 006c908d  ffd7                 call edi
// 006c908f  8b4e08               mov ecx, dword ptr [esi + 8]
// 006c9092  51                   push ecx
// 006c9093  ffd7                 call edi
// 006c9095  5f                   pop edi
// 006c9096  8d4e24               lea ecx, [esi + 0x24]
// 006c9099  5e                   pop esi
// 006c909a  e911ffffff           jmp 0x6c8fb0

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

// roc 2009-06 00786da0  unit: CXTPToolTipContext::CStandardToolTip  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00786da0
//
// 00786da0  c70164db8f00         mov dword ptr [ecx], 0x8fdb64
// 00786da6  8b4904               mov ecx, dword ptr [ecx + 4]
// 00786da9  85c9                 test ecx, ecx
// 00786dab  7407                 je 0x786db4
// 00786dad  51                   push ecx
// 00786dae  e82b1ff9ff           call 0x718cde
// 00786db3  59                   pop ecx
// 00786db4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00786da0(void*);
struct S_func_00786da0 {
    virtual ~S_func_00786da0();
    void* m_p;
};
S_func_00786da0::~S_func_00786da0()
{
    if (m_p)
        G1_func_00786da0(m_p);
}

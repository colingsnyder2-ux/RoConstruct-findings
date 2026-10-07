// roc 2008-06 0071c530  unit: CXTPHookManagerHookAble  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071c530
//
// 0071c530  c701f0f38500         mov dword ptr [ecx], 0x85f3f0
// 0071c536  8b4904               mov ecx, dword ptr [ecx + 4]
// 0071c539  85c9                 test ecx, ecx
// 0071c53b  7407                 je 0x71c544
// 0071c53d  51                   push ecx
// 0071c53e  e80744f8ff           call 0x6a094a
// 0071c543  59                   pop ecx
// 0071c544  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0071c530(void*);
struct S_func_0071c530 {
    virtual ~S_func_0071c530();
    void* m_p;
};
S_func_0071c530::~S_func_0071c530()
{
    if (m_p)
        G1_func_0071c530(m_p);
}

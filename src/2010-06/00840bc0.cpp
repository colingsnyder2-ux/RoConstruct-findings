// roc 2010-06 00840bc0  unit: CXTPHookManagerHookAble  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00840bc0
//
// 00840bc0  c7010874a600         mov dword ptr [ecx], 0xa67408
// 00840bc6  8b4904               mov ecx, dword ptr [ecx + 4]
// 00840bc9  85c9                 test ecx, ecx
// 00840bcb  7407                 je 0x840bd4
// 00840bcd  51                   push ecx
// 00840bce  e87370f6ff           call 0x7a7c46
// 00840bd3  59                   pop ecx
// 00840bd4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00840bc0(void*);
struct S_func_00840bc0 {
    virtual ~S_func_00840bc0();
    void* m_p;
};
S_func_00840bc0::~S_func_00840bc0()
{
    if (m_p)
        G1_func_00840bc0(m_p);
}

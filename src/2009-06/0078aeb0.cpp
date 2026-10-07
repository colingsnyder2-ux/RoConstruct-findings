// roc 2009-06 0078aeb0  unit: CXTPPropertyGridItemConstraints  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078aeb0
//
// 0078aeb0  c70150e58f00         mov dword ptr [ecx], 0x8fe550
// 0078aeb6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0078aeb9  85c9                 test ecx, ecx
// 0078aebb  7407                 je 0x78aec4
// 0078aebd  51                   push ecx
// 0078aebe  e81bdef8ff           call 0x718cde
// 0078aec3  59                   pop ecx
// 0078aec4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0078aeb0(void*);
struct S_func_0078aeb0 {
    virtual ~S_func_0078aeb0();
    void* m_p;
};
S_func_0078aeb0::~S_func_0078aeb0()
{
    if (m_p)
        G1_func_0078aeb0(m_p);
}

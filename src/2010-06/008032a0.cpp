// roc 2010-06 008032a0  unit: CXTPPropertyGrid  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008032a0
//
// 008032a0  c7017002a600         mov dword ptr [ecx], 0xa60270
// 008032a6  8b4904               mov ecx, dword ptr [ecx + 4]
// 008032a9  85c9                 test ecx, ecx
// 008032ab  7407                 je 0x8032b4
// 008032ad  51                   push ecx
// 008032ae  e89349faff           call 0x7a7c46
// 008032b3  59                   pop ecx
// 008032b4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_008032a0(void*);
struct S_func_008032a0 {
    virtual ~S_func_008032a0();
    void* m_p;
};
S_func_008032a0::~S_func_008032a0()
{
    if (m_p)
        G1_func_008032a0(m_p);
}

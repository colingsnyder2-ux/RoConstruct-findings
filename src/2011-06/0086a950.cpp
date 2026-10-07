// roc 2011-06 0086a950  unit: CXTPPropertyGrid  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086a950
//
// 0086a950  c70110baac00         mov dword ptr [ecx], 0xacba10
// 0086a956  8b4904               mov ecx, dword ptr [ecx + 4]
// 0086a959  85c9                 test ecx, ecx
// 0086a95b  7407                 je 0x86a964
// 0086a95d  51                   push ecx
// 0086a95e  e8a1f9f9ff           call 0x80a304
// 0086a963  59                   pop ecx
// 0086a964  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0086a950(void*);
struct S_func_0086a950 {
    virtual ~S_func_0086a950();
    void* m_p;
};
S_func_0086a950::~S_func_0086a950()
{
    if (m_p)
        G1_func_0086a950(m_p);
}

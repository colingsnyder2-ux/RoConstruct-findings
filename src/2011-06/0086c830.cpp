// roc 2011-06 0086c830  unit: CXTPStatusBar  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086c830
//
// 0086c830  c70184beac00         mov dword ptr [ecx], 0xacbe84
// 0086c836  8b4904               mov ecx, dword ptr [ecx + 4]
// 0086c839  85c9                 test ecx, ecx
// 0086c83b  7407                 je 0x86c844
// 0086c83d  51                   push ecx
// 0086c83e  e8c1daf9ff           call 0x80a304
// 0086c843  59                   pop ecx
// 0086c844  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0086c830(void*);
struct S_func_0086c830 {
    virtual ~S_func_0086c830();
    void* m_p;
};
S_func_0086c830::~S_func_0086c830()
{
    if (m_p)
        G1_func_0086c830(m_p);
}

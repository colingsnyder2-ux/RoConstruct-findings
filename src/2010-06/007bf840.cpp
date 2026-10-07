// roc 2010-06 007bf840  unit: CXTPImageManagerResource::CBitmapDC  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007bf840
//
// 007bf840  c701c073a500         mov dword ptr [ecx], 0xa573c0
// 007bf846  8b4904               mov ecx, dword ptr [ecx + 4]
// 007bf849  85c9                 test ecx, ecx
// 007bf84b  7407                 je 0x7bf854
// 007bf84d  51                   push ecx
// 007bf84e  e8f383feff           call 0x7a7c46
// 007bf853  59                   pop ecx
// 007bf854  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007bf840(void*);
struct S_func_007bf840 {
    virtual ~S_func_007bf840();
    void* m_p;
};
S_func_007bf840::~S_func_007bf840()
{
    if (m_p)
        G1_func_007bf840(m_p);
}

// roc 2008-06 006c7d10  unit: CInstanceRecord::CNameItem  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c7d10
//
// 006c7d10  c70194348500         mov dword ptr [ecx], 0x853494
// 006c7d16  8b4904               mov ecx, dword ptr [ecx + 4]
// 006c7d19  85c9                 test ecx, ecx
// 006c7d1b  7407                 je 0x6c7d24
// 006c7d1d  51                   push ecx
// 006c7d1e  e8278cfdff           call 0x6a094a
// 006c7d23  59                   pop ecx
// 006c7d24  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006c7d10(void*);
struct S_func_006c7d10 {
    virtual ~S_func_006c7d10();
    void* m_p;
};
S_func_006c7d10::~S_func_006c7d10()
{
    if (m_p)
        G1_func_006c7d10(m_p);
}

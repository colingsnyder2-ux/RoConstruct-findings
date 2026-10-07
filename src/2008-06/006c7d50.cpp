// roc 2008-06 006c7d50  unit: CInstanceRecord::CNameItem  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c7d50
//
// 006c7d50  c701ac348500         mov dword ptr [ecx], 0x8534ac
// 006c7d56  8b4904               mov ecx, dword ptr [ecx + 4]
// 006c7d59  85c9                 test ecx, ecx
// 006c7d5b  7407                 je 0x6c7d64
// 006c7d5d  51                   push ecx
// 006c7d5e  e8e78bfdff           call 0x6a094a
// 006c7d63  59                   pop ecx
// 006c7d64  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006c7d50(void*);
struct S_func_006c7d50 {
    virtual ~S_func_006c7d50();
    void* m_p;
};
S_func_006c7d50::~S_func_006c7d50()
{
    if (m_p)
        G1_func_006c7d50(m_p);
}

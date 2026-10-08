// roc 2007-08 00661d50  unit: CInstanceRecord  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00661d50
//
// 00661d50  c701788e7c00         mov dword ptr [ecx], 0x7c8e78
// 00661d56  8b4904               mov ecx, dword ptr [ecx + 4]
// 00661d59  85c9                 test ecx, ecx
// 00661d5b  7407                 je 0x661d64
// 00661d5d  51                   push ecx
// 00661d5e  e8c3e1fcff           call 0x62ff26
// 00661d63  59                   pop ecx
// 00661d64  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00661d50(void*);
struct S_func_00661d50 {
    virtual ~S_func_00661d50();
    void* m_p;
};
S_func_00661d50::~S_func_00661d50()
{
    if (m_p)
        G1_func_00661d50(m_p);
}

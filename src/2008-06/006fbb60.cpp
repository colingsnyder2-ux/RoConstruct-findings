// roc 2008-06 006fbb60  unit: CXTPPropertyGrid  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fbb60
//
// 006fbb60  c701b0aa8500         mov dword ptr [ecx], 0x85aab0
// 006fbb66  8b4904               mov ecx, dword ptr [ecx + 4]
// 006fbb69  85c9                 test ecx, ecx
// 006fbb6b  7407                 je 0x6fbb74
// 006fbb6d  51                   push ecx
// 006fbb6e  e8d74dfaff           call 0x6a094a
// 006fbb73  59                   pop ecx
// 006fbb74  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006fbb60(void*);
struct S_func_006fbb60 {
    virtual ~S_func_006fbb60();
    void* m_p;
};
S_func_006fbb60::~S_func_006fbb60()
{
    if (m_p)
        G1_func_006fbb60(m_p);
}

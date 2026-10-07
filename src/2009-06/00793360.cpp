// roc 2009-06 00793360  unit: CXTPHookManagerHookAble  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00793360
//
// 00793360  c70150019000         mov dword ptr [ecx], 0x900150
// 00793366  8b4904               mov ecx, dword ptr [ecx + 4]
// 00793369  85c9                 test ecx, ecx
// 0079336b  7407                 je 0x793374
// 0079336d  51                   push ecx
// 0079336e  e86b59f8ff           call 0x718cde
// 00793373  59                   pop ecx
// 00793374  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00793360(void*);
struct S_func_00793360 {
    virtual ~S_func_00793360();
    void* m_p;
};
S_func_00793360::~S_func_00793360()
{
    if (m_p)
        G1_func_00793360(m_p);
}

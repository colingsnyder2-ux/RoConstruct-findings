// roc 2007-08 00684070  unit: CXTPPropertyGrid  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00684070
//
// 00684070  c701b8f07c00         mov dword ptr [ecx], 0x7cf0b8
// 00684076  8b4904               mov ecx, dword ptr [ecx + 4]
// 00684079  85c9                 test ecx, ecx
// 0068407b  7407                 je 0x684084
// 0068407d  51                   push ecx
// 0068407e  e8a3befaff           call 0x62ff26
// 00684083  59                   pop ecx
// 00684084  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00684070(void*);
struct S_func_00684070 {
    virtual ~S_func_00684070();
    void* m_p;
};
S_func_00684070::~S_func_00684070()
{
    if (m_p)
        G1_func_00684070(m_p);
}

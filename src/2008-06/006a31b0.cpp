// roc 2008-06 006a31b0  unit: CRobloxControlColorSelector  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a31b0
//
// 006a31b0  c7011c048500         mov dword ptr [ecx], 0x85041c
// 006a31b6  8b4904               mov ecx, dword ptr [ecx + 4]
// 006a31b9  85c9                 test ecx, ecx
// 006a31bb  7407                 je 0x6a31c4
// 006a31bd  51                   push ecx
// 006a31be  e887d7ffff           call 0x6a094a
// 006a31c3  59                   pop ecx
// 006a31c4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006a31b0(void*);
struct S_func_006a31b0 {
    virtual ~S_func_006a31b0();
    void* m_p;
};
S_func_006a31b0::~S_func_006a31b0()
{
    if (m_p)
        G1_func_006a31b0(m_p);
}

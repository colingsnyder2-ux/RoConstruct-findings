// roc 2007-08 00632350  unit: CRobloxControlColorSelector  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00632350
//
// 00632350  c701184f7c00         mov dword ptr [ecx], 0x7c4f18
// 00632356  8b4904               mov ecx, dword ptr [ecx + 4]
// 00632359  85c9                 test ecx, ecx
// 0063235b  7407                 je 0x632364
// 0063235d  51                   push ecx
// 0063235e  e8c3dbffff           call 0x62ff26
// 00632363  59                   pop ecx
// 00632364  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00632350(void*);
struct S_func_00632350 {
    virtual ~S_func_00632350();
    void* m_p;
};
S_func_00632350::~S_func_00632350()
{
    if (m_p)
        G1_func_00632350(m_p);
}

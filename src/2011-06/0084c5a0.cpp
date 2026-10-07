// roc 2011-06 0084c5a0  unit: CXTPControlEdit  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084c5a0
//
// 0084c5a0  c701947cac00         mov dword ptr [ecx], 0xac7c94
// 0084c5a6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0084c5a9  85c9                 test ecx, ecx
// 0084c5ab  7407                 je 0x84c5b4
// 0084c5ad  51                   push ecx
// 0084c5ae  e851ddfbff           call 0x80a304
// 0084c5b3  59                   pop ecx
// 0084c5b4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0084c5a0(void*);
struct S_func_0084c5a0 {
    virtual ~S_func_0084c5a0();
    void* m_p;
};
S_func_0084c5a0::~S_func_0084c5a0()
{
    if (m_p)
        G1_func_0084c5a0(m_p);
}

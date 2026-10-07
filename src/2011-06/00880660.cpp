// roc 2011-06 00880660  unit: CXTPResourceManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00880660
//
// 00880660  c701f8f9ac00         mov dword ptr [ecx], 0xacf9f8
// 00880666  8b4904               mov ecx, dword ptr [ecx + 4]
// 00880669  85c9                 test ecx, ecx
// 0088066b  7407                 je 0x880674
// 0088066d  51                   push ecx
// 0088066e  e8919cf8ff           call 0x80a304
// 00880673  59                   pop ecx
// 00880674  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00880660(void*);
struct S_func_00880660 {
    virtual ~S_func_00880660();
    void* m_p;
};
S_func_00880660::~S_func_00880660()
{
    if (m_p)
        G1_func_00880660(m_p);
}

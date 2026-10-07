// roc 2011-06 00878350  unit: CXTPPropertyGridView  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00878350
//
// 00878350  c701dcd9ac00         mov dword ptr [ecx], 0xacd9dc
// 00878356  8b4904               mov ecx, dword ptr [ecx + 4]
// 00878359  85c9                 test ecx, ecx
// 0087835b  7407                 je 0x878364
// 0087835d  51                   push ecx
// 0087835e  e8a11ff9ff           call 0x80a304
// 00878363  59                   pop ecx
// 00878364  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00878350(void*);
struct S_func_00878350 {
    virtual ~S_func_00878350();
    void* m_p;
};
S_func_00878350::~S_func_00878350()
{
    if (m_p)
        G1_func_00878350(m_p);
}

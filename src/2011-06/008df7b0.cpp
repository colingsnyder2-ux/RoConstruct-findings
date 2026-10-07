// roc 2011-06 008df7b0  unit: VCEdit::?$CXTMaskEditT  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008df7b0
//
// 008df7b0  c7016082ad00         mov dword ptr [ecx], 0xad8260
// 008df7b6  8b4904               mov ecx, dword ptr [ecx + 4]
// 008df7b9  85c9                 test ecx, ecx
// 008df7bb  7407                 je 0x8df7c4
// 008df7bd  51                   push ecx
// 008df7be  e841abf2ff           call 0x80a304
// 008df7c3  59                   pop ecx
// 008df7c4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_008df7b0(void*);
struct S_func_008df7b0 {
    virtual ~S_func_008df7b0();
    void* m_p;
};
S_func_008df7b0::~S_func_008df7b0()
{
    if (m_p)
        G1_func_008df7b0(m_p);
}

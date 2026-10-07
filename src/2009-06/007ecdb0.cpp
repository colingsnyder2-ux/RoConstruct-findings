// roc 2009-06 007ecdb0  unit: VCEdit::?$CXTMaskEditT  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ecdb0
//
// 007ecdb0  c701289a9000         mov dword ptr [ecx], 0x909a28
// 007ecdb6  8b4904               mov ecx, dword ptr [ecx + 4]
// 007ecdb9  85c9                 test ecx, ecx
// 007ecdbb  7407                 je 0x7ecdc4
// 007ecdbd  51                   push ecx
// 007ecdbe  e81bbff2ff           call 0x718cde
// 007ecdc3  59                   pop ecx
// 007ecdc4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007ecdb0(void*);
struct S_func_007ecdb0 {
    virtual ~S_func_007ecdb0();
    void* m_p;
};
S_func_007ecdb0::~S_func_007ecdb0()
{
    if (m_p)
        G1_func_007ecdb0(m_p);
}

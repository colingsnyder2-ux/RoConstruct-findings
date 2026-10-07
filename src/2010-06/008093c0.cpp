// roc 2010-06 008093c0  unit: CXTPTabClientWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008093c0
//
// 008093c0  c701ec0ea600         mov dword ptr [ecx], 0xa60eec
// 008093c6  8b4904               mov ecx, dword ptr [ecx + 4]
// 008093c9  85c9                 test ecx, ecx
// 008093cb  7407                 je 0x8093d4
// 008093cd  51                   push ecx
// 008093ce  e873e8f9ff           call 0x7a7c46
// 008093d3  59                   pop ecx
// 008093d4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_008093c0(void*);
struct S_func_008093c0 {
    virtual ~S_func_008093c0();
    void* m_p;
};
S_func_008093c0::~S_func_008093c0()
{
    if (m_p)
        G1_func_008093c0(m_p);
}

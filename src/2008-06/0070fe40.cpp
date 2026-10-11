// from server: 40% by colin
extern "C" void __cdecl G1_func_0070e9a0(void*);
extern "C" void __cdecl G1_func_0070fc70();
extern "C" void __cdecl G1_func_004111a0();
extern "C" void __cdecl G1_func_006a0be4();
extern "C" void __cdecl G1_func_007bc832();

struct S_func_0070e9a0 {
    virtual ~S_func_0070e9a0();
    void* m_p;
};

struct CXTPStatusBar_CStatusCmdUI {
    void* m_p0;
    char pad[0x94];
    S_func_0070e9a0 m_sub98;
    char pad2[0x18];
    void* m_pB0;
    char pad3[0x1c];
    void* m_pD0;
    void dtor();
};

void CXTPStatusBar_CStatusCmdUI::dtor()
{
    m_p0 = (void*)0x85d0b4;
    G1_func_0070fc70();
    if (m_pD0) {
        G1_func_006a0be4();
        m_pD0 = 0;
    }
    m_pB0 = (void*)0x81b228;
    G1_func_004111a0();
    m_sub98.~S_func_0070e9a0();
    G1_func_007bc832();
}

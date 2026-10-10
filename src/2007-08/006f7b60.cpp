// from server: 40% by colin
struct CXTMaskEditT {
    char pad[0x54];
    void* m_p54;
    void* m_p58;
    void Update();
};

extern "C" void __stdcall sub_6F7460(void*, void*, void*);
extern "C" void __stdcall sub_6F7300(void*, void*);
extern "C" void* __stdcall sub_77DD98(void*, void*);
extern "C" void __stdcall sub_77DDBC(void*);

void CXTMaskEditT::Update()
{
    if (m_p54 != m_p58) {
        void* tmp;
        sub_6F7460(&tmp, m_p58, (void*)-1);
        void* v = sub_77DD98(&tmp, 0);
        sub_6F7300(this, v);
        m_p58 = m_p54;
        sub_77DDBC(&tmp);
    }
}

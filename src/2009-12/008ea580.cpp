// from server: 48% by atomic.potato
struct CXTPRibbonTab {
    void* m_p0;
    void* m_p4;
    char m_pad8[4];
    void* m_pc;
    char m_pad10[4];
    void* m_p14;
    char m_pad18[4];
    void* m_p1c;
    char m_pad20[0x7c];
    void* m_p9c;
};

extern "C" void __stdcall G1_func_0098de74(void*);
extern "C" void __stdcall G1_func_0098d538(void*, void*);
extern "C" void __stdcall G1_func_0098dec0(void*);
extern "C" void __stdcall G1_func_0098ca9c(void*);
extern "C" void* __stdcall G1_func_00894940(void*, void*);
extern "C" void __stdcall SetRectEmpty(void*);

CXTPRibbonTab* __fastcall CXTPRibbonTab_ctor(CXTPRibbonTab* self, void*, void* arg)
{
    G1_func_0098de74((char*)self + 8);
    if (arg) {
        *(void**)self = arg;
        *(void**)((char*)self + 4) = arg;
        *(void**)((char*)self + 0xc) = *(void**)((char*)arg + 0x94);
        void* tmp = G1_func_00894940(arg, (char*)self + 0x24);
        G1_func_0098d538((char*)self + 8, tmp);
        G1_func_0098dec0((char*)self + 0x24);
        G1_func_0098ca9c((char*)self + 0x10);
        *(void**)((char*)arg + 0x9c) = self;
    }
    return self;
}

// from server: 86% by atomic.potato
extern "C" void __stdcall f_510870(void*);
extern "C" void __stdcall f_510860(void*);

struct RakPeer {
    char pad0[0xc];
    unsigned int m_size;
    char pad1[0x8];
    unsigned int m_count;
    char pad2[0x530];
    char m_cs[0x18];
    void sub_004fe620(unsigned int* a, unsigned int* b);
};

void RakPeer::sub_004fe620(unsigned int* a, unsigned int* b)
{
    char* p = m_cs;
    f_510870(p);
    *a = m_count;
    *b = (m_size + 7) >> 3;
    f_510860(p);
}

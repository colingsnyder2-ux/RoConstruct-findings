// from server: 39% by atomic.potato
struct S_func_0085a120 {
    char pad0[0x40];
    char m_flag41;
    char pad1[6];
    char* m_ptr48;
    int m_len4c;
    void f();
};

extern "C" void __stdcall sub_b225f8(char*, char*, int);
extern "C" void __stdcall sub_b224b4();

void S_func_0085a120::f()
{
    if (m_ptr48) {
        sub_b225f8((char*)&m_ptr48, m_ptr48, m_len4c);
    }
    if (m_flag41) {
        m_flag41 = 0;
    }
    sub_b224b4();
}

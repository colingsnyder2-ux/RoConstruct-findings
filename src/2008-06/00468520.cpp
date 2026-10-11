// from server: 43% by atomic.potato
struct DxUserInput {
    char pad0[0x34];
    int m_lock;
    char pad1[0x178 - 0x38];
    int m_x178;
    char pad2[0x190 - 0x17c];
    char m_x190;
    char pad3[0x192 - 0x191];
    char m_x192;
    void sub_00468520(int);
    void sub_004680c0();
    void sub_00467670(int);
};

extern "C" void __stdcall EnterCriticalSection(int*);
extern "C" void __stdcall LeaveCriticalSection(int*);

void DxUserInput::sub_00468520(int a)
{
    EnterCriticalSection(&m_lock);
    if (m_x178 == 0) {
        m_x192 = 0;
    } else {
        char al = m_x190;
        if (m_x192 != al) {
            if (al == 0) {
                sub_004680c0();
            } else {
                sub_00467670(a);
            }
        }
    }
    LeaveCriticalSection(&m_lock);
}

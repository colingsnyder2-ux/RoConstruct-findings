// from server: 91% by colin
struct CXTCaptionButtonTheme {
    char pad[0x2c];
    char m_bCached;
    char pad2[0x73 - 0x2d];
    char m_bFlag;
    char g();
    void f(void* p);
};

void CXTCaptionButtonTheme::f(void* p) {
    char al = ((char*)p)[0x73];
    if (al) {
        if (m_bCached == 0) {
            m_bCached = g();
            return;
        }
        if (al) {
            return;
        }
    }
    if (m_bCached != 0) {
        m_bCached = 0;
    }
}

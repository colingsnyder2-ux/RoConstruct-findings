// from server: 91% by colin
struct CXTCaptionButtonThemeOfficeXP {
    char pad0[0x30];
    int m_30;
    int m_34;
    char pad38[0x7c];
    int m_b4;
    int m_b0;
    int getValue(unsigned int flags, void* p);
};

extern "C" void* __stdcall sub_668f70();
extern "C" void __stdcall sub_668770(void* p, int n);
extern "C" unsigned int __stdcall GetCapture();
extern "C" int __stdcall IsWindow(void* hWnd);

int CXTCaptionButtonThemeOfficeXP::getValue(unsigned int flags, void* p)
{
    if (flags & 4) {
        void* v = sub_668f70();
        sub_668770(v, 0x11);
        return 0;
    }

    char* s = (char*)p;
    if (*(int*)(s + 0xa0) == 0) {
        if (GetCapture() != *(unsigned int*)(s + 0x20)) {
            if (!(flags & 1)) {
                char* t = *(char**)(s + 0xac);
                unsigned int h;
                if (t == 0)
                    h = 0;
                else
                    h = *(unsigned int*)(t + 0x20);
                if (IsWindow((void*)h)) {
                    return *(int*)(t + 0x78);
                }
                if (m_34 != -1)
                    return m_34;
                return m_30;
            }
        }
    }

    if (m_b4 != -1)
        return m_b4;
    return m_b0;
}

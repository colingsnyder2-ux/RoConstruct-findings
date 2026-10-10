// from server: 79% by colin
struct CXTPImageManagerIconSet {
    unsigned int m_hIcon;
    unsigned int m_hIcon2;
    unsigned int m_hIcon3;
    int func();
};

extern "C" int __stdcall GetIconInfo(void*, void*);
extern "C" int __stdcall DeleteObject(void*);
extern "C" int __cdecl sub_64B500(void*, int);

int CXTPImageManagerIconSet::func() {
    if (m_hIcon3 != 0) {
        return 1;
    }
    if (m_hIcon != 0) {
        int buf[4];
        if (GetIconInfo((void*)m_hIcon, buf) != 0) {
            m_hIcon3 = sub_64B500((void*)buf[3], 0);
            DeleteObject((void*)buf[3]);
            DeleteObject((void*)buf[1]);
            return m_hIcon3 != 0;
        }
    } else if (m_hIcon2 != 0) {
        m_hIcon3 = sub_64B500((void*)m_hIcon2, 0);
    }
    return m_hIcon3 != 0;
}

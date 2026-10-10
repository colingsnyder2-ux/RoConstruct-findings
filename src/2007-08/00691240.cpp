// from server: 85% by colin
struct CXTSplitterWnd {
    char pad0[0x98];
    int m_98;
    int m_9c;
    char pad1[0xb8 - 0xa0];
    int m_b8;
    int m_bc;
    int m_c0;
    int m_c4;
    int m_c8;
    char pad2[0xd8 - 0xcc];
    int m_d8;
    char pad3[0xfc - 0xdc];
    int m_fc;
    char pad4[0x104 - 0x100];
    int m_104;
    char pad5[0x114 - 0x108];
    int m_114;

    void f(int);
};

extern "C" int __stdcall sub_738afc(int);
extern "C" int __stdcall sub_6303b8(int, int, int);
extern "C" int __stdcall ReleaseCapture();
extern "C" int __stdcall OffsetRect(void *, int, int);

void CXTSplitterWnd::f(int a)
{
    if (m_fc == 0) {
        sub_738afc(a);
        if (m_114 != 0) {
            sub_6303b8(0, 0x6000000, 0);
            m_114 = 0;
        }
        return;
    }

    if (m_98 == 0)
        return;

    ReleaseCapture();

    (*(void (__thiscall **)(CXTSplitterWnd *, int *))(*(int *)this + 0x150))(this, &m_b8);

    if (m_9c != 0) {
        (*(void (__thiscall **)(CXTSplitterWnd *, int *))(*(int *)this + 0x150))(this, &m_c8);
    }

    int v = (*(int (__thiscall **)(CXTSplitterWnd *, int, int))(*(int *)this + 0x16c))(this, 0, 0);
    m_9c = 0;
    m_98 = 0;

    OffsetRect(&m_b8, -1, -1);
    OffsetRect(&m_c8, -1, -1);

    if (v != 0) {
        int code = m_d8;
        if (code == 1) {
            (*(void (__thiscall **)(CXTSplitterWnd *, int))(*(int *)this + 0x15c))(this, m_bc);
        } else if (code >= 0x65 && code <= 0x73) {
            if (m_104 != 0) {
                m_bc = m_c4 - 4;
            }
            (*(void (__thiscall **)(CXTSplitterWnd *, int, int))(*(int *)this + 0x194))(this, m_bc, code - 0x65);
            (*(void (__thiscall **)(CXTSplitterWnd *))(*(int *)this + 0x148))(this);
        } else if (code == 2) {
            (*(void (__thiscall **)(CXTSplitterWnd *, int))(*(int *)this + 0x160))(this, m_b8);
        } else if (code >= 0xc9 && code <= 0xd7) {
            if (m_104 != 0) {
                m_b8 = m_c0 - 4;
            }
            (*(void (__thiscall **)(CXTSplitterWnd *, int, int))(*(int *)this + 0x198))(this, m_b8, code - 0xc9);
            (*(void (__thiscall **)(CXTSplitterWnd *))(*(int *)this + 0x148))(this);
        } else if (code >= 0x12d && code <= 0x20d) {
            int q = (code - 0x12d) / 0xf;
            int r = (code - 0x12d) % 0xf;
            (*(void (__thiscall **)(CXTSplitterWnd *, int, int))(*(int *)this + 0x194))(this, m_bc, q);
            (*(void (__thiscall **)(CXTSplitterWnd *, int, int))(*(int *)this + 0x198))(this, m_c8, r);
            (*(void (__thiscall **)(CXTSplitterWnd *))(*(int *)this + 0x148))(this);
        } else if (code == 3) {
            (*(void (__thiscall **)(CXTSplitterWnd *, int))(*(int *)this + 0x15c))(this, m_bc);
            (*(void (__thiscall **)(CXTSplitterWnd *, int))(*(int *)this + 0x160))(this, m_c8);
        }
    }

    int v2 = (*(int (__thiscall **)(CXTSplitterWnd *, int, int))(*(int *)this + 0x16c))(this, 0, 0);
    if (v2 == v && v != 0) {
        (*(void (__thiscall **)(CXTSplitterWnd *, int, int, int))(*(int *)this + 0x170))(this, -1, -1, v);
    }
}

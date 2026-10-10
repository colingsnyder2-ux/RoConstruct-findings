// from server: 77% by colin
struct CXTPControlGallery
{
    char pad[0xc0];
    int m_0xc0;
    int m_0xc4;
    int m_0xc8;
    int m_0xcc;
    char pad2[0x1f0 - 0xd0];
    int m_0x1f0;
    int m_0x1f4;
    int m_0x1f8;

    void sub_6b3f60(int *);
    void sub_6b6180();
    void sub_6b3d90(int, int);
    void sub_6b6870(int);
};

void CXTPControlGallery::sub_6b6870(int arg)
{
    int local[4];
    sub_6b3f60(local);
    int v = m_0x1f8 - local[3] + local[1];
    if (arg > v)
        arg = v;
    if (arg < 0)
        arg = 0;
    if (m_0x1f0 != arg)
    {
        m_0x1f0 = arg;
        sub_6b6180();
        (*(void (__thiscall **)(CXTPControlGallery *))(*(int *)this + 0x14c))(this);
        sub_6b3d90(0, 0);
    }
}

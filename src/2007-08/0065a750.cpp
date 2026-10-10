// from server: 81% by colin
struct CXTPReportControlLocale {
    int pad0[0x33];
    int m_nSomething;      // 0xcc
    int m_pSomething;      // 0xd0
    int pad1[0x26];
    int m_bFlag;           // 0x16c
    void sub_655B20();
    void sub_657C20(void*);
    void sub_65A6A0();
    void sub_659170(int);
    void sub_664590(void*);
    void sub_6645F0(int, int);
    void Insert(void* p, int a, int b);
};

void CXTPReportControlLocale::Insert(void* p, int a, int b)
{
    if (p == 0)
        return;

    sub_659170(0);
    sub_655B20();

    if (m_bFlag != 0)
    {
        if (a != 0 && m_nSomething != -1)
        {
            int v = (*(int (__thiscall **)(void*))((*(int*)p) + 0x6c))(p);
            sub_6645F0(m_nSomething, v);
        }
        else if (b == 0)
        {
            sub_664590(p);
        }
    }
    else
    {
        sub_664590(p);
    }

    int v2 = (*(int (__thiscall **)(void*))((*(int*)p) + 0x6c))(p);
    m_nSomething = v2;
    sub_657C20(p);
    sub_65A6A0();

    if (*(int*)(m_pSomething + 0x40) != 0)
    {
        (*(void (__thiscall **)(void*))((*(int*)this) + 0x190))(this);
    }
}

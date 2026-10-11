// from server: 57% by atomic.potato
struct CXTSplitterWnd
{
    char pad0[0x80];
    int m_count80;
    int m_count84;
    char pad88[0xc];
    int* m_ptr94;
    char pad98[0x5c];
    int m_valF4;
    int m_valF8;

    int sub_71955a(int, int);
    int sub_7194be(int, int);
    void sub_718d20(int);
    void sub_84c662(int);
    void sub_1bc();
    void sub_174(int*, int*);
    void sub_178(int, int, int);
    void sub_150();

    void sub_782d30(int arg);
};

void CXTSplitterWnd::sub_1bc() {}
void CXTSplitterWnd::sub_174(int*, int*) {}
void CXTSplitterWnd::sub_178(int, int, int) {}
void CXTSplitterWnd::sub_150() {}

void CXTSplitterWnd::sub_782d30(int arg)
{
    int local8 = 0;
    int localc = 0;
    int ebp = arg;

    if (m_valF8 != -1)
    {
        if (m_valF8 == ebp)
            return;
        sub_1bc();
    }

    m_valF8 = ebp;
    sub_174(&local8, &localc);

    if (local8 == ebp)
    {
        int v = local8 + 1;
        if (v >= m_count80)
            v = 0;
        local8 = v;
        sub_178(v, localc, 0);
    }

    int ebx = 0;
    if (m_count84 > 0)
    {
        do
        {
            int edi = sub_71955a(ebp, ebx);
            if (edi == 0)
                return;
            sub_718d20(0);

            int eax = m_valF4;
            if (eax != -1)
            {
                if (eax > 0)
                    eax = ebx + 1;
                else
                    eax = ebx;
            }
            else
            {
                eax = ebx;
            }

            int ecx = (m_count80 + 0xe90) << 4;
            ecx += eax;
            sub_84c662(ecx);

            int edi2 = ebp + 1;
            while (edi2 < m_count80)
            {
                int ebp2 = sub_71955a(edi2, ebx);
                if (ebp2 == 0)
                    return;
                int edx = sub_7194be(edi2 - 1, ebx);
                sub_84c662(edx);
                edi2++;
            }

            ebx++;
        } while (ebx < m_count84);
    }

    m_count80--;
    int* p = m_ptr94;
    int idx1 = ebp + ebp * 2;
    int val = p[idx1 + 2];
    int idx2 = m_count80 + m_count80 * 2;
    p[idx2 + 2] = val;
    sub_150();
}

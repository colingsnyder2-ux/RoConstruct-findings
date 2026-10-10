// from server: 92% by colin
struct CXTPReportControl {
    void m1();
    void m2(int);
    void m3();
};

struct T_func_006d3460 {
    int m();
};

struct T_func_0065ed00 {
    int m();
};

extern T_func_006d3460 G1_func_006d3460;

void CXTPReportControl::m3()
{
    if (*(int*)((char*)this + 0x98) == -1)
    {
        T_func_0065ed00* p = (T_func_0065ed00*)G1_func_006d3460.m();
        int r = p->m();
        if (*(int*)(r + 0x210) != 0)
        {
            m1();
        }
        else
        {
            m2(0);
        }
    }
}

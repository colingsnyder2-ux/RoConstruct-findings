// from server: 53% by atomic.potato
struct S_func_00857e20
{
    char pad0[0x9c];
    int m_flag;
    int f();
};

struct S_func_00856650
{
    char pad0[112];
    int m_x;
    int f();
};

struct S_func_00857540
{
    char pad0[0x34];
    int m_34;
    int m_38;
    int m_3c;
    int m_40;
    char pad1[0x98 - 0x44];
    double m_98;
};

int S_func_00857e20::f()
{
    int i = 0;
    if (((S_func_00856650*)this)->f() > 0)
    {
        do
        {
            S_func_00857540* p = (S_func_00857540*)((int (__thiscall*)(S_func_00857e20*, int))0x857540)(this, i);
            int a;
            int b;
            if (m_flag == 0)
            {
                a = p->m_38;
                b = p->m_40;
            }
            else
            {
                a = p->m_3c;
                b = p->m_38;
            }
            p->m_98 = (double)(b - a);
            i++;
        } while (i < ((S_func_00856650*)this)->f());
    }
    return 0;
}

// from server: 56% by colin
struct CXTPCommandBar {
    char pad0[0x108];
    int m_x108;
    int m_x10c;
    int m_x110;
    int m_x114;
    int f(int a1, int a2);
};

struct S_ret {
    int a;
    int b;
};

struct S_helper {
    int __stdcall sub_00643980();
    S_ret* __stdcall sub_0064efd0(S_ret*, int);
};

int CXTPCommandBar::f(int a1, int a2)
{
    S_ret local;
    S_ret* p;
    int v;

    v = ((S_helper*)this)->sub_00643980();
    if (v == 0) {
        if (m_x108 == 0 && m_x10c == 0) {
            local.a = 0x20;
            local.b = 0x20;
        } else {
            local.a = m_x108 + m_x108;
            local.b = m_x10c + m_x10c;
        }
        *(S_ret*)a2 = local;
        return a2;
    }

    p = &local;
    if (m_x108 == 0 && m_x10c == 0) {
        int* q = (int*)(v + 0x74);
        q = (int*)((char*)q + 0x64);
        if (q[0] == 0 && q[1] == 0) {
            local.a = 0x10;
            local.b = 0x10;
            p = &local;
        }
    }

    if (m_x110 == 0 && m_x114 == 0) {
        int* q = (int*)(v + 0x74);
        q = (int*)((char*)q + 0x6c);
        if (q[0] == 0 && q[1] == 0) {
            if (a1 != 0) {
                S_ret* r = ((S_helper*)this)->sub_0064efd0(&local, 1);
                *(S_ret*)a2 = *r;
                return a2;
            }
            local.a = p->a + p->a;
            local.b = p->b + p->b;
            p = &local;
        }
    }

    *(S_ret*)a2 = *p;
    return a2;
}

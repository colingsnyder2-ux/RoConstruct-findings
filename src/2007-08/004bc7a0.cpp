// from server: 43% by colin
struct RakPeer {
    char pad0[4];
    char field4;
    char pad5[0x227];
    int field22c;
    char pad230[0x4fc];
    int field72c;
    bool sub_4ba840(int, int, int, int, int, int, int, int, int);
    bool sub_4a3480(const char*);
    bool sub_4bc7a0(int, int, int, int, int, int, int);
};

bool RakPeer::sub_4bc7a0(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    int* p = (int*)a1;
    int v = *p;
    v += 7;
    if ((v & 0xfffffff8) == 0)
        return false;
    if (field22c == 0)
        return false;
    if (field4 == 1)
        return false;
    if ((a7 & 0xff) == 0)
    {
        if (sub_4a3480((const char*)0x892f5c))
            return false;
        if (field72c != 0)
        {
            int t1 = a2;
            int t2 = a3;
            int (RakPeer::*pmf)(int, int) = *(int (RakPeer::**)(int, int))((*(int*)this) + 0x68);
            if ((this->*pmf)(t1, t2))
                goto L;
            int obj = field72c;
            int x1 = a2;
            int x2 = a3;
            int x3 = a4;
            int x4 = a5;
            int x5 = a6;
            int x6 = a7;
            int x7 = *p;
            int x8 = p[3];
            int (RakPeer::*pmf2)(int, int, int, int, int, int, int, int) = *(int (RakPeer::**)(int, int, int, int, int, int, int, int))obj;
            (this->*pmf2)(x8, x7, x6, x5, x4, x3, x2, x1);
            return true;
        }
    }
L:
    int y1 = a2;
    int y2 = a3;
    int y3 = a4;
    int y4 = a5;
    int y5 = a6;
    int y6 = a7;
    int y7 = *p;
    int y8 = p[3];
    sub_4ba840(y8, y7, y6, y5, y4, y3, y2, y1, 0);
    return true;
}

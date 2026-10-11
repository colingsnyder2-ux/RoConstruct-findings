// from server: 88% by colin
struct CXTPDockingPaneTabbedContainer {
    int sub_75F090(int index);
    int sub_7BC03A(int flag);
    int sub_6E8D70(int a, int b, int c, int d);
    int sub_6E82A0(int *out);
    int f(int a, int b, int c, int d, int *out);
};

int CXTPDockingPaneTabbedContainer::f(int a, int b, int c, int d, int *out) {
    int local;
    *out = 0;
    int result = sub_6E82A0(&local);
    if (result == 1) {
        int p = *(int *)((char *)this + 0x6c);
        if (p != 0) {
            int v = *(int *)((char *)p + 0xb4);
            sub_6E8D70(v, 0, 0x85021c, (int)out);
            return 0;
        }
    } else if (result > 1) {
        int limit = *(int *)((char *)this - 0x34);
        limit++;
        if (result <= limit) {
            int idx = result - 2;
            int r = sub_75F090(idx);
            if (r != 0) {
                int v = sub_7BC03A(1);
                *out = v;
            }
        }
    }
    return 0;
}

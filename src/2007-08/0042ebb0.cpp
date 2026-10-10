// from server: 49% by colin
struct Inner {
    int sub_66EA20(int);
    void sub_670060(int, int, int);
};

struct CMainFrame {
    void sub_42EB00(int, int, int, int, int);
    void func();
};

void CMainFrame::func()
{
    char* base = (char*)this;
    Inner* p = (Inner*)(base + 0x120);
    bool b = (p->sub_66EA20(0xc1) == 0);
    sub_42EB00(0, 0, 0xfa, 0x12c, 0xc1);
    if (b) {
        int q = p->sub_66EA20(0xc2);
        if (q != 0) {
            int r = p->sub_66EA20(0xc1);
            if (r != 0) {
                p->sub_670060(r + 0x20, 3, q + 0x20);
            } else {
                p->sub_670060(0, 3, q + 0x20);
            }
        }
    }
}

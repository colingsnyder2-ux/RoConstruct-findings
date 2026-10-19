// from server: 73% by TrollStein
struct type_info {
    bool operator==(const type_info&) const;
};

struct CRobloxApp {
    int __cdecl f(int, int, int);
};

extern "C" int __cdecl sub_429650(int, int, char);

int CRobloxApp::f(int a, int b, int c)
{
    if (c == 2) {
        int v = b;
        if (*(const type_info*)0x889160 == *(const type_info*)v) {
            return v;
        }
        return 0;
    }
    return sub_429650(a, c, 0);
}

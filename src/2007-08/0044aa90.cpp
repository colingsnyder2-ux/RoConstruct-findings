// from server: 73% by colin
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct CRobloxApp {
    int __cdecl f(int, int);
};

extern "C" int __cdecl sub_5F9250(int, int, char);

int __cdecl CRobloxApp::f(int a, int b) {
    if (b == 2) {
        int r = ((*(const type_info*)0x8891f0) == (*(const type_info*)a)) ? a : 0;
        return r;
    }
    char local = 0;
    return sub_5F9250(a, b, local);
}

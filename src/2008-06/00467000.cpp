// from server: 92% by colin
struct CSettingsPropGrid {
    void sub_440E30(int, int);
    void f(int, int);
};

extern "C" int __fastcall sub_40AD80(void*);
extern "C" bool __fastcall sub_56FE20(void*, int);

void CSettingsPropGrid::f(int a, int b) {
    int v = sub_40AD80(this);
    if (sub_56FE20(*(void**)(b + 0xc), v)) {
        sub_440E30(a, b);
    }
}

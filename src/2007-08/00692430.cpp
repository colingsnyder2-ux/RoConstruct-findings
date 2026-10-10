// from server: 50% by colin
struct CXTPStatusBar {
    void sub_692430(int, int);
};

extern "C" void* __cdecl sub_6923d0();

void CXTPStatusBar::sub_692430(int a, int b) {
    void* p = sub_6923d0();
    int* src = (int*)a;
    int v0 = src[0];
    int v1 = src[1];
    int v2 = src[2];
    int v3 = src[3];
    int* obj = (int*)p;
    void (__thiscall *fn)(void*, int, int, int, int, int);
    fn = (void (__thiscall *)(void*, int, int, int, int, int))obj[0x9c / 4];
    fn(p, v0, v1, v2, v3, b);
}

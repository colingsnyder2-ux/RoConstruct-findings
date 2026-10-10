// from server: 58% by colin
struct CMainFrame {
    char pad[0x120];
    int field_0x120;
    int method(int, int, int, int, int, int);
};

int sub_66EA20(int*, int);
int sub_66EA60(int*, int, int);
int sub_66FFB0(int*, int, int, int, int, int, int);

int CMainFrame::method(int a1, int a2, int a3, int a4, int a5, int a6) {
    int* p = &field_0x120;
    int v = sub_66EA20(p, a1);
    if (v == 0) {
        v = sub_66FFB0(p, a1, a2, a3, a4, a5, a6);
    }
    sub_66EA60(p, v, 1);
    int* vt = *(int**)v;
    void (__thiscall *fn)(int*) = *(void (__thiscall **)(int*))(vt + 0x58);
    fn((int*)v);
    return v;
}

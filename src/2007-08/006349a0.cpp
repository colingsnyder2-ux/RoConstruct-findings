// from server: 75% by colin
struct MyXTPCommandBars {
    char pad_0[0x44];
    int field_44;
    char pad_48[0x84 - 0x48];
    int field_84;
    int sub_632c50(int);
    int sub_632c90(int, int);
    int sub_632910(int);
    void sub_633c70();
    void sub_6338d0(int);
    int sub_6349a0(int, int);
};

extern "C" int __stdcall sub_67a850(int, int, int, int, int, int);

int MyXTPCommandBars::sub_6349a0(int a, int b) {
    if (a == 0)
        return 0;
    if (b != 0) {
        if (this->field_84 < 2)
            return 0;
        int v = this->sub_632c50(a);
        int w = this->sub_632c90(v, b);
        if (v == w)
            return 0;
        if (w == -1)
            return 0;
        a = this->sub_632910(w);
    }
    this->sub_633c70();
    this->sub_6338d0(1);
    this->field_44 = 1;
    int* p = (int*)a;
    int vt = *p;
    (*(void (__thiscall*)(int*, int, int, int))(*(int*)(vt + 0x140)))(p, 1, 0, 1);
    int eax = *(int*)(a + 0xf4);
    int ecx = *(int*)(a + 0xf8);
    int edi = *p;
    int edx = 0;
    if (eax == 0)
        edx = 1;
    int r = sub_67a850(-1, 1, 1, edx, 1, 2);
    (*(void (__thiscall*)(int*, int))(*(int*)(edi + 0x148)))(p, r);
    return 1;
}

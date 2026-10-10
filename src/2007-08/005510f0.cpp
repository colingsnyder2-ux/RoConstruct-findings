// from server: 30% by colin
struct S {
    char pad0[8];
    char field8[0x1c];
    char field24[0x1c];
    int field40;
    int field44;
    int method(int, int);
};

struct T {
    char pad0[0x2c];
    int field2c;
    char pad30[4];
    char field34[0x1c];
    int field50;
    int field54;
    char pad58[0x18];
    char field70[0x1c];
};

extern "C" {
    void __stdcall sub_54AB20(void*, void*);
    void* __stdcall sub_54ABB0(void*);
    void __stdcall sub_54EE90(void*, void*, void*);
    int __stdcall sub_631370(int, int, unsigned char);
    void __stdcall sub_77E6AC(void*);
    void __stdcall sub_77E6A4(void*);
    void __stdcall sub_77E54C(void*, unsigned int);
    void __stdcall sub_77E55C(void*, int);
    void __stdcall sub_77E664(void*, void*);
    extern int dword_7BA564;
    extern int dword_7BA568;
}

int S::method(int a, int b)
{
    char buf1[0x1c];
    char buf2[0x1c];
    void* p;
    int v1, v2, v3, v4;
    unsigned char c1, c2;
    T* t;

    sub_54AB20(buf1, &a);
    p = sub_54ABB0(buf1);
    sub_54EE90(this, p, (void*)b);

    sub_77E6AC(buf2);
    sub_77E6AC(buf1);

    sub_77E6A4(field8);
    sub_77E6A4(field24);

    field40 = 0;
    field44 = 0;

    t = (T*)a;
    c1 = (t->field2c != 0);
    c2 = (t->field50 != 0);

    if (c1) {
        v1 = t->field2c + 1;
    } else {
        v1 = 0;
    }

    if (c2) {
        v2 = t->field50 + 1;
    } else {
        v2 = 0;
    }

    v3 = (t->field2c != dword_7BA564) ? 4 : 0;
    v4 = (t->field2c != dword_7BA568) ? 2 : 0;
    v3 += v4;

    sub_77E54C(field8, v2 + v1 + 10);
    sub_77E55C(field8, 0x1f);
    sub_77E55C(field8, -0x75);
    sub_77E55C(field8, 8);
    sub_77E55C(field8, (c2 ? 0x10 : 0) + (c1 ? 8 : 0));
    sub_77E55C(field8, t->field50 & 0xff);
    sub_77E55C(field8, sub_631370(t->field50, t->field54, 8));
    sub_77E55C(field8, sub_631370(t->field50, t->field54, 0x10));
    sub_77E55C(field8, sub_631370(t->field50, t->field54, 0x18));
    sub_77E55C(field8, v3);
    sub_77E55C(field8, -1);

    if (c1) {
        sub_77E664(field8, t->field34);
        sub_77E55C(field8, 0);
    }

    if (c2) {
        sub_77E664(field8, t->field70);
        sub_77E55C(field8, 0);
    }

    return (int)this;
}

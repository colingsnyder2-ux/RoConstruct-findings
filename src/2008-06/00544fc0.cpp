// from server: 37% by colin
// roc 2008-06 00544fc0  size: 304 bytes
// callee pops 4 bytes (ret 4)

extern "C" int* __cdecl sub_541DA0(int);
extern "C" int* __cdecl sub_5423F0();
extern "C" char* __cdecl sub_542E00(int);
extern "C" int* __cdecl sub_54C630(int);
extern "C" int* __cdecl sub_54C640(int);

struct S {
    int f(int);
};

int S::f(int a) {
    int v4;
    int* p;
    int* q;
    char* c;

    p = sub_541DA0(a);
    v4 = *p;

    q = sub_54C630(v4);
    p = sub_541DA0(a);
    *p = *q;

    q = sub_54C630(v4);
    c = sub_542E00(*q);
    if (*c == 0) {
        q = sub_54C630(v4);
        p = sub_54C640(*q);
        *p = a;
    }

    p = sub_54C640(a);
    q = sub_54C640(v4);
    *p = *q;

    p = sub_5423F0();
    if (a == *p) {
        p = sub_5423F0();
        *p = v4;
    } else {
        p = sub_54C640(a);
        q = sub_54C630(*p);
        if (a == *q) {
            p = sub_54C640(a);
            q = sub_54C630(*p);
            *q = v4;
        } else {
            p = sub_54C640(a);
            p = sub_541DA0(*p);
            *p = v4;
        }
    }

    q = sub_54C630(v4);
    *q = a;
    p = sub_54C640(a);
    *p = v4;

    return 0;
}

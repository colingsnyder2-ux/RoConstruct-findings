// from server: 38% by tester
struct Vec4 {
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
};

extern "C" void __cdecl sub_4B9E50(Vec4* out, const Vec4* in, unsigned int arg);
extern "C" void __cdecl sub_4BB370(Vec4* out, const Vec4* a, const Vec4* b);
extern "C" void __cdecl sub_4B9880(Vec4* out, const Vec4* in);
extern "C" void __cdecl sub_4B98E0(Vec4* out, const Vec4* in);

struct RakPeer {
};

void __cdecl func(const Vec4* a, const Vec4* b, Vec4* out) {
    Vec4 tmp1;
    Vec4 tmp2;
    Vec4 tmp3;
    Vec4 tmp4;

    sub_4B9E50(&tmp1, a, 0);
    sub_4BB370(&tmp2, b, &tmp1);

    tmp3.a = tmp2.a;
    tmp3.b = tmp2.b;
    tmp3.c = tmp2.c;
    tmp3.d = tmp2.d;

    out->a = b->a;
    out->b = b->b;
    out->c = b->c;
    out->d = b->d;

    int i = 3;
    do {
        unsigned int edx = ((unsigned int*)b)[i];
        unsigned int ebx = ((unsigned int*)&tmp3)[i];
        if (edx > ebx) {
            sub_4B9880(&tmp3, out);
            return;
        }
        if (edx < ebx) {
            break;
        }
        i--;
    } while (i >= 0);

    sub_4B9880(&tmp3, out);
    sub_4B98E0(&tmp3, out);
}

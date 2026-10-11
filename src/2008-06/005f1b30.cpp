// from server: 62% by colin
extern "C" int __stdcall sub_005a6b40(int, void*);

struct S_func_005f1b30 {
    int __cdecl f(int a, int b, int c, int d, int e, int* out);
};

int S_func_005f1b30::f(int a, int b, int c, int d, int e, int* out)
{
    int local;
    sub_005a6b40(1, &local);
    if (a == b) {
        if (c == d) {
            if (e - local <= 0) {
                *out = 0;
                return 0;
            }
        } else {
            if (c > d) goto L;
            if (c < d) {
                *out = 0;
                return 0;
            }
            if (a <= b) {
                *out = 0;
                return 0;
            }
        }
    } else {
        if (c > d) goto L;
        if (c < d) {
            *out = 0;
            return 0;
        }
        if (a <= b) {
            *out = 0;
            return 0;
        }
    }
L:
    if (local > e) {
        e += 1000000000;
        a -= 1;
        c -= (c != 0 ? 0 : 1);
    }
    *out = (e - local + 500000) / 1000000 + (a - b) * 1000;
    return 0;
}

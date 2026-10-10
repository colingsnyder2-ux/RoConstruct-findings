// from server: 76% by colin
extern "C" {
    int __cdecl sub_5bf650(int a, int b, int c, int d);
    int __cdecl sub_5bf500(int a, int b, int c);
    int __cdecl sub_5be3f0(int a, int b, int c);
    int __cdecl sub_5bdd60(int a, int b);
    int __cdecl sub_5bdb70(int a, double b);
}

extern int g_7ba37c[];
extern int g_7ba398;
extern int g_7ba3a0;
extern double g_79d618;

int __cdecl sub_5cbc60(int a)
{
    int v;
    int idx;
    int r;

    idx = sub_5bf650(a, 1, (int)&g_7ba398, (int)&g_7ba3a0);
    v = sub_5bf500(a, 2, 0);
    r = sub_5be3f0(a, g_7ba37c[idx], v);
    idx = g_7ba37c[idx];

    if (idx == 3) {
        int t = sub_5be3f0(a, 4, 0);
        double d = (double)t * g_79d618 + (double)r;
        sub_5bdb70(a, d);
    } else if (idx == 5) {
        sub_5bdd60(a, r);
    } else {
        double d = (double)r;
        sub_5bdb70(a, d);
    }
    return 1;
}

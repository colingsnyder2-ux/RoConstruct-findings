// from server: 42% by colin
extern "C" {
    struct _iobuf;
    _iobuf *__cdecl __iob_func(void);
    int __cdecl fprintf(_iobuf *, const char *, ...);
    void __cdecl longjmp(void *, int);
}

extern "C" void *__stdcall sub_77e87c(void *, int);
extern "C" void *__stdcall sub_77e88c(const char *, ...);
extern "C" void *__stdcall sub_77e8c4(void *);

extern "C" unsigned int __security_cookie;

struct S {
    void f(char *a, char *b);
};

void S::f(char *a, char *b) {
    char buf[16];
    unsigned int cookie;
    int i;
    char *p;
    char *q;
    char *r;
    char *s;
    char *t;

    cookie = __security_cookie ^ (unsigned int)&buf[0];
    *(unsigned int *)(buf + 12) = cookie;

    if (*b != '#') {
        sub_77e88c("libpng error: %s", b);
        sub_77e8c4((char *)__iob_func() + 0x40);
        longjmp(a, 1);
        return;
    }

    p = buf;
    q = buf + 1;
    r = buf + 2;
    s = buf + 3;
    t = buf + 4;

    i = 0;
    for (;;) {
        char c1, c2, c3, c4, c5;
        c1 = b[i];
        c2 = b[i + 1];
        p[i] = c2;
        if (c1 == ' ') break;
        c3 = b[i + 2];
        q[i] = c3;
        if (c2 == ' ') { i += 1; break; }
        c4 = b[i + 3];
        r[i] = c4;
        if (c3 == ' ') { i += 2; break; }
        c5 = b[i + 4];
        s[i] = c5;
        if (c4 == ' ') { i += 3; break; }
        t[i] = b[i + 5];
        if (c5 == ' ') { i += 4; break; }
        i += 5;
        if (i >= 15) break;
    }

    if ((unsigned int)(i - 2) <= 12) {
        buf[i] = 0;
        sub_77e88c("libpng error no. %s: %s", b + i, buf);
    } else {
        sub_77e88c("libpng error: %s, offset=%d", b, i);
    }
    sub_77e8c4((char *)__iob_func() + 0x40);
    longjmp(a, 1);
}

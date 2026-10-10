// from server: 49% by tester
extern "C" {
    struct _iobuf { char _pad[0x40]; };
    _iobuf *__cdecl __iob_func(void);
    int __cdecl fprintf(_iobuf *, const char *, ...);
    void __cdecl longjmp(void *, int);
}

extern unsigned int __security_cookie;

struct S {
};

void __cdecl f(const char *msg, const char *arg) {
    char buf[16];
    unsigned int cookie = __security_cookie ^ (unsigned int)&buf;
    (void)cookie;

    if (*arg != '#') {
        fprintf(__iob_func() + 2, "libpng error: %s", arg);
        longjmp((void *)((char *)__iob_func() + 0x40), 1);
        return;
    }

    int i = 0;
    while (i < 15) {
        char c1 = arg[i + 1];
        buf[i] = c1;
        if (arg[i] == ' ') {
            break;
        }
        char c2 = arg[i + 2];
        buf[i + 1] = c2;
        if (c1 == ' ') {
            i += 1;
            break;
        }
        char c3 = arg[i + 3];
        buf[i + 2] = c3;
        if (c2 == ' ') {
            i += 2;
            break;
        }
        char c4 = arg[i + 4];
        buf[i + 3] = c4;
        if (c3 == ' ') {
            i += 3;
            break;
        }
        char c5 = arg[i + 5];
        buf[i + 4] = c5;
        if (c4 == ' ') {
            i += 4;
            break;
        }
        i += 5;
    }

    unsigned int n = (unsigned int)(i - 2);
    if (n <= 12) {
        buf[i] = 0;
        fprintf(__iob_func() + 2, "libpng error: %s, offset=%d", buf, arg + i);
    } else {
        fprintf(__iob_func() + 2, "libpng error no. %s: %s", arg, i);
    }
    longjmp((void *)((char *)__iob_func() + 0x40), 1);
}

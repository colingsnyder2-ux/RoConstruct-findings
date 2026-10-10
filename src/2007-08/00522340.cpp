// from server: 73% by colin
extern "C" {
    struct _iobuf;
    _iobuf *__cdecl __iob_func(void);
    int __cdecl fprintf(_iobuf *, const char *, ...);
}

extern "C" void __cdecl sub_51E8E0(int, const char *);
extern "C" void __cdecl sub_51E990(int, const char *);
extern "C" int __cdecl sub_5206A0(int, unsigned char *, int);
extern "C" int __cdecl sub_521750(int, int);
extern "C" void __cdecl sub_5145D0(int, int, int);

extern "C" void __cdecl sub_522340(int a, int b, int c, int d)
{
    int *p = (int *)a;
    unsigned int flags = *(unsigned int *)(p + 0x68 / 4);

    if ((flags & 1) == 0) {
        sub_51E8E0(a, (const char *)0x7a3c2c);
    } else if (flags & 4) {
        sub_51E990(a, (const char *)0x7a3c14);
        sub_521750(a, d);
        return;
    } else if (flags & 2) {
        sub_51E990(a, (const char *)0x7a3bfc);
    }

    if (b != 0 && (*(unsigned int *)(b + 8) & 0x800) != 0) {
        sub_51E990(a, (const char *)0x7a3be4);
        sub_521750(a, d);
        return;
    }

    if (c != 1) {
        sub_51E990(a, (const char *)0x7a3bc8);
        sub_521750(a, c);
        return;
    }

    unsigned char local = 0;
    sub_5206A0(a, &local, 1);
    int r2 = sub_521750(a, 0);
    if (r2 != 0)
        return;

    unsigned int intent = local;
    if ((int)intent >= 4) {
        sub_51E990(a, (const char *)0x7a3bb4);
        return;
    }

    if ((*(unsigned char *)(b + 8) & 1) != 0) {
        int v = *(int *)(b + 0xfc);
        if (v < 0xafc8 || v > 0xb3b0) {
            sub_51E990(a, (const char *)0x7a38dc);
            int g = *(int *)(a + 0x234);
            fprintf(__iob_func(), (const char *)0x7a3b94, g);
            fprintf(__iob_func(), (const char *)0x7a3bd4);
        }
    }

    if ((*(unsigned char *)(b + 8) & 4) != 0) {
        int v;
        v = *(int *)(b + 0x100);
        if (v < 0x763e || v > 0x7e0e) goto bad;
        v = *(int *)(b + 0x104);
        if (v < 0x7c9c || v > 0x846c) goto bad;
        v = *(int *)(b + 0x108);
        if (v < 0xf618 || v > 0xfde8) goto bad;
        v = *(int *)(b + 0x10c);
        if (v < 0x7d00 || v > 0x84d0) goto bad;
        v = *(int *)(b + 0x110);
        if (v < 0x7148 || v > 0x7918) goto bad;
        v = *(int *)(b + 0x114);
        if (v < 0xe678 || v > 0xee48) goto bad;
        v = *(int *)(b + 0x118);
        if (v < 0x36b0 || v > 0x3e80) goto bad;
        v = *(int *)(b + 0x11c);
        if (v < 0x1388 || v > 0x1b58) goto bad;
        goto good;
    bad:
        sub_51E990(a, (const char *)0x7a3ad8);
    }

good:
    sub_5145D0(a, b, intent);
}

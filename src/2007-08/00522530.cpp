// from server: 59% by colin
// roc 2007-08 00522530  unit: seg_00520000  size: 431 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00522530

extern "C" void __stdcall sub_51E8E0(int, const char*);
extern "C" void __stdcall sub_51E990(int, const char*);
extern "C" int __stdcall sub_521750(int, int);
extern "C" int __stdcall sub_51EC80(int, int);
extern "C" int __stdcall sub_5206A0(int, int, int);
extern "C" void __stdcall sub_51ECD0(int, int);
extern "C" int __stdcall sub_520740(int, int, int, int, int, int);
extern "C" void __stdcall sub_5146B0(int, int, int, int, int, int);

struct S {
    int f(int, int);
};

int S::f(int a, int b)
{
    int* self = (int*)this;
    int flags = self[0x68 / 4];
    if (!(flags & 1)) {
        sub_51E8E0((int)this, (const char*)0x7a3d28);
    } else if (flags & 4) {
        sub_51E990((int)this, (const char*)0x7a3d10);
        sub_521750((int)this, b);
        return 0;
    } else if (flags & 2) {
        sub_51E990((int)this, (const char*)0x7a3cf8);
        goto after;
    } else {
        goto after;
    }
    return 0;

after:
    if (a != 0 && (*(int*)(a + 8) & 0x1000)) {
        sub_51E990((int)this, (const char*)0x7a3ce0);
        sub_521750((int)this, b);
        return 0;
    }

    int n = b;
    int buf = sub_51EC80((int)this, n + 1);
    sub_5206A0((int)this, buf, n);
    if (sub_521750((int)this, 0) != 0) {
        sub_51ECD0((int)this, buf);
        return 0;
    }

    *(char*)(buf + n) = 0;
    char* p = (char*)buf;
    if (*p != 0) {
        do {
            p++;
        } while (*p != 0);
    }
    p++;
    if ((unsigned)p >= (unsigned)(buf + n)) {
        sub_51ECD0((int)this, buf);
        sub_51E990((int)this, (const char*)0x7a3cc8);
        return 0;
    }

    char c = *p;
    p++;
    int val;
    if (c != 0) {
        sub_51E990((int)this, (const char*)0x7a3c98);
        val = 0;
    } else {
        val = 0;
    }

    int out;
    int len = (int)p - buf;
    int r = sub_520740((int)this, val, buf, n, len, (int)&out);
    int total = out;
    int rem = total - len;
    if ((unsigned)len > (unsigned)total || rem < 4) {
        sub_51ECD0((int)this, r);
        sub_51E990((int)this, (const char*)0x7a3c48);
        return 0;
    }

    char* q = (char*)(r + len);
    unsigned int sz = ((unsigned int)q[0] << 24) | ((unsigned int)q[1] << 16) | ((unsigned int)q[2] << 8) | (unsigned int)q[3];
    if (sz < (unsigned int)rem) {
        sub_5146B0((int)this, r, len, (int)q, sz, b);
        sub_51ECD0((int)this, r);
        return 0;
    } else if (sz == (unsigned int)rem) {
        sub_5146B0((int)this, r, len, (int)q, sz, b);
        sub_51ECD0((int)this, r);
        return 0;
    } else {
        sub_51ECD0((int)this, r);
        sub_51E990((int)this, (const char*)0x7a3c74);
        return 0;
    }
}

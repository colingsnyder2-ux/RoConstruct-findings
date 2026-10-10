// from server: 47% by colin
// roc 2007-08 00522b50  unit: seg_00520000  size: 573 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00522b50

extern "C" {
    int __cdecl sub_51E8E0(int, const char*);
    int __cdecl sub_51E990(int, const char*);
    int __cdecl sub_521750(int, int);
    int __cdecl sub_5206A0(int, void*, int);
    int __cdecl sub_520680(void*);
    int __cdecl sub_513960(int, int, void*);
    void __cdecl sub_630A1E();
}

struct T {
    char pad0[8];
    unsigned char flags8;
    char pad9[0x14 - 9];
    unsigned short w14;
};

struct S {
    char pad0[0x68];
    unsigned int flags68;
    char pad6C[0x114 - 0x6C];
    unsigned char* ptr114;
    char pad118[0x126 - 0x118];
    unsigned char b126;
    char pad127[0x138 - 0x127];
    unsigned char b138;
    char pad139[0x13A - 0x139];
    unsigned short w13A;
    unsigned short w13C;
    unsigned short w13E;
    unsigned short w140;
    int f(T* pT, int arg);
};

int S::f(T* pT, int arg) {
    unsigned int f = flags68;
    unsigned int eax;
    if (!(f & 1)) {
        sub_51E8E0((int)this, "Missing IHDR before bKGD");
        if (b126 != 3) {
            eax = (unsigned int)b126;
            eax &= 2;
            eax |= 1;
            eax += eax;
            goto check;
        }
        return 1;
    }
    if (f & 4) {
        sub_51E990((int)this, "Invalid bKGD after IDAT");
        sub_521750((int)this, arg);
        return 0;
    }
    if (b126 == 3 && !(f & 2)) {
        sub_51E990((int)this, "Missing PLTE before bKGD");
        sub_521750((int)this, arg);
        return 0;
    }
    if (pT != 0 && (pT->flags8 & 0x20)) {
        sub_51E990((int)this, "Incorrect bKGD chunk length");
        sub_521750((int)this, arg);
        return 0;
    }
    eax = (unsigned int)b126;
    eax &= 2;
    eax |= 1;
    eax += eax;
check:
    if (arg != (int)eax) {
        sub_51E990((int)this, "Incorrect bKGD chunk index value");
        sub_521750((int)this, arg);
        return 0;
    }
    {
        unsigned char buf[4];
        int r = sub_5206A0((int)this, buf, (int)eax);
        sub_521750((int)this, 0);
        if (r != 0) {
            return 0;
        }
        if (b126 == 3) {
            b138 = buf[0];
            if (pT->w14 != 0) {
                unsigned short dx = (unsigned short)(unsigned char)buf[0];
                if (dx > pT->w14) {
                    sub_51E990((int)this, "Duplicate bKGD chunk");
                    return 0;
                }
                {
                    unsigned int idx = (unsigned int)(unsigned char)buf[0];
                    unsigned char* base = ptr114;
                    unsigned int off = idx + idx * 2;
                    unsigned char* p = base + off;
                    w13A = (unsigned short)p[0];
                    w13C = (unsigned short)p[1];
                    w13E = (unsigned short)p[2];
                }
            }
        } else if (!(b126 & 2)) {
            w140 = (unsigned short)sub_520680(buf);
            w13C = w140;
            w13A = w140;
        } else {
            w13A = (unsigned short)sub_520680(buf);
            w13C = (unsigned short)sub_520680(buf + 2);
            w13E = (unsigned short)sub_520680(buf + 4);
        }
        sub_513960((int)this, (int)pT, &b138);
    }
    return 0;
}

// from server: 46% by colin
extern "C" {
    int __cdecl sub_51E8E0(int, const char*);
    int __cdecl sub_51E990(int, const char*);
    int __cdecl sub_5206A0(int, int, int);
    int __cdecl sub_520680(int);
    int __cdecl sub_521750(int, int);
    int __cdecl sub_513FC0(int, int, int);
    void __cdecl sub_630A1E();
}

struct S {
    char pad[0x68];
    unsigned int flags;
    char pad2[0x118 - 0x6C];
    unsigned short count;
    int method(int a, int b);
};

int S::method(int a, int b)
{
    unsigned short buf[0x100];
    int i;
    unsigned int n;
    int r;

    if ((this->flags & 1) == 0) {
        sub_51E8E0((int)this, "Missing IHDR before hIST");
        n = (unsigned int)b >> 1;
        if (n != this->count || n > 0x100) {
            sub_51E990((int)this, "Incorrect hIST chunk length");
            sub_521750((int)this, b);
            return 0;
        }
        for (i = 0; i < (int)n; i++) {
            sub_5206A0((int)this, (int)&buf[0], 2);
            buf[i] = (unsigned short)sub_520680((int)&buf[0]);
        }
        r = sub_521750((int)this, 0);
        if (r == 0) {
            sub_513FC0((int)this, a, (int)&buf[0]);
        }
        return 0;
    }

    if ((this->flags & 4) != 0) {
        sub_51E990((int)this, "Invalid hIST after IDAT");
        sub_521750((int)this, b);
        return 0;
    }

    if ((this->flags & 2) == 0) {
        sub_51E990((int)this, "Duplicate hIST chunk");
        sub_521750((int)this, b);
        return 0;
    }

    if (a != 0 && (*(unsigned char*)(a + 8) & 0x40) != 0) {
        sub_51E990((int)this, "Missing PLTE before hIST");
        sub_521750((int)this, b);
        return 0;
    }

    return 0;
}

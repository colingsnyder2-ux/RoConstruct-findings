// from server: 77% by colin
// roc 2007-08 00521ce0  unit: seg_00520000  size: 364 bytes

extern "C" void __cdecl sub_51E8E0(void*, const char*);
extern "C" void __cdecl sub_51E990(void*, const char*);
extern "C" int __cdecl sub_5206A0(void*, void*, int);
extern "C" int __cdecl sub_521750(void*, int);
extern "C" void __cdecl sub_514580(void*, void*, void*);

struct S {
    char pad[0x68];
    unsigned int flags;
    char pad2[0x126 - 0x6c];
    unsigned char b126;
    char pad3[0x12a - 0x127];
    unsigned char b12a;
    char pad4[0x17c - 0x12b];
    unsigned char b17c;
    unsigned char b17d;
    unsigned char b17e;
    unsigned char b17f;
    unsigned char b180;
    void f(int, void*);
};

void S::f(int a, void* b)
{
    unsigned char buf[4];
    buf[0] = 0;
    buf[1] = 0;
    buf[2] = 0;
    buf[3] = 0;

    unsigned int fl = this->flags;
    if (!(fl & 1)) {
        sub_51E8E0(this, (const char*)0x7a3a1c);
    } else if (fl & 4) {
        sub_51E990(this, (const char*)0x7a3a04);
        sub_521750(this, a);
        return;
    } else if (fl & 2) {
        sub_51E990(this, (const char*)0x7a39ec);
    }

    if (b != 0 && (((unsigned char*)b)[8] & 2)) {
        sub_51E990(this, (const char*)0x7a39d4);
        sub_521750(this, a);
        return;
    }

    unsigned int eax = 3;
    if (this->b126 != 3) {
        eax = this->b12a;
    }

    if ((unsigned int)a != eax || (unsigned int)a > 4) {
        sub_51E990(this, (const char*)0x7a39b8);
        sub_521750(this, a);
        return;
    }

    sub_5206A0(this, buf, a);
    if (sub_521750(this, 0) != 0) {
        return;
    }

    if (this->b126 & 2) {
        this->b17c = buf[0];
        this->b17d = buf[1];
        this->b17e = buf[2];
        this->b180 = buf[3];
        sub_514580(this, b, &this->b17c);
    } else {
        this->b17f = buf[0];
        this->b17c = buf[0];
        this->b17d = buf[0];
        this->b17e = buf[0];
        this->b180 = buf[1];
        sub_514580(this, b, &this->b17c);
    }
}

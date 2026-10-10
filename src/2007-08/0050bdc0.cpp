// from server: 44% by colin
// roc 2007-08 0050bdc0  unit: seg_00500000  size: 286 bytes

struct S {
    void* vtable;          // +0
    int field4;            // +4
    char pad8[0x1c];       // +8 .. +0x23
    unsigned char field24; // +0x24
    char pad25[3];         // +0x25 .. +0x27
    int field28;           // +0x28
    char pad2c[4];         // +0x2c .. +0x2f
    int field30;           // +0x30
    int field34;           // +0x34
    int field38;           // +0x38
    int field3c;           // +0x3c
    int field40;           // +0x40
    int field44;           // +0x44
    unsigned char field48; // +0x48

    S(int a, int b, int c, int d, unsigned char e);
};

extern "C" void __stdcall sub_77e6a4();
extern "C" void __stdcall sub_77e62c(const char*);
extern "C" int __cdecl sub_500010(int);
extern "C" int __cdecl sub_630d4c(int, int, int);
extern "C" int __cdecl sub_72b6b0(int, int*, int, int);
extern "C" int __cdecl sub_50bd70(int);
extern "C" int __cdecl sub_50bd90(int, int);

extern char data_7a0c60;
extern char data_7a0b08;

S::S(int a, int b, int c, int d, unsigned char e)
{
    this->vtable = &data_7a0c60;
    sub_77e6a4();
    this->field30 = 0;
    this->field28 = 0;
    this->field34 = 0;
    this->field3c = 0;
    this->field48 = (unsigned char)((e != 0 || d != 0) ? 1 : 0);
    this->field4 = a;
    sub_77e62c(&data_7a0b08);
    this->field44 = 0;
    this->field24 = (unsigned char)sub_50bd70(this->field4);
    if (d != 0) {
        int v = sub_50bd90(b, this->field24);
        this->field38 = v;
        int p = sub_500010(v);
        this->field40 = p;
        sub_72b6b0(p, &this->field38, b + 4, c - 4);
        this->field38 = this->field38;
        this->field3c = this->field38;
    } else {
        this->field38 = c;
        this->field3c = c;
        if (e != 0) {
            int p = sub_500010(c);
            this->field40 = p;
            sub_630d4c(p, c, c);
        } else {
            this->field40 = b;
        }
    }
}

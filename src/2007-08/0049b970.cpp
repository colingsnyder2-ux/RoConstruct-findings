// from server: 47% by colin
struct FactoryProduct {
    void* vtable;
    char pad[0x24];
    int field28;
    int field2c;
    char pad2[0x18];
    int field48;
    int field4c;

    FactoryProduct(int a, int b, int c, int d, int e, int f, int g, int h, int i);
};

extern "C" int __cdecl sub_4991B0(int, int);
extern "C" void __stdcall sub_570DB0(void*, int);
extern "C" void __stdcall sub_56D3C0(void*);
extern "C" int __cdecl sub_56D7D0();
extern "C" void* __cdecl sub_62FEF6(int);
extern "C" void __stdcall sub_499430(void*, int, int, int, int);

FactoryProduct::FactoryProduct(int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
    int r = sub_4991B0(e, f);
    sub_570DB0(this, r);
    this->field28 = g;
    this->field2c = h;
    this->vtable = (void*)0x79c4cc;
    sub_56D3C0((char*)this + 0x30);
    sub_56D3C0((char*)this + 0x38);
    sub_56D3C0((char*)this + 0x40);
    int t = sub_56D7D0();
    this->field48 = t;
    void* p = sub_62FEF6(8);
    if (p) {
        *(int*)p = 0x787198;
        *(int*)((char*)p + 4) = i;
    } else {
        p = 0;
    }
    this->field4c = (int)p;
    sub_499430(this, a, b, c, d);
}

// from server: 32% by colin
struct VDHTMLWindow_BoundFuncDesc
{
    char pad0[0x28];
    int field28;
    int field2c;
    char pad30[8];
    char field38[8];
    int field40;
    int field44;

    void construct(int a, int b, int c, int d, int e, int f);
};

struct Helper570DB0
{
    void method(int);
};

struct Helper56D3C0
{
    void method();
};

struct Helper413840
{
    void method(int, int);
};

extern "C" int __cdecl sub_419110(int, int);

void VDHTMLWindow_BoundFuncDesc::construct(int a, int b, int c, int d, int e, int f)
{
    int r = sub_419110(d, e);
    ((Helper570DB0*)this)->method(r);
    this->field28 = c;
    this->field2c = d;
    *(int*)this = 0x787868;
    ((Helper56D3C0*)((char*)this + 0x30))->method();
    ((Helper56D3C0*)((char*)this + 0x38))->method();
    ((Helper413840*)this)->method(e, f);
}

// from server: 37% by colin
struct BoundFuncDesc {
    void construct(int a, int b, int c, int d);
};

extern "C" int __cdecl sub_4B0240(int, int);
extern "C" int __cdecl sub_56D6F0();
extern "C" void __cdecl sub_570DB0(int);

void BoundFuncDesc::construct(int a, int b, int c, int d)
{
    int r = sub_4B0240(c, d);
    sub_570DB0(r);
    *(int*)((char*)this + 0x28) = a;
    *(int*)((char*)this + 0x2c) = b;
    *(int*)this = 0x79dbac;
    *(int*)((char*)this + 0x14) = sub_56D6F0();
}

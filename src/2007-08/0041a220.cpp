// from server: 40% by colin
struct VDHTMLWindow_BoundFuncDesc {
    void construct(int a, int b, int c, int d, int e);
};

extern "C" int __stdcall sub_419110(int, int);
extern "C" int __stdcall sub_570db0();
extern "C" int __stdcall sub_56d3c0();
extern "C" int __stdcall sub_56d350();
extern "C" int __stdcall sub_56c880(int);
extern "C" int __stdcall sub_52c940(int, int, int);
extern "C" int __stdcall sub_56d400();

void VDHTMLWindow_BoundFuncDesc::construct(int a, int b, int c, int d, int e)
{
    int v1 = sub_419110(c, d);
    sub_570db0();
    *(int*)((char*)this + 0x28) = b;
    *(int*)((char*)this + 0x2c) = a;
    *(int*)this = 0x78785c;
    sub_56d3c0();
    *(int*)((char*)this + 0x14) = sub_56d350();
    int v3 = sub_56c880((int)((char*)this + 0x30));
    int v4 = sub_52c940(e, -1, v3);
    sub_56d400();
}

// from server: 42% by colin
struct VDHTMLWindow_BoundFuncDesc {
    void construct(int a, int b, int c, int d, int e);
};

extern "C" void __stdcall sub_419110(int a, int b);
extern "C" void __stdcall sub_570db0();
extern "C" void __stdcall sub_56d3c0();
extern "C" void __stdcall sub_56d350();
extern "C" void __stdcall sub_56da00();
extern "C" void __stdcall sub_52c940(int a, int b);
extern "C" void __stdcall sub_56d400();

void VDHTMLWindow_BoundFuncDesc::construct(int a, int b, int c, int d, int e)
{
    int* self = (int*)this;
    sub_419110(c, d);
    sub_570db0();
    self[0] = 0x787850;
    self[10] = a;
    self[11] = b;
    sub_56d3c0();
    int* p = (int*)((char*)this + 0x14);
    sub_56d350();
    *p = (int)sub_56d350;
    sub_56da00();
    sub_52c940(e, -1);
    sub_56d400();
}

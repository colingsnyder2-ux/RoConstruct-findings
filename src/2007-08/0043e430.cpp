// from server: 33% by colin
struct XBrickColorItem {
    bool f(int, int, int, int, int);
};

extern "C" void* __stdcall sub_438E50(void*);
extern "C" void __stdcall sub_77DCB8(void*, const char*);
extern "C" void __stdcall sub_77DDBC(void*);
extern "C" void __stdcall sub_69A690(void*, int, int, int, int, int);

bool XBrickColorItem::f(int a1, int a2, int a3, int a4, int a5)
{
    void* p = sub_438E50(&p);
    sub_77DCB8(p, (const char*)0x785954);
    bool b = (*(int*)0 == 0);
    sub_77DDBC(&p);
    if (b)
        return false;
    sub_69A690(this, a1, a2, a3, a4, a5);
    return true;
}

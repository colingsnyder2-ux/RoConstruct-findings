// from server: 34% by tester
struct XBrickColorItem {
    bool Init(int a, int b, int c, int d, int e);
};

extern "C" int __stdcall sub_438E50(void* out);
extern "C" int __stdcall sub_69A690(void* self, int a, int b, int c, int d, int e);

extern "C" int __stdcall sub_77DCB8(void* p);
extern "C" void __stdcall sub_77DDBC(void* p);

bool XBrickColorItem::Init(int a, int b, int c, int d, int e)
{
    void* local;
    sub_438E50(&local);
    int r = sub_77DCB8(&local);
    bool ok = (r == 0);
    sub_77DDBC(&local);
    if (ok)
        return false;
    sub_69A690(this, a, b, c, d, e);
    return true;
}

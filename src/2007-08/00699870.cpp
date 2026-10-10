// from server: 88% by colin
struct CXTPPropertyGridItem {
    CXTPPropertyGridItem* f(int);
};

extern "C" void __stdcall sub_73833a();
extern "C" void __stdcall sub_6992a0();

CXTPPropertyGridItem* CXTPPropertyGridItem::f(int arg)
{
    sub_73833a();
    *(int*)this = 0x7d16fc;
    sub_6992a0();
    *(int*)((char*)this + 0x38) = arg;
    *(int*)((char*)this + 0x34) = -1;
    return this;
}

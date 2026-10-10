// from server: 45% by colin
struct CXTPBitmapDC
{
    void* vtable;
    void* field4;
    int field8;
    int fieldC;
    void* field10;

    CXTPBitmapDC(void* bitmap, void* destinationDC);
};

extern "C" void* __stdcall CreateCompatibleDC(void*);
extern "C" void* __stdcall SelectObject(void*, void*);
extern "C" void __stdcall sub_7383E2();
extern "C" void __stdcall sub_7383D0();

CXTPBitmapDC::CXTPBitmapDC(void* bitmap, void* destinationDC)
{
    sub_7383E2();
    vtable = (void*)0x7cecf4;
    field8 = 0;
    void* bmp = bitmap;
    if (bmp != 0)
        bmp = *(void**)((char*)bmp + 4);
    void* dc = CreateCompatibleDC(bmp);
    sub_7383D0();
    field4 = dc;
    field10 = SelectObject(dc, destinationDC);
}

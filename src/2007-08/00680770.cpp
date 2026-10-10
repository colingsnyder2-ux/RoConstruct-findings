// from server: 56% by colin
struct CXTPBitmapDC
{
    void* vtable;
    void* field4;
    void* field8;
    int fieldC;
    void* field10;
    CXTPBitmapDC(void* bitmap, void* destinationDC);
};

extern "C" void* __stdcall CreateCompatibleDC(void*);
extern "C" void* __stdcall SelectObject(void*, void*);
extern "C" void* __stdcall sub_7383E2();
extern "C" void* __stdcall sub_7383D0(void*);

CXTPBitmapDC::CXTPBitmapDC(void* bitmap, void* destinationDC)
{
    sub_7383E2();
    fieldC = 0;
    vtable = (void*)0x7cecf4;
    void* bmp = bitmap;
    if (bmp != 0)
        bmp = *(void**)((char*)bmp + 4);
    void* dc = CreateCompatibleDC(bmp);
    sub_7383D0(dc);
    void* bmp2 = destinationDC;
    if (bmp2 != 0)
        bmp2 = *(void**)((char*)bmp2 + 4);
    field10 = SelectObject(field4, bmp2);
}

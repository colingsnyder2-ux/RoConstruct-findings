// from server: 64% by atomic.potato
typedef void* HDC;
typedef void* HGDIOBJ;

extern "C" HGDIOBJ __stdcall SelectObject(HDC, HGDIOBJ);

struct CXTPBitmapDC
{
    int value;
    HDC dc;
    HGDIOBJ object;
    int reserved;
    HGDIOBJ oldObject;
    CXTPBitmapDC();
};

CXTPBitmapDC::CXTPBitmapDC()
{
    SelectObject(dc, oldObject);
    value = 0xA5FE78;
    oldObject = (HGDIOBJ)0xA5FDD0;
}

// from server: 69% by atomic.potato
typedef void *HDC;
typedef void *HGDIOBJ;

extern "C" HGDIOBJ __stdcall SelectObject(HDC, HGDIOBJ);

struct CXTPBitmapDC
{
    int f();
};

int CXTPBitmapDC::f()
{
    HGDIOBJ result;
    result = SelectObject(*(HDC *)((char *)this + 0x0c),
                          *(HGDIOBJ *)((char *)this + 0x10));
    *(int *)this = 0xaca760;
    *(int *)((char *)this + 4) = 0xaca6b8;
    return (int)result;
}

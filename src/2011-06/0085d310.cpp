// from server: 80% by atomic.potato
typedef void *HGDIOBJ;
typedef void *HDC;

extern "C" HGDIOBJ (__stdcall *SelectObject)(HDC, HGDIOBJ);

struct CXTPBitmapDC
{
    int f();
};

int CXTPBitmapDC::f()
{
    HDC dc;
    HGDIOBJ object;
    dc = *(HDC *)((char *)this + 12);
    object = *(HGDIOBJ *)((char *)this + 16);
    *(int *)this = 0xaca768;
    SelectObject(dc, object);
    *(int *)((char *)this + 4) = 0xa5df88;
    return 0;
}

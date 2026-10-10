// from server: 66% by atomic.potato
typedef void *HDC;
typedef void *HGDIOBJ;

extern "C" HGDIOBJ __stdcall SelectObject(HDC, HGDIOBJ);

struct S
{
    int f();
    char pad[8];
    HGDIOBJ object;
};

int S::f()
{
    HGDIOBJ oldObject = SelectObject(*(HDC *)((char *)this + 0xc), object);
    *(void **)this = (void *)0xa5fe80;
    *(void **)((char *)this + 4) = (void *)0xa024c8;
    return (int)oldObject;
}

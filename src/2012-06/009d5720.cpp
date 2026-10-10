// from server: 63% by atomic.potato
typedef void* HDC;
typedef void* HGDIOBJ;

extern "C" HGDIOBJ __stdcall SelectObject(HDC, HGDIOBJ);

struct S
{
    int f();
    int vtable;
    HDC hdc;
    HGDIOBJ object;
};

int S::f()
{
    HGDIOBJ oldObject = SelectObject(hdc, object);
    vtable = 0xC15E60;
    *(int*)((char*)this + 4) = 0xB45FB0;
    return (int)oldObject;
}

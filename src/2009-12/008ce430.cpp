// from server: 78% by atomic.potato
typedef int BOOL;

extern "C" BOOL __stdcall XTPCall_98de84(void*, void*);
extern "C" void __stdcall XTPCall_98de5c(void*, void*);
extern "C" void XTPCall_8cdfb0(void*);

struct S_func_008ce430
{
    char pad[0x54];
    void* p54;
    void f(void*);
};

void S_func_008ce430::f(void* p)
{
    if (XTPCall_98de84(&p54, p))
    {
        XTPCall_98de5c(&p54, p);
        XTPCall_8cdfb0(this);
    }
}

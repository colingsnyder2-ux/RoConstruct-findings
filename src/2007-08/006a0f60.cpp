// from server: 47% by colin
struct CXTPDockBar
{
    void f();
};

extern "C" void __stdcall sub_00630490(void*);
extern "C" void __stdcall sub_0063048a(void*);
extern "C" void __stdcall sub_00630a1e(void);
extern "C" void* __stdcall sub_006321d0(void*);

void CXTPDockBar::f()
{
    char buf[0x58];
    sub_00630490(buf);
    void* p = sub_006321d0(*(void**)((char*)this + 0x6c));
    void** vtbl = *(void***)p;
    void (*fn)(void*, void*, void*) = (void (*)(void*, void*, void*))vtbl[0x28];
    fn(p, buf, this);
    sub_0063048a(buf);
    sub_00630a1e();
}

// from server: 48% by atomic.potato
extern "C" void __stdcall Function007f5f40(void*, void*, void*, void*);
extern "C" void __stdcall Function007fdd70(void*);

struct CXTPControl
{
    CXTPControl* f();
};

CXTPControl* CXTPControl::f()
{
    void* a;
    Function007f5f40(this, &a, 0, 0);
    Function007fdd70(a);
    return this;
}

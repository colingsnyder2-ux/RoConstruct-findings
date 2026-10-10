// from server: 57% by atomic.potato
extern "C" void* __stdcall sub_7f5f40(void*, void*, void*, int);
extern "C" void sub_7fdd70(void*);

struct CXTPControl
{
    void f(void*);
};

void CXTPControl::f(void* a)
{
    void* b;
    b = sub_7f5f40(&b, a, this, 1);
    sub_7fdd70(b);
}

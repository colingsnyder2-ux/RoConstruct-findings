// from server: 67% by atomic.potato
extern "C" void __stdcall imported(void *, void *, int);

struct CXTAuxData
{
    int f(void *);
};

int CXTAuxData::f(void *arg)
{
    imported((char *)this + 0xb4, arg, 0);
    return (int)arg;
}

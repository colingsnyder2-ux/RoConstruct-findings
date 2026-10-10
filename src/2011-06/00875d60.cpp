// from server: 53% by atomic.potato
struct CXTAuxData
{
    int value;
    CXTAuxData *f(int);
};

extern "C" void __stdcall imported(void *, void *, int);

CXTAuxData *CXTAuxData::f(int arg)
{
    int zero = 0;
    imported((void *)((char *)this + 0xb0), (void *)this, zero);
    return this;
}

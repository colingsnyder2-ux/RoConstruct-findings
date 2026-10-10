// from server: 54% by atomic.potato
extern "C" void imported(void *, int *);

struct CXTAuxData
{
    CXTAuxData *f(int *);
};

CXTAuxData *CXTAuxData::f(int *p)
{
    imported((char *)this + 0xb0, 0);
    return this;
}

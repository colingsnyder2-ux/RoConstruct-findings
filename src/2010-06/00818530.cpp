// from server: 58% by atomic.potato
struct CXTAuxData
{
    int f(void *);
};

typedef void (__thiscall *AuxFunction)(void *, void *);

int CXTAuxData::f(void *arg)
{
    AuxFunction function = 0;
    function((char *)this + 0xb0, arg);
    return (int)arg;
}

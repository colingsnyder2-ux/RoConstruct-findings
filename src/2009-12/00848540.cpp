// from server: 70% by atomic.potato
typedef int (__thiscall *FunctionType)(void *, void *, int);

extern FunctionType g_function;

struct CXTPControls
{
    int f(void *);
};

int CXTPControls::f(void *arg)
{
    g_function((char *)this + 0xf0, arg, 0);
    return (int)arg;
}

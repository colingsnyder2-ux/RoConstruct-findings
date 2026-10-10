// from server: 66% by atomic.potato
struct S
{
    int f(int);
};

extern "C" void __stdcall OgreMeshPtrCopy(void *, const void *);

int S::f(int arg)
{
    void *p = (char *)this + 12;
    OgreMeshPtrCopy((void *)arg, p);
    return arg;
}

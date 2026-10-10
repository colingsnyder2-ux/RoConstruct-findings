// from server: 60% by atomic.potato
extern "C" int fn_006c1520(void*);
extern "C" void fn_0040e310(void*, void*);

struct S
{
    int f(void*);
};

int S::f(void* arg)
{
    *(int*)this = fn_006c1520(this);
    fn_0040e310((char*)this + 4, *(void**)((char*)arg + 4));
    return (int)this;
}

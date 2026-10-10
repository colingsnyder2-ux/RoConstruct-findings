// from server: 68% by atomic.potato
extern "C" int Function007F3E30(void *);

struct S {
    int f();
};

int S::f()
{
    int result = Function007F3E30(this);
    typedef int (*Method)(void *);
    Method method =
        *(Method *)((char *)*(void **)this + 0x144);
    method(this);
    return result;
}

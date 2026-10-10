// from server: 39% by atomic.potato
extern "C" int __stdcall SetEvent(void *);

struct S {
    int f();
};

int S::f()
{
    return SetEvent(*(void **)this) ? f() : 0;
}

// from server: 58% by atomic.potato
typedef void *HDC;
typedef int BOOL;

extern "C" void sub_7bc78a(void *, void *, void *, void *);
extern "C" BOOL __stdcall InvalidateRect(void *, const void *, BOOL);

struct S
{
    int f(void *, void *);
};

int S::f(void *a, void *b)
{
    sub_7bc78a(this, a, b, b);
    InvalidateRect(*(void **)((char *)this + 0x20), 0, 1);
    return 0;
}

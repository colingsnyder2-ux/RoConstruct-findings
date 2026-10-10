// from server: 53% by atomic.potato
struct S
{
    int value;
    void f();
};

struct T
{
    int pad[37];
};

extern "C" T *__cdecl sub_007f3b1e(S *);
extern "C" void sub_004531a0(T *);

void S::f()
{
    sub_004531a0(sub_007f3b1e((S *)value));
}

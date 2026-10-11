// from server: 47% by atomic.potato
extern "C" void *__cdecl sub_460e60(void);
extern "C" void sub_76ed70(void *, int, int, int);

struct S
{
    int f(int, int, int);
};

int S::f(int a, int b, int c)
{
    sub_460e60();
    sub_76ed70(sub_460e60(), a, b, c);
    return a;
}

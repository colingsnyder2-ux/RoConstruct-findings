// from server: 38% by atomic.potato
struct S
{
    int f(int, int, int);
};

extern "C" int sub_460e60(int);
extern "C" int sub_4c4ec0(int, int, int);

int S::f(int a, int b, int c)
{
    int value = 0;
    int object = sub_460e60(0);
    sub_4c4ec0(object, a, b);
    return c;
}

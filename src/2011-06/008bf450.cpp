// from server: 66% by atomic.potato
extern "C" int sub_8d0360(void *, void *, void *);

struct S
{
    int f(int);
};

int S::f(int value)
{
    int result = 0;
    return !sub_8d0360((char *)this + 8, &result, &value) ? result : 0;
}

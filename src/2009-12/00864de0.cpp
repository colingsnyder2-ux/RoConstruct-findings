// from server: 63% by atomic.potato
extern "C" int __stdcall CallFirst(char *);
extern "C" int __stdcall CallSecond(char *, int);

struct S
{
    int f(void *, void *);
};

int S::f(void *a, void *b)
{
    int x = CallFirst(*(char **)b + 0x20);
    return CallSecond(*(char **)a + 0x20, x);
}

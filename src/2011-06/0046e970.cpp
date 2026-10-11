// from server: 81% by atomic.potato
struct S {
    char pad[0x68];
    int* begin;
    int* end;
    int f(int);
};

extern int G1_func_0046e860(int);

int S::f(int a)
{
    int* p = (int*)G1_func_0046e860(a);
    int idx = *p;
    if (idx < 0)
        return 0;
    if ((unsigned)idx >= (unsigned)((end - begin) >> 2))
        return 0;
    return begin[idx];
}

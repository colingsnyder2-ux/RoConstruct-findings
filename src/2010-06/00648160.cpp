// from server: 82% by atomic.potato
struct S
{
    int f();
};

extern "C" int __cdecl sub_7A93C6(int);
extern "C" int __cdecl sub_9EA8D8(int, int);

int S::f()
{
    int *a = *(int **)((char *)this + 12);
    int *b = *(int **)((char *)a + 0xAA0);
    int v = *(b + 109);
    if (!v)
        return 0;
    v = sub_7A93C6(v);
    return sub_9EA8D8(0xBB7638, v);
}

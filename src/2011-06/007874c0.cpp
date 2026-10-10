// from server: 82% by atomic.potato
struct TToolVerb
{
    int f();
};

extern "C" int __cdecl sub_80bbc2(int);
extern "C" int __cdecl sub_a40a50(int, int);

int TToolVerb::f()
{
    int a;
    int b;
    a = *(int *)((char *)this + 12);
    b = *(int *)((char *)a + 2764);
    a = *(int *)((char *)b + 392);
    if (!a)
        return 0;
    a = sub_80bbc2(a);
    return sub_a40a50(0xC90654, a);
}

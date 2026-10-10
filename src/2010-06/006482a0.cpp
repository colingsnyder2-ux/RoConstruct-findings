// from server: 82% by atomic.potato
struct TToolVerb
{
    int pad0;
    int pad1;
    int pad2;
    int value();
};

extern "C" int __cdecl sub_7a93c6(int);
extern "C" int __cdecl sub_9ea8d8(int, int);

int TToolVerb::value()
{
    int a = *(int *)((char *)this + 12);
    int b = *(int *)((char *)a + 2720);
    int c = *(int *)((char *)b + 436);
    if (!c)
        return 0;
    c = sub_7a93c6(c);
    return sub_9ea8d8(0xBB76F0, c);
}

// from server: 67% by atomic.potato
typedef int BOOL;

extern "C" int __cdecl sub_7A93C6(int);
extern "C" int sub_9EA8D8(int, int);

struct S
{
    int f();
    int field_0C;
};

int S::f()
{
    int a = *(int *)((char *)field_0C + 0xAA0);
    int b = *(int *)((char *)a + 0x1B4);
    if (b)
        return sub_9EA8D8(0xBB6C6C, sub_7A93C6(b));
    return 0;
}

// from server: 95% by atomic.potato
extern "C" int __cdecl sub_00722e10(int, int, int);

struct T
{
    void sub_0041afe0(int);
};

extern int g_00be2a90;

int func_0060ed20(int value)
{
    int result = sub_00722e10(value, 1, g_00be2a90);
    ((T*)result)->sub_0041afe0(result);
    return 0;
}

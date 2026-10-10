// from server: 21% by colin
extern "C" void* __stdcall sub_77e698(void*);
extern "C" void* __stdcall sub_77e6ac(void*);
extern "C" int __stdcall sub_46c5a0(void*, void*);

struct LDraw2RobloxColorMap
{
    int lookup(int a, int b, int c, int d, int e, int f, int g);
};

int LDraw2RobloxColorMap::lookup(int a, int b, int c, int d, int e, int f, int g)
{
    char buf1[8];
    char buf2[8];
    char buf3[8];
    int result;

    sub_77e698(buf1);
    result = sub_46c5a0(buf2, buf3);
    sub_77e6ac(buf1);
    if (result == 0)
        return 0;

    sub_77e698(buf1);
    result = sub_46c5a0(buf2, buf3);
    sub_77e6ac(buf1);
    if (result == 0)
        return 1;

    sub_77e698(buf1);
    result = sub_46c5a0(buf2, buf3);
    sub_77e6ac(buf1);
    if (result == 0)
        return 2;
    return 999;
}

// from server: 45% by atomic.potato
extern "C" int __cdecl sub_006a8f10(int, int, int, int, int);

int __cdecl sub_006a9340(int a, int b, int c)
{
    return sub_006a8f10(c, b, b < 0 ? -1 : 0, b, a);
}

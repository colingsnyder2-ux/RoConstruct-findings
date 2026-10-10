// from server: 75% by colin
extern "C" int __cdecl helper_8f4b30(int a, int b, int c, int d, int e, int f);

int __cdecl sub_8f4c60(int a, int b, int c, int d, int e)
{
    char buf1;
    char buf2;
    buf1 = 0;
    buf2 = 0;
    helper_8f4b30(a, b, c, d, e, *(int*)&buf1);
    int diff = d - b;
    int q = diff / 72;
    return c - q * 72;
}

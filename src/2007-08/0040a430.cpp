// from server: 75% by colin
extern "C" int __stdcall sub_4022A0(int, int, int, int);

int __stdcall sub_40A430(int a1, int a2, int a3)
{
    int* p = (int*)a3;
    if (p == 0)
        return 0x80004003;

    *p = 0;

    int* q = (int*)a2;
    if (q[0] == 0 && q[1] == 0 && q[2] == 0xc0 && q[3] == 0x46000000)
    {
        *p = a2;
        int v = *(int*)a2;
        int (*fn)(int) = *(int (**)(int))(v + 4);
        fn(a2);
        return 0;
    }

    return sub_4022A0(a1 + 8, 0x7851e8, a2, a3);
}

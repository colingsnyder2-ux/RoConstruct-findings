// from server: 47% by colin
struct S {
    char f(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int);
};

extern "C" int __stdcall sub_4890A0(void*, void*);
extern "C" void __stdcall sub_499CC0(void*, void*, void*);
extern "C" void __stdcall sub_5F1A40(void*);
extern "C" void* __stdcall sub_728F60(void*);

char S::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33)
{
    char local[4];
    char flag;
    char result;

    for (;;)
    {
        if (sub_4890A0(&local[0x40], &local[4]))
            break;

        char* p = (char*)a33;
        if (*p == 0)
        {
            void* v = sub_728F60(&local[0]);
            sub_499CC0(&local[0x40], &flag, v);
            if (*(char*)a33 == 0)
                *(char*)a33 = 1;
        }
        sub_5F1A40(&local[0]);
    }

    return *(char*)&local[4];
}

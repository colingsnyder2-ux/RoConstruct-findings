// from server: 91% by tester
extern "C" {
    int __cdecl __iob_func();
    int __cdecl fputs(const char*, int*);
}

extern int DAT_0077e908;
extern int DAT_0077e88c;

extern "C" int __cdecl sub_005bd580(int);
extern "C" int __cdecl sub_005bd590(int, int);
extern "C" int __cdecl sub_005bd740(int, int);
extern "C" int __cdecl sub_005bd980(int, int, int);
extern "C" int __cdecl sub_005bde00(int, int, int);
extern "C" int __cdecl sub_005be290(int, int, int);
extern "C" int __cdecl sub_005be8e0(int, int);

struct S {
};

int __cdecl f(int a) {
    int count;
    int i;
    int result;
    int* fp;
    int (*fn)(const char*, int*);

    count = sub_005bd580(a);
    sub_005bde00(a, -10002, (int)"tostring");
    fn = (int (*)(const char*, int*))DAT_0077e908;
    i = 1;
    if (count >= i) {
        do {
            sub_005bd740(a, -1);
            sub_005bd740(a, i);
            sub_005be290(a, 1, 1);
            result = sub_005bd980(a, -1, 0);
            if (result == 0) {
                sub_005be8e0(a, (int)"'tostring' must return a string to 'print'");
                return 0;
            }
            if (i > 1) {
                fp = (int*)(__iob_func() + 0x20);
                fn(" ", fp);
            }
            fp = (int*)(__iob_func() + 0x20);
            fn((const char*)result, fp);
            sub_005bd590(a, -2);
            i++;
        } while (i <= count);
    }
    fp = (int*)(__iob_func() + 0x20);
    fn("\n", fp);
    return 0;
}

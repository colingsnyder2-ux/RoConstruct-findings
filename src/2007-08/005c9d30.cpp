// from server: 57% by colin
extern "C" int __cdecl toupper(int);

extern "C" int __cdecl sub_5bf350(int, int, void*);
extern "C" void __cdecl sub_5bed40(int, void*);
extern "C" void __cdecl sub_5bebd0(void*);
extern "C" void __cdecl sub_5bec70(void*);

struct S {
    int f(int a);
};

int S::f(int a) {
    char buf[0x200];
    int count;
    int result;
    int i;
    char *p;
    int (*fn)(int);

    sub_5bf350(a, 1, &count);
    sub_5bed40(a, &result);
    i = 0;
    if (count > 0) {
        fn = toupper;
        p = buf;
        do {
            if (p >= buf + 0x200) {
                sub_5bebd0(&p);
            }
            *p = (char)fn((unsigned char)result);
            p++;
            i++;
        } while (i < count);
    }
    sub_5bec70(&result);
    return 1;
}

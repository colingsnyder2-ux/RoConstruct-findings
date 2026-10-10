// from server: 54% by colin
// roc 2007-08 005c9c90  unit: seg_005c0000  size: 148 bytes

extern "C" int __cdecl sub_5bf350(int, int, void*);
extern "C" int __cdecl sub_5bed40(void*, int);
extern "C" int __cdecl sub_5bebd0(void*);
extern "C" int __cdecl sub_5bec70(void*);
extern "C" int (__cdecl *g_tolower)(int);

struct S {
    int f(int a);
};

int S::f(int a)
{
    char buf[0x200];
    int count;
    int i;
    int result;

    result = sub_5bf350(a, 1, &count);
    sub_5bed40(buf, a);
    i = 0;
    if ((unsigned int)count > 0) {
        do {
            if ((unsigned int)count >= (unsigned int)(buf + 0x200)) {
                sub_5bebd0(&count);
            }
            buf[i] = (char)g_tolower((unsigned char)*(char*)(result + i));
            i++;
        } while ((unsigned int)i < (unsigned int)count);
    }
    sub_5bec70(buf);
    return 1;
}

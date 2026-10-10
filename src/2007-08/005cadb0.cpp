// from server: 50% by colin
extern "C" int __cdecl isdigit(int);

struct S {
    char pad0[8];
    int field8;
    char pad12[0x200];
    char *field20c;

    void f(char *arg);
};

extern "C" int __cdecl sub_5bd980(int, int, char **);
extern "C" void __cdecl sub_5bebd0(void *);
extern "C" void __cdecl sub_5bec10(void *, const char *, int);
extern "C" void __cdecl sub_5becb0(void *);
extern "C" void __cdecl sub_5ca970(int, int, int);

void S::f(char *arg)
{
    char *end;
    int count;
    int i;
    char *p;

    count = sub_5bd980(field8, 3, &end);
    i = 0;
    p = end;
    if (count > 0) {
        do {
            if (p[i] != '%') {
                if ((char *)field20c >= (char *)this + 0x20c) {
                    sub_5bebd0(this);
                }
                *(char *)field20c = p[i];
                field20c = (char *)field20c + 1;
            } else {
                int c = (unsigned char)p[i + 1];
                i++;
                if (isdigit(c) == 0) {
                    if ((char *)field20c >= (char *)this + 0x20c) {
                        sub_5bebd0(this);
                    }
                    *(char *)field20c = p[i];
                    field20c = (char *)field20c + 1;
                } else {
                    if (p[i] == '0') {
                        sub_5bec10(this, arg, (int)(end - arg));
                    } else {
                        int n = (signed char)p[i] - 0x31;
                        sub_5ca970((int)arg, (int)end, n);
                        sub_5becb0(this);
                    }
                }
            }
            i++;
        } while (i < count);
    }
}

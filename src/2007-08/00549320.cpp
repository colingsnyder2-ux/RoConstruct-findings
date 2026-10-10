// from server: 25% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct S {
    char pad0[0x20];
    char m20[4];
    char pad24[0x1c];
    int f(char* out, int a, int b, int c, int d, int e, int f2, int g, int h, int i);
};

extern "C" void* __stdcall sub_77e69c(void*, void*);
extern "C" void __stdcall sub_77e6ac(void*);
extern "C" void __stdcall sub_77e658(void*, const char*, int, int, int);
extern "C" void __stdcall sub_77e67c(void*, int, int);
extern "C" void __stdcall sub_77e680(void*, void*);
extern "C" void __stdcall sub_77e684(void*);
extern "C" void __stdcall sub_77e65c(void*);

void sub_725750(void*);
void sub_725770(void*);
void* sub_5488e0(void*);
void sub_53d750(void*, void*);
void sub_547370(void*, void*, int);
void* sub_62fef6(int);

int S::f(char* out, int a, int b, int c, int d, int e, int f2, int g, int h, int i)
{
    char buf[0x100];
    char buf2[0x20];
    void* p;
    void* q;
    int* r;
    int* s;
    int t;

    t = 0;
    sub_77e69c(buf2, &buf[0x100]);
    *(int*)(buf2 + 0x1c) = *(int*)(buf + 0x100);
    p = sub_5488e0(this);
    if (p == 0) {
        r = (int*)out;
        r[0] = 0;
        r[1] = 0;
        sub_77e6ac(buf);
        return (int)r;
    }
    sub_725750(m20);
    if (*(int*)p == 0) {
        char* str;
        str = *(char**)((char*)p + 8);
        if (*(int*)(str + 0x18) < 0x10)
            str = str + 4;
        else
            str = *(char**)(str + 4);
        sub_77e658(buf, str, 0x21, 0x40, 1);
        sub_77e67c(buf2, 2, 1);
        sub_547370(buf, buf2, 0x1000);
        q = sub_62fef6(0x1c);
        if (q != 0) {
            sub_77e680(buf2, q);
        } else {
            q = 0;
        }
        sub_53d750(p, q);
        sub_77e684(buf2);
        sub_77e65c(buf);
    }
    s = (int*)out;
    s[0] = *(int*)p;
    s[1] = *(int*)((char*)p + 4);
    if (s[1] != 0) {
        _InterlockedExchangeAdd((volatile long*)(s[1] + 4), 1);
    }
    sub_725770(m20);
    sub_77e6ac(buf);
    return (int)s;
}

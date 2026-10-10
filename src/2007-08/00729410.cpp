// from server: 43% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Inner {
    int a;
    int b;
    int c;
};

struct Outer {
    int x;
    int y;
    int z;
};

struct Conn {
    char pad[0x18];
    int end;
};

struct Iter {
    int first;
    int second;
};

struct Self {
    int f(int* arg1, Iter* arg2);
};

extern "C" int __cdecl sub_729030(int* p);
extern "C" char __cdecl sub_728DC0(Conn* c, int* a, int* b);

int Self::f(int* arg1, Iter* arg2)
{
    int* p = (int*)sub_729030(arg1);
    int* esi = p;
    if (this == 0)
        _invalid_parameter_noinfo();
    if (esi == (int*)((char*)this + 0x18)) {
        int* r = (int*)((char*)this + 0x18);
        int* s = (int*)this;
        arg2->first = (int)r;
        arg2->second = (int)s;
        return 0;
    }
    Inner* in = (Inner*)esi;
    Inner tmp;
    tmp.a = in->a;
    tmp.b = in->b;
    tmp.c = in->c;
    if (tmp.c)
        _InterlockedExchangeAdd((volatile long*)(tmp.c + 4), 1);
    Outer* ou = (Outer*)arg1;
    Outer tmp2;
    tmp2.x = ou->x;
    tmp2.y = ou->y;
    tmp2.z = ou->z;
    if (tmp2.z)
        _InterlockedExchangeAdd((volatile long*)(tmp2.z + 4), 1);
    char ok = sub_728DC0((Conn*)this, (int*)&tmp, (int*)&tmp2);
    if (ok) {
        int* r = (int*)((char*)this + 0x18);
        int* s = (int*)this;
        arg2->first = (int)r;
        arg2->second = (int)s;
        return 0;
    }
    arg2->first = (int)esi;
    arg2->second = (int)this;
    return 0;
}

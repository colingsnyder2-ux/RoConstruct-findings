// from server: 46% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Result {
    unsigned int first;
    unsigned int second;
};

struct Source {
    void copy(Result* output);
};

struct Ref {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
    void attach(void*);
};

struct Str {
    void assign(const Str&);
    const char* c_str() const;
    Str(const char*);
    Str();
    ~Str();
};

struct Inner {
    unsigned char pad[0x94];
    Source* source;
    Result* f(Result* output);
};

struct Doc {
    int f(int, int, int, int, int, int, int);
};

extern "C" {
    void* __stdcall sub_802464();
    void __stdcall sub_802458(void*);
    void __stdcall sub_802468(void*);
    void __stdcall sub_80240c(void*, void*);
    void __stdcall sub_803350(void*, void*);
    void __stdcall sub_803ee0(void*);
    void __stdcall sub_803f04(void*);
    void __stdcall sub_803f14(void*);
}

void __cdecl sub_6a1520(unsigned int);
void __cdecl sub_6a13b8(void*, const char*);
int __cdecl sub_6a13b2(void*, char*, int);
void __cdecl sub_6a13ac(void*);
bool __cdecl sub_55bd10(void*);
void __cdecl sub_4377c0(void*, void*);
void __cdecl sub_561e30(void*, void*);
void __cdecl sub_41eea0(void*);
int __cdecl sub_454ac0(Doc*);

int Doc::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    char buf[0x1040];
    void* h;
    Str s1;
    Str s2;
    int result;
    bool ok;
    Ref* r;
    Inner* inner;
    Result res;
    int len;

    sub_6a1520(0x1040);

    h = sub_802464();
    sub_802458(&s1);

    ok = sub_55bd10(&s1);
    sub_802468(&s1);

    if (ok) {
        h = sub_802464();
        sub_4377c0(&s2, h);

        inner = (Inner*)this;
        Result* pr = inner->f(&res);
        r = (Ref*)pr->first;
        if (r != 0) {
            sub_41eea0(r);
        } else {
            r = 0;
        }

        sub_561e30(r, &res);
        sub_80240c(&s2, r);
        sub_802468(&s2);

        if (r != 0) {
            if (_InterlockedExchangeAdd(&r->strong, -1) == 1) {
                r->destroy();
                if (_InterlockedExchangeAdd(&r->weak, -1) == 1) {
                    r->destroy();
                }
            }
        }
    }

    sub_803f04(&s1);
    sub_802464();
    sub_6a13b8(&s2, "");
    len = 0;
    do {
        len = sub_6a13b2(&s2, buf, 0xfff);
        buf[len] = 0;
        sub_803350(&s1, buf);
    } while (len != 0);
    sub_6a13ac(&s2);
    sub_803ee0(&s1);

    sub_802458(&s2);
    result = sub_454ac0(this);
    sub_803f14(&s1);
    sub_802468(&s1);

    return result;
}

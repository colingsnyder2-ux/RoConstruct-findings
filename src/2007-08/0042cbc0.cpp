// from server: 29% by colin
struct S {
    char pad0[0x30];
    int field30;
};

struct Inner {
    char pad0[8];
    void* p8;
};

struct Outer {
    Inner* p0;
};

struct Str {
    char pad[0x1c];
};

extern "C" {
    void __stdcall sub_77e69c(void*);
    void __stdcall sub_77e6ac(void*);
}

void __cdecl sub_7273f0(void*, void*);
void __cdecl sub_729380(void*, void*);
void __cdecl sub_729350(void*, void*);
void __cdecl sub_7272d0(void*);
void __cdecl sub_42a550(void*);
void __cdecl sub_5f1980(void*);
void __cdecl sub_42ca90(void*, void*);
void __cdecl sub_630a1e(void);

struct CLuaHtmlView_Binder {
    int method(int, int, int, int, int, int, int, int);
};

int CLuaHtmlView_Binder::method(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    char buf[0x34];
    void* p;
    Outer* o;
    Inner* in;
    int* pi;
    int result;
    char flag;

    sub_7273f0(buf, this);
    sub_77e69c(buf + 0x1c);
    sub_42a550(buf + 0x10);
    flag = 0;

    o = *(Outer**)this;
    in = o->p0;
    pi = (int*)((char*)in + 0x30);
    sub_729380((char*)in + 8, buf + 0x30);
    sub_729380((char*)in + 8, buf + 0x30);
    sub_5f1980(buf + 0x30);
    sub_729380((char*)in + 8, buf + 0x30);
    sub_729350((char*)in + 8, buf + 0x30);
    sub_5f1980(buf + 0x30);
    result = *(int*)(buf + 0x30);
    sub_42ca90((char*)pi + 4, (void*)result);

    if (flag) {
        flag = 0;
    }
    sub_77e6ac(buf + 0x28);
    sub_7272d0(buf + 0x20);
    sub_77e6ac(buf + 0x5c);
    return result;
}

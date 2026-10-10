// from server: 10% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" {
    void __stdcall sub_77e698();
    void __stdcall sub_77e69c();
    void __stdcall sub_77e6ac();
}

struct Str {
    void* pad0;
    void* pad1;
    void* pad2;
    void* pad3;
    void* pad4;
    void* pad5;
    void* pad6;
    void* pad7;
};

struct Obj {
    void* vptr;
    char pad[0x280];
    char field284[0x100];
};

struct S {
    char pad0[4];
    Obj* field4;
    void func(const Str& a, const Str& b, const Str& c, const Str& d, const Str& e, const Str& f, const Str& g, const Str& h, const Str& i, const Str& j, const Str& k, const Str& l);
};

void __stdcall str_ctor_pbd(void* self, const char* s);
void __stdcall str_ctor_copy(void* self, const void* other);
void __stdcall str_dtor(void* self);

void __cdecl sub_5d6710(void* out, void* a, void* b, void* c);
void __cdecl sub_5d67e0(void* out, const char* s, int n);
void __cdecl sub_5d56f0(void* p);
void __cdecl sub_564b50();

void S::func(const Str& a, const Str& b, const Str& c, const Str& d, const Str& e, const Str& f, const Str& g, const Str& h, const Str& i, const Str& j, const Str& k, const Str& l)
{
    char buf[0x40];
    void* saved;
    void* p;

    sub_77e698();
    sub_77e69c();
    sub_564b50();
    sub_5d6710(buf, 0, 0, 0);
    sub_5d56f0(buf);
    sub_77e6ac();
    sub_5d67e0(buf, 0, 1);
    sub_77e698();
    sub_77e69c();
    sub_564b50();
    sub_5d6710(buf, 0, 0, 0);
    sub_5d56f0(buf);
    sub_77e6ac();
    sub_77e698();
    sub_77e69c();
    sub_564b50();
    sub_5d6710(buf, 0, 0, 0);
    sub_5d56f0(buf);
    sub_77e6ac();
    sub_5d67e0(buf, 0, 1);
    sub_77e698();
    sub_77e69c();
    sub_564b50();
    sub_5d6710(buf, 0, 0, 0);
    sub_5d56f0(buf);
    sub_77e6ac();
    sub_77e698();
    sub_77e69c();
    sub_564b50();
    sub_5d6710(buf, 0, 0, 0);
    sub_5d56f0(buf);
    sub_77e6ac();
    sub_5d67e0(buf, 0, 0);
    sub_5d56f0(buf);
    sub_5d56f0(buf);
    sub_5d56f0(buf);
    sub_5d56f0(buf);
    sub_5d56f0(buf);
    sub_5d56f0(buf);
    sub_5d56f0(buf);
    sub_5d56f0(buf);
    sub_5d56f0(buf);
    sub_5d56f0(buf);
    sub_5d56f0(buf);
    sub_5d56f0(buf);
    (void)saved;
    (void)p;
}

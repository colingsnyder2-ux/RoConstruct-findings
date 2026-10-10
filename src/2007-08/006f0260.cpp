// from server: 40% by colin
extern unsigned char G_security_cookie;
extern void* G_something;

struct Inner1 {
    void ctor(void*);
    void dtor();
};

struct Inner2 {
    void ctor(void*);
};

struct Inner3 {
    void ctor(void*, void*);
};

struct Outer {
    void method();
};

extern "C" void __cdecl func_00630490();
extern "C" void __cdecl func_0063048a();
extern "C" void __cdecl func_006308b0();
extern "C" void __cdecl func_00630a1e();
extern "C" void* __cdecl func_00668f70();
extern "C" void* __cdecl func_00668770(void*, int);
extern "C" void __cdecl func_00680000();
extern "C" void* __cdecl func_006effe0();

void Outer::method()
{
    Inner1 i1;
    Inner2 i2;
    Inner3 i3;
    void* p;

    i1.ctor(this);
    i2.ctor(this);
    func_00680000();
    p = func_006effe0();
    if (*(int*)((char*)p + 0x20) == 0) {
        void* q = func_00668f70();
        p = func_00668770(q, 0x10);
    }
    i3.ctor(&i2, p);
    i1.dtor();
}

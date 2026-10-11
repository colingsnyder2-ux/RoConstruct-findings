// from server: 43% by atomic.potato
extern char G;
char* func_008f19e0();

struct Inner {
    char pad0[4];
    int field4;
    char pad8[4];
    int fieldC;
};

struct Obj {
    char pad0[0x100];
    Inner* inner100;
};

struct Sub {
    char pad0[0x1b8];
    void* (__thiscall *vtbl1b8)(void*);
};

struct S {
    char pad0[0x180];
    Obj* obj180;
    int method(int, int, int);
};

extern "C" int __stdcall func_007f3de8(char*);
extern "C" void __stdcall func_0084b2d0(void*, void*);
extern "C" void __stdcall func_008426c0(void*, int, int, int);

int S::method(int a, int b, int c)
{
    func_008426c0(this, a, b, c);
    char* p = func_008f19e0();
    if (func_007f3de8(p))
    {
        Inner* in = obj180->inner100;
        int sz;
        func_0084b2d0(in, &sz);
        sz = in->fieldC - in->field4;
        void* vt = *(void**)in;
        void* fn = *(void**)((char*)vt + 0x1b8);
        char tmp1[16];
        ((void (__thiscall*)(void*, void*))fn)(in, tmp1);
        sz -= *(int*)(tmp1 + 0xc);
        void* vt2 = *(void**)in;
        void* fn2 = *(void**)((char*)vt2 + 0x1b8);
        char tmp2[16];
        ((void (__thiscall*)(void*, void*))fn2)(in, tmp2);
        sz -= *(int*)(tmp2 + 4);
        sz -= 2;
        if (sz > *(int*)((char*)&a + 4))
            *(int*)((char*)&a + 4) = sz;
    }
    return a;
}

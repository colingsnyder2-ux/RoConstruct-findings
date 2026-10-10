// from server: 42% by colin
extern "C" {
int __stdcall EqualRect(const void*, const void*);
}

struct Inner {
    void* p;
    void* q;
};

struct Sub {
    char pad0[0x2c];
    void* (__thiscall *vtbl)(Sub*);
    char pad30[0x30];
};

struct Obj {
    char pad0[0xc0];
    int rect[4];
    char padD0[0x98];
    Sub sub;
    char pad1A0[0x70];
    int flag;

    void func(int a, int b, int c, int d);
};

struct Helper {
    char pad0[4];
    void* ptr;
};

extern "C" void __cdecl sub_630946(void*);
extern "C" void __cdecl sub_630940(void*);

void Obj::func(int a, int b, int c, int d)
{
    int local[4];
    Helper h;
    int tmp;

    if (EqualRect(&rect, &local) == 0 || flag == 0) {
        rect[0] = local[0];
        rect[1] = local[1];
        rect[2] = local[2];
        rect[3] = local[3];
        flag = 0;
        void* r = sub.vtbl(&sub);
        if (r != 0) {
            sub_630946(&h);
            tmp = 0;
            ((void (__thiscall*)(void*, int*, Sub*))((*(void***)r)[0x18]))(r, local, &sub);
            sub_630940(&h);
        }
    }
}

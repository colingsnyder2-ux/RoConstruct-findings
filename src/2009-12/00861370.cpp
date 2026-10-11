// from server: 44% by atomic.potato
struct Inner {
    void* p;
};

struct Outer {
    char pad[0x118];
    Inner inner;
};

extern "C" void __stdcall sub_7f3b30(void*);
extern "C" int __stdcall sub_7f4052(void*, int, int);
extern "C" void __stdcall sub_7f3b24(void*, int);

struct S {
    int f(int a1, int a2, int a3);
};

int S::f(int a1, int a2, int a3)
{
    Inner local;
    sub_7f3b30(*(void**)((char*)this - 0x118));
    int r = sub_7f4052((char*)this - 0x134, a2, a3);
    if (local.p) {
        *(int*)((char*)local.p + 4) = *(int*)&local;
    }
    if (*(int*)&local) {
        sub_7f3b24(*(void**)&local, 0);
    }
    return r;
}

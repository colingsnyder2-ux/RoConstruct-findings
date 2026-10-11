// from server: 44% by atomic.potato
struct Inner {
    char pad[0x10];
};

struct Outer {
    char pad0[4];
    int f(int a, int b, int c, int d, int e);
};

extern "C" void __stdcall sub_70e280();
extern "C" void __fastcall sub_70a230(Inner* self, int unused, int a, int b, int c, int d);

int Outer::f(int a, int b, int c, int d, int e)
{
    int local = 0;
    sub_70e280();
    Inner tmp;
    *(int*)((char*)&tmp + 0) = b;
    *(int*)((char*)&tmp + 4) = c;
    *(int*)((char*)&tmp + 8) = d;
    *(int*)((char*)&tmp + 12) = e;
    sub_70a230(&tmp, 0, a, b, c, d);
    return a;
}

// from server: 83% by colin
struct Sub {
    char pad[0x228];
    int field228;
};

struct Inner {
    char pad[0x18c];
    int field18c;
};

struct S {
    char pad[0xc];
    Sub* ptr;
    bool f();
};

bool S::f() {
    Sub* p = ptr;
    int (__stdcall *fn)(int) = (int (__stdcall *)(int))(*(int*)((char*)p + 0x228));
    int r = fn(*(int*)((char*)p + 0x228));
    return ((Inner*)r)->field18c == 1;
}

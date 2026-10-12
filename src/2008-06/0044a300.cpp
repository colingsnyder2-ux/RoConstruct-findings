// from server: 74% by colin
struct Inner {
    void* vtable;
};

struct Mid {
    char pad[0x24];
    Inner* inner;
};

struct Outer {
    char pad[0x58];
    Mid* mid;
};

struct Target {
    void* method0();
    void method1(int, int);
};

void* Target::method0()
{
    Mid* m = *(Mid**)((char*)this + 0x58);
    Inner* in = m->inner;
    void** vt = *(void***)in;
    void* (__thiscall *fn)(void*, int, int) = *(void* (__thiscall **)(void*, int, int))((char*)vt + 0x88);
    void* r = fn(in, 0, 1);
    return ((Target*)r)->method0();
}

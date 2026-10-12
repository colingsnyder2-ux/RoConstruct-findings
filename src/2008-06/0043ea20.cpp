// from server: 44% by colin
struct S_func_00710e30 {
    char pad0[140];
    int m_x;
    int f();
};

struct S_func_00710dd0 {
    char pad0[0x8c];
    int m_x;
    char pad1[0xd4 - 0x90];
    void* m_p;
    void f(int);
};

struct S_func_0043cfa0 {
    void f(int, int);
};

struct S_func_0043ea20 {
    char pad0[0xc4];
    void* m_p;
    void f(int, int);
};

void S_func_0043cfa0::f(int, int) {}

void S_func_00710dd0::f(int) {}

int S_func_00710e30::f() { return m_x; }

void S_func_0043ea20::f(int a, int b)
{
    S_func_0043cfa0* p = (S_func_0043cfa0*)this;
    p->f(a, b);
    *(int*)this = 0x815214;
    *(int*)((char*)this + 0x20) = 0x8151b4;
    *(int*)((char*)this + 0x10c) = 0x8151ac;
    S_func_00710e30* q = (S_func_00710e30*)((char*)this + 0x8c);
    int v = q->f();
    v |= 4;
    ((S_func_00710dd0*)this)->f(v);
    void* r = *(void**)((char*)this + 0xc4);
    void** vt = *(void***)r;
    void (*fn)(void*, int, int, const char*) = (void (*)(void*, int, int, const char*))vt[0x58/4];
    fn(r, 0, 0xe101, (const char*)0x815034);
    r = *(void**)((char*)this + 0xc4);
    vt = *(void***)r;
    fn = (void (*)(void*, int, int, const char*))vt[0x58/4];
    fn(r, 1, 0xe120, (const char*)0x81502c);
}

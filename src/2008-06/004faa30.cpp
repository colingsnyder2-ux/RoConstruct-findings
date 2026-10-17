// from server: 40% by colin
extern "C" int __stdcall InterlockedDecrement(int*);

struct Handle {
    void* value;
    void assign(void* p);
};

struct S {
    unsigned long table;
    float x, y, z;
    unsigned long flags;
    Handle handle;
    float a, b, c;
};

struct TorsoBuilder {
    void func(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m);
};

void TorsoBuilder::func(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m)
{
    S s;
    s.table = 0x827100;
    s.a = *(float*)&m;
    s.handle.value = 0;
    s.handle.assign(0);
    s.table = 0x827100;
    s.a = *(float*)&m;
    if (s.handle.value) {
        if (InterlockedDecrement((int*)((char*)s.handle.value + 4)) != 0) {
            s.handle.assign(0);
            if (s.handle.value) {
                (*(void(__thiscall**)(void*, int))s.handle.value)(s.handle.value, 1);
            }
        }
    }
}

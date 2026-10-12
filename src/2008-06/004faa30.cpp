// from server: 25% by colin
// roc 2008-06 004faa30  unit: RBX::ViewNew::TorsoBuilder  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004faa30

extern "C" int __stdcall InterlockedDecrement(int*);
extern "C" void __stdcall sub_4F6E30();
extern "C" void __stdcall sub_4FA190();

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
    sub_4FA190();
    if (s.handle.value) {
        if (InterlockedDecrement((int*)((char*)s.handle.value + 4)) == 0) {
            sub_4F6E30();
            if (s.handle.value) {
                (*(void(__thiscall**)(void*, int))s.handle.value)(s.handle.value, 1);
            }
        }
    }
}

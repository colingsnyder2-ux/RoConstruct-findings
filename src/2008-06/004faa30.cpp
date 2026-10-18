// from server: 47% by colin
extern "C" long __stdcall InterlockedDecrement(long*);

struct Handle {
    void* value;
    void assign(void* p);
};

struct Inner {
    unsigned long table;
    float x, y, z;
    unsigned long flags;
    Handle handle;
    float a, b, c;
    float d;
    Inner();
    ~Inner();
};

struct TorsoBuilder {
    void buildSomething(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m);
    void helper();
};

void TorsoBuilder::buildSomething(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m)
{
    Inner inner;
    inner.d = *(float*)&m;
    helper();
    if (inner.handle.value)
    {
        if (InterlockedDecrement((long*)inner.handle.value + 1) == 0)
        {
            inner.handle.assign(0);
            if (inner.handle.value)
            {
                void** vtbl = *(void***)inner.handle.value;
                ((void (__thiscall*)(void*, int))vtbl[0])(inner.handle.value, 1);
            }
        }
    }
}

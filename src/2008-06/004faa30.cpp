// from server: 49% by colin
// roc 2008-06 004faa30  unit: RBX::ViewNew::TorsoBuilder  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004faa30

extern "C" long __stdcall InterlockedDecrement(long* p);

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
    void init();
    void construct(Inner* inner, float f, short a, short b, int c);
};

void TorsoBuilder::construct(Inner* inner, float f, short a, short b, int c) {
    Inner tmp;
    tmp.x = (float)a;
    tmp.y = (float)b;
    tmp.d = f;
    tmp.table = 0x827100;
    this->init();
    if (tmp.handle.value) {
        if (InterlockedDecrement((long*)((char*)tmp.handle.value + 4)) == 0) {
            tmp.handle.assign(0);
            if (tmp.handle.value) {
                void** vt = *(void***)tmp.handle.value;
                ((void (__thiscall*)(void*, int))vt[0])(tmp.handle.value, 1);
            }
        }
    }
}

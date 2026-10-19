// from server: 53% by colin
// from server: 52% by colin
// roc 2008-06 004faa30  unit: RBX::ViewNew::TorsoBuilder  size: 178 bytes

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
    Inner(const Inner* other);
    __declspec(dllimport) ~Inner() throw();
};

struct TorsoBuilder {
    void init();
    void construct(Inner* out, const Inner* src, float w, short a, short b, int c);
};

void TorsoBuilder::construct(Inner* out, const Inner* src, float w, short a, short b, int c)
{
    Inner tmp(src);
    tmp.table = 0x827100;
    tmp.c = w;
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

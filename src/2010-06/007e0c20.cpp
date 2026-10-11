// from server: 57% by atomic.potato
struct Inner {
    int pad0;
    int pad4;
    int count;
    int* data;
};

struct Outer {
    char pad0[0x20];
    Inner inner;
    int count;
    int Find(int id);
};

extern "C" void __stdcall sub_7a7f1c();
extern "C" void __stdcall sub_7a7c4c();
extern "C" void __stdcall sub_7b8a40(Inner* self, int idx, int flag);

int Outer::Find(int id)
{
    int n = count;
    int i = 0;
    if (n > 0) {
        do {
            if (i < 0 || i >= inner.count)
                sub_7a7c4c();
            if (inner.data[i] == id) {
                sub_7a7f1c();
                sub_7b8a40(&inner, i, 1);
                void** vt = *(void***)this;
                void (__stdcall *fn)(Outer*, int) = (void (__stdcall *)(Outer*, int))vt[0x68/4];
                fn(this, i);
                return i;
            }
            ++i;
        } while (i < n);
    }
    return -1;
}

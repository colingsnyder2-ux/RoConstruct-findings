// from server: 78% by atomic.potato
extern "C" long __stdcall InterlockedDecrement(long volatile *);

struct Inner {
    void Release();
};

struct Holder {
    Inner *ptr;
};

struct Outer {
    char pad[8];
    Holder *h;
    void f();
};

void Outer::f() {
    Holder *p = h;
    Inner *q = p->ptr;
    if (q) {
        if (InterlockedDecrement((long *)((char *)q + 4)) == 0) {
            q->Release();
            Inner *r = p->ptr;
            if (r) {
                void (__thiscall *fn)(Inner *, int) = *(void (__thiscall **)(Inner *, int))*(void **)r;
                fn(r, 1);
            }
        }
        p->ptr = 0;
    }
}

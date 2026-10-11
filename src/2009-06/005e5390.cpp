// from server: 32% by atomic.potato
struct Inner {
    void init(int);
};

struct Outer {
    Inner* p;
    Outer* ctor(int);
};

extern "C" void* __cdecl operator_new(unsigned int);

Outer* Outer::ctor(int a) {
    Inner* m = (Inner*)operator_new(0x34);
    if (m) {
        m->init(a);
    } else {
        m = 0;
    }
    this->p = m;
    return this;
}

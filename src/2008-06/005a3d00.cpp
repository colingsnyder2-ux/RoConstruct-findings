// from server: 35% by atomic.potato
struct Inner {
    void* f0;
    void* f1;
    void* f2;
    void* f3;
    void* f4;
    void* f5;
    void* f6;
    void* f7;
    virtual void vf0(void*, void*);
};

extern "C" void* __fastcall sub_5a3cb0(void*);

struct S {
    char pad[0x1c];
    Inner* p;
    void method(void*, void*);
};

void S::method(void* a, void* b) {
    void* r;
    if (a) {
        r = sub_5a3cb0(a);
    } else {
        r = 0;
    }
    Inner* q = this->p;
    void* tmp = r;
    q->vf0(b, tmp);
}

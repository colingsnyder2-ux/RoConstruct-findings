// from server: 13% by colin
extern "C" void* __cdecl malloc(unsigned int);

struct Inner {
    void ctor();
};

struct Outer {
    void init(void* a, int b);
};

void Inner::ctor() {
    char pad[0x1b0];
    (void)pad;
}

void Outer::init(void* a, int b) {
    Inner* p = (Inner*)malloc(0x1b0);
    if (p) {
        p->ctor();
    } else {
        p = 0;
    }
    (void)a;
    (void)b;
}

// from server: 36% by colin
// roc 2007-08 005f1f10  size: 96 bytes

extern "C" void* __cdecl func_62fef6(unsigned int size);

struct Inner {
    void init(void* p);
};

struct Outer {
    char pad[4];
    Inner inner;
    void* create();
};

void Inner::init(void* p) {
    func_62fef6(0);
}

void* Outer::create() {
    void* mem = func_62fef6(0x10);
    if (mem) {
        inner.init(&inner);
        return mem;
    }
    return 0;
}

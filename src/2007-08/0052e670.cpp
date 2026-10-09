// from server: 43% by colin
// roc 2007-08 0052e670  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052e670

extern "C" void* __cdecl sub_62fef6(unsigned int size);

struct Inner {
    void construct(void* arg);
};

struct Outer {
    Inner* field0;
    Outer* create(void* arg);
};

void Inner::construct(void* arg) {
    // placeholder; real body at 0x52e590
}

Outer* Outer::create(void* arg) {
    Inner* p = (Inner*)sub_62fef6(0x10);
    if (p == 0) {
        p->construct(arg);
    } else {
        p = 0;
    }
    this->field0 = p;
    return this;
}

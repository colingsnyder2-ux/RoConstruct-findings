// from server: 34% by colin
struct Primary {
    virtual void primary();
};

struct Secondary {
    virtual void secondary();
};

struct Base : Primary, Secondary {
    int fields[5];
    Base(int);
    ~Base();
};

struct Active {
    char pad[0x204];
    Base* p;
};

extern "C" void* __cdecl operator_new(unsigned int);

struct Verb {
    char pad[0xc];
    Active* active;
    void* doIt();
};

void* Verb::doIt() {
    void* mem = operator_new(0x74);
    if (mem) {
        Base* b = (Base*)mem;
        b->Base::Base((int)active->p);
    }
    return mem;
}

// from server: 95% by king_originala
struct Module {
    virtual void reserved() = 0;
    virtual void lock() = 0;
};

extern Module* module;
extern unsigned char table0[];
extern unsigned char baseTable16[];
extern unsigned char table8[];
extern unsigned char table12[];
extern unsigned char table16[];
extern unsigned char table28[];

struct Base {
    unsigned long v0;
    unsigned long references;
    unsigned long v8;
    unsigned long v12;
    volatile unsigned long v16;
    unsigned long first;
    unsigned long last;
    unsigned long v28;
    volatile unsigned long owner;
    unsigned short flags;

    Base(unsigned long value);
    ~Base();
};

struct S : Base {
    S(unsigned long value);
};

inline Base::Base(unsigned long value)
{
    references = 0;
    v0 = (unsigned long)table0;
    last = 0;
    first = 0;
    v16 = (unsigned long)baseTable16;
    flags = 0;
    v8 = (unsigned long)table8;
    v12 = (unsigned long)table12;
    v16 = (unsigned long)table16;
    v28 = (unsigned long)table28;
    owner = value;
}

S::S(unsigned long value) : Base(value)
{
    module->lock();
}

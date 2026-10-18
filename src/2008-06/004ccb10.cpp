// from server: 69% by colin
extern unsigned char table[];

struct Pair {
    unsigned short first;
    unsigned short second;
    unsigned int unused;
};

struct Input {
    unsigned int zero;
    Pair pair;
};

struct Base {
    unsigned char storage[0x38];
    Base(Input*, unsigned int*);
};

struct S {
    void* vtable;
    Base base;
    unsigned int value;
    unsigned int field40;
    unsigned int field44;
    unsigned int field48;
    unsigned int field4c;
    unsigned int field50;
    unsigned int field54;
    unsigned char field58;
    unsigned char padding59[3];
    unsigned char field5c;
    unsigned char padding5d[3];
    unsigned int field60;
    unsigned int field64;
    unsigned int field68;
    unsigned char field6c;
    unsigned char padding6d[3];
    unsigned char field70;

    S* initialize(unsigned int, unsigned short, unsigned short);
};

S* S::initialize(unsigned int argument, unsigned short arg2, unsigned short arg3)
{
    Pair pair;
    pair.first = arg2;
    pair.second = arg3;
    pair.unused = 0;

    Input input;
    input.zero = 0;
    input.pair = pair;

    vtable = table;
    base.Base::Base(&input, &argument);

    value = argument;
    field40 = 0;
    field44 = 0;
    field48 = 0;
    field50 = 0;
    field54 = 0;
    field58 = 0;
    field5c = 0;
    field64 = 0;
    field68 = 0;
    field6c = 0;
    field70 = 0;
    return this;
}

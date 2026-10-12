// from server: 66% by king_originala
struct Pair {
    short first;
    short second;
    unsigned int reserved;

    Pair(short a, short b) : first(a), second(b) {}
};

struct Initializer {
    unsigned int first;
    unsigned int second;
    short low;
    short high;

    Initializer(unsigned int a, const Pair& p)
        : first(a), second(p.reserved), low(p.first), high(p.second) {}
};

struct Storage {
    unsigned char data[0x38];
    Storage(const Initializer&, unsigned int*);
};

struct S {
    Storage storage;
    unsigned int value;
    unsigned int field40;
    unsigned int field44;
    unsigned int field48;
    unsigned int reserved4c;
    unsigned int field50;
    unsigned int field54;
    unsigned char field58;
    unsigned char reserved59[3];
    unsigned char field5c;
    unsigned char reserved5d[7];
    unsigned int field64;
    unsigned int field68;
    unsigned char field6c;
    unsigned char reserved6d[3];
    unsigned char field70;

    virtual void v();
    S(unsigned int);
};

S::S(unsigned int n)
    : storage(Initializer(0, Pair((short)n, (short)n)), &n),
      value(n),
      field40(0),
      field44(0),
      field48(0),
      field50(0),
      field54(0),
      field58(0),
      field5c(0),
      field64(0),
      field68(0),
      field6c(0),
      field70(0)
{
}

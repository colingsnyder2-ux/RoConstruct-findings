// from server: 90% by king_originala
struct String;
typedef void (__thiscall *StringConstruct)(String *, const char *);
typedef void (__thiscall *StringDestroy)(String *);
extern StringConstruct stringConstruct;
extern StringDestroy stringDestroy;

struct String {
    unsigned char storage[28];
    String(const char *);
    ~String();
};

inline String::String(const char *text) { stringConstruct(this, text); }
inline String::~String() { stringDestroy(this); }

struct Base {
    unsigned char data[0x1a0];
    Base(int, unsigned long **);
    void initialize();
    ~Base();
    void setName(const String &);
};

inline Base::Base(int complete, unsigned long **table)
{
    if (complete)
        *table = reinterpret_cast<unsigned long *>(0x843de0);
    initialize();
}

struct Vector {
    unsigned long data[4];
    Vector();
    ~Vector();
};

struct Secondary {
    unsigned long value;
    ~Secondary();
};

struct Name {
    unsigned char data[48];
    Name();
};

struct Group {
    unsigned long unused;
    unsigned long first;
    unsigned long second;
    unsigned char flag;
    unsigned char padding[3];
    unsigned char other;
    unsigned char padding2[3];
    ~Group();
};

struct S : Base {
    Vector vector;
    Secondary secondary;
    int first;
    int second;
    int third;
    unsigned long *table;
    unsigned long a;
    unsigned long b;
    Name name;
    unsigned char enabled;
    unsigned char padding[3];
    unsigned long value;
    Group group0;
    Group group1;
    Group group2;
    Group group3;
    Group group4;

    S(int);
    ~S();
};

S::S(int complete)
    : Base(complete, &table), vector(),
      first(-1), second(-1), third(0),
      a((
          *reinterpret_cast<unsigned long *>(data) = 0x841a4c,
          *reinterpret_cast<unsigned long *>(data + 0x10) = 0x841a3c,
          *reinterpret_cast<unsigned long *>(data + 0x14) = 0x841a34,
          *reinterpret_cast<unsigned long *>(data + 0x20) = 0x841a2c,
          *reinterpret_cast<unsigned long *>(data + 0x24) = 0x841a1c,
          *reinterpret_cast<unsigned long *>(data + 0x44) = 0x841a0c,
          *reinterpret_cast<unsigned long *>(data + 0x64) = 0x8419fc,
          *reinterpret_cast<unsigned long *>(data + 0x84) = 0x8419ec,
          *reinterpret_cast<unsigned long *>(data + 0xa4) = 0x8419dc,
          *reinterpret_cast<unsigned long *>(data + 0xc4) = 0x8419cc,
          *reinterpret_cast<unsigned long *>(data + 0x130) = 0x8419c4,
          vector.data[0] = 0x8419bc,
          secondary.value = 0x8419a4,
          *reinterpret_cast<unsigned long *>(
              reinterpret_cast<unsigned char *>(this) + 0x1c0 + table[1]) = 0x84199c,
          *reinterpret_cast<unsigned long *>(
              reinterpret_cast<unsigned char *>(this) + 0x1bc + table[1]) =
                  table[1] - 0xac,
          0)),
      b(0)
{
    enabled = 1;
    value = 0;

    group0.first = 0;
    group0.second = 0;
    group0.flag = 0;
    group0.other = 0;

    group1.first = 0;
    group1.second = 0;
    group1.flag = 0;
    group1.other = 0;

    group2.first = 0;
    group2.second = 0;
    group2.flag = 0;
    group2.other = 0;

    group3.first = 0;
    group3.second = 0;
    group3.flag = 0;
    group3.other = 0;

    group4.first = 0;
    group4.second = 0;
    group4.flag = 0;
    group4.other = 0;

    String text("Tool");
    setName(text);
}

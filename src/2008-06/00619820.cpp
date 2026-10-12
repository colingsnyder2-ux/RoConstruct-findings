// from server: 75% by king_originala
struct String {
    unsigned char storage[28];
    String(const char *);
    ~String();
};

struct Base {
    unsigned char storage[0x268];
    Base(int);
    ~Base();
    void setName(const String &);
};

struct Pair {
    unsigned long first;
    unsigned long second;
    ~Pair();
};

struct S : Base {
    Pair firstPair;
    unsigned char gap[8];
    Pair secondPair;
    unsigned char flag1;
    unsigned char padding1[3];
    unsigned char flag2;
    unsigned char padding2[3];
    unsigned long value;
    unsigned long kind;

    S(int);
};

S::S(int initializeVirtualBase)
    : Base((initializeVirtualBase
                ? (*reinterpret_cast<unsigned long *>(
                       reinterpret_cast<unsigned char *>(this) + 0x1c0) =
                       0x8440d0)
                : 0,
            0)),
      firstPair((
          *reinterpret_cast<unsigned long *>(storage) = 0x843eb4,
          *reinterpret_cast<unsigned long *>(storage + 0x10) = 0x843ea4,
          *reinterpret_cast<unsigned long *>(storage + 0x14) = 0x843e9c,
          *reinterpret_cast<unsigned long *>(storage + 0x20) = 0x843e94,
          *reinterpret_cast<unsigned long *>(storage + 0x24) = 0x843e84,
          *reinterpret_cast<unsigned long *>(storage + 0x44) = 0x843e74,
          *reinterpret_cast<unsigned long *>(storage + 0x64) = 0x843e64,
          *reinterpret_cast<unsigned long *>(storage + 0x84) = 0x843e54,
          *reinterpret_cast<unsigned long *>(storage + 0xa4) = 0x843e44,
          *reinterpret_cast<unsigned long *>(storage + 0xc4) = 0x843e34,
          *reinterpret_cast<unsigned long *>(storage + 0x130) = 0x843e2c,
          *reinterpret_cast<unsigned long *>(storage + 0x1a0) = 0x843e24,
          *reinterpret_cast<unsigned long *>(storage + 0x1b0) = 0x843e0c,
          *reinterpret_cast<unsigned long *>(
              storage + 0x1c0 +
              (*reinterpret_cast<const int **>(storage + 0x1c0))[1]) =
              0x843e04,
          *reinterpret_cast<int *>(
              storage + 0x1bc +
              (*reinterpret_cast<const int **>(storage + 0x1c0))[1]) =
              (*reinterpret_cast<const int **>(storage + 0x1c0))[1] - 0xd4,
          Pair())),
      secondPair(),
      flag1(0),
      flag2(0),
      value(0),
      kind(0xc2)
{
    String name("Flag");
    setName(name);
}

// from server: 67% by king_originala
struct B0 { virtual void v0(); char pad[12]; };
struct B1 { virtual void v1(); };
struct B2 { virtual void v2(); char pad[8]; };
struct B3 { virtual void v3(); };
struct B4 { virtual void v4(); char pad[28]; };
struct B5 { virtual void v5(); char pad[28]; };
struct B6 { virtual void v6(); char pad[28]; };
struct B7 { virtual void v7(); char pad[28]; };
struct B8 { virtual void v8(); char pad[28]; };
struct B9 { virtual void v9(); char pad[104]; };
struct B10 { virtual void v10(); };

struct Base : B0, B1, B2, B3, B4, B5, B6, B7, B8, B9, B10 {
    Base();
    ~Base();
};

struct Empty {};

struct Pair {
    void* object;
    void* control;
    Pair() : object(0), control(0) {}
    ~Pair();
};

struct Container {
    char data[32];
    Container(const Empty&, const Empty&);
    ~Container();
};

struct Collection {
    char data[32];
    Collection(const Empty&, const Empty&);
    ~Collection();
};

struct String;
extern void (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

struct String {
    char data[28];
    String(const char* text) { stringConstruct(this, text); }
    ~String() { stringDestroy(this); }
};

extern float initialValue;
extern double __cdecl currentTime();

struct S : Base {
    Pair pair;
    Container container;
    float first;
    float second;
    float third;
    unsigned int a;
    unsigned int b;
    unsigned int c;
    double time;
    Collection collection1;
    Collection collection2;
    bool enabled;

    S();
    void setName(const String&);

    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
};

S::S()
    : Base(),
      pair(),
      container(Empty(), Empty()),
      first(1.0f),
      second(initialValue),
      third(1.0f),
      a(0),
      b(0),
      c(0),
      time(currentTime()),
      collection1(Empty(), Empty()),
      collection2(Empty(), Empty()),
      enabled(false)
{
    String name("Soundscape");
    setName(name);
}

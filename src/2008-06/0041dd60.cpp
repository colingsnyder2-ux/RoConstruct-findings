// from server: 76% by king_originala
struct String
{
    unsigned char storage[28];
    String(const char*);
    String(const String&);
};

struct Base
{
    Base(String, int);
    virtual void v();
};

struct S : Base
{
    S(int, const char*);
    virtual void v();
};

S::S(int value, const char* text)
    : Base(String(text), value)
{
}

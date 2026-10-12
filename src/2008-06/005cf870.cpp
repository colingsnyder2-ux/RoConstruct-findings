// from server: 96% by king_originala
struct Name;
extern const Name& __cdecl getLocalScope();

typedef void (__thiscall *StringConstructor)(void*);
extern StringConstructor stringConstructor;

struct String
{
    char data[28];
    String() { stringConstructor(this); }
    ~String();
};

struct ChatEnter
{
    String text;
    const Name* scope;
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
    float x;
    float y;

    ChatEnter();
};

ChatEnter::ChatEnter()
    : scope(&getLocalScope()),
      a(0), b(0), c(0), d(0), x(0.0f), y(0.0f)
{
}

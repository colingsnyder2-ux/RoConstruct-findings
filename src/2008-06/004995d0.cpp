// from server: 82% by king_originala
struct Core {
    unsigned char data[12];
    Core(const Core&);
};

struct Argument {
    Core core;
    bool first;
    bool second;
    ~Argument();
};

inline Argument::~Argument()
{
}

struct Result {
    unsigned char data[32];
    Result(const Result&);
    ~Result();
};

inline Result::~Result()
{
}

struct Base1 {};
struct Base2 {};

struct __multiple_inheritance S : Base1, Base2 {
    void f(Argument*);
    void consume(Result);
    void callback();
};

extern unsigned char globalFlag;
extern Result __cdecl build(void (S::*)(), S*, unsigned char, Argument);

void S::f(Argument* argument)
{
    argument->first = true;
    consume(build(&S::callback, this, globalFlag, *argument));
}

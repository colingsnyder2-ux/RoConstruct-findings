// from server: 94% by king_originala
struct Text;
struct Argument;

extern void (__thiscall *destroyText)(Text *);
extern const char *(__thiscall *argumentChars)(Argument *);
extern void (__thiscall *destroyArgument)(Argument *);

struct Text {
    char storage[32];

    Text();
    Text(const char *);
    ~Text() { destroyText(this); }
};

struct Argument {
    void *value;

    __declspec(nothrow) ~Argument() { destroyArgument(this); }
};

struct State {
    char padding[0x34];
    int kind;
};

#define V(n) virtual void v##n();
struct S {
    V(00) V(01) V(02) V(03) V(04) V(05) V(06) V(07)
    V(08) V(09) V(10) V(11) V(12) V(13) V(14) V(15)
    V(16) V(17) V(18) V(19) V(20) V(21) V(22) V(23)
    V(24) V(25) V(26) V(27) V(28) V(29) V(30) V(31)
    V(32) V(33) V(34) V(35) V(36) V(37) V(38) V(39)
    V(40) V(41) V(42) V(43) V(44) V(45) V(46) V(47)
    V(48) V(49) V(50) V(51) V(52) V(53) V(54) V(55)
    V(56) V(57) V(58) V(59) V(60) V(61)
    virtual void reset();

    char padding[0xC0];
    State *state;

    void assign(const Text &);
    void f(Argument);
};
#undef V

void S::f(Argument argument)
{
    switch (state->kind) {
    case 0:
        reset();
        break;
    default:
        assign(Text(argumentChars(&argument)));
        break;
    case 1:
        assign(Text());
        break;
    }
}

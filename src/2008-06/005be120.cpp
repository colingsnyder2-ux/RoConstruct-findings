// from server: 81% by king_originala
struct String;

struct Ios {
    void *vtable;
    int reserved;
    int state;
    int reserved2;
    int flags;
    int precision;
};

struct Input {
    int *vbtable;
    int reserved;

    Ios *ios();
    operator void *();
    Input &unsetf(int);
    int setprecision(int);
};

__forceinline Ios *Input::ios()
{
    return reinterpret_cast<Ios *>(
        reinterpret_cast<char *>(this) + vbtable[1]);
}

__forceinline Input::operator void *()
{
    Ios *p = ios();
    signed char failed = static_cast<signed char>(p->state & 6);
    unsigned long mask = ~static_cast<unsigned long>(-(failed != 0));
    return reinterpret_cast<void *>(reinterpret_cast<unsigned long>(p) & mask);
}

__forceinline Input &Input::unsetf(int mask)
{
    ios()->flags &= ~mask;
    return *reinterpret_cast<Input *>(ios());
}

__forceinline int Input::setprecision(int value)
{
    Ios *p = ios();
    int old = p->precision;
    p->precision = value;
    return old;
}

struct Output {
    int *vbtable;
    int reserved;

    Ios *ios();
    signed char fail();
};

__forceinline Ios *Output::ios()
{
    return reinterpret_cast<Ios *>(
        reinterpret_cast<char *>(this) + vbtable[1]);
}

__forceinline signed char Output::fail()
{
    return static_cast<signed char>(ios()->state & 6);
}

struct Stream;

extern void (__thiscall *stream_construct)(Stream *, int, int);
extern void (__thiscall *stream_destroy)(Stream *);
extern Output &(__cdecl *insert_string)(Output &, const String &);
extern Input &(__thiscall *extract_integer)(Input *, int &);
extern int (__thiscall *get_character)(Input *);

struct Stream {
    Input input;
    Output output;
    char storage[120];

    Stream();
    ~Stream();
};

__forceinline Stream::Stream()
{
    stream_construct(this, 3, 1);
}

__forceinline Stream::~Stream()
{
    stream_destroy(this);
}

struct BadLexicalCast;
extern void (__thiscall *bad_cast_construct)(BadLexicalCast *, const char *);
extern unsigned char lexicalCastVtable;
extern const char string_type;
extern const char integer_type;

struct BadLexicalCast {
    void *vtable;
    unsigned long base[2];
    const void *source_type;
    const void *target_type;

    BadLexicalCast();
    ~BadLexicalCast();
};

__forceinline BadLexicalCast::BadLexicalCast()
{
    bad_cast_construct(
        this,
        "bad lexical cast: source type value could not be interpreted as target");
    vtable = &lexicalCastVtable;
    source_type = &string_type;
    target_type = &integer_type;
}

__declspec(noreturn) void __cdecl throw_exception(const BadLexicalCast &);

int __cdecl lexical_integer(const String &source)
{
    int result;
    Stream stream;

    stream.input.unsetf(1);
    stream.input.setprecision(10);

    if (!insert_string(stream.output, source).fail() &&
        extract_integer(&stream.input, result) &&
        get_character(&stream.input) == -1)
        return result;

    BadLexicalCast error;
    throw_exception(error);
}

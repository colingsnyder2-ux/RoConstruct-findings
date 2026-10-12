// from server: 94% by king_originala
struct String;
struct Stream;
struct Output;
struct BadCast;

typedef void (__thiscall *StringConstructor)(String*);
typedef void (__thiscall *StringDestructor)(String*);
typedef void (__thiscall *StreamConstructor)(Stream*, int, int);
typedef void (__thiscall *StreamDestructor)(Stream*);
typedef Output& (__thiscall *InsertUnsigned)(Output*, unsigned int);
typedef void (__thiscall *BadCastConstructor)(BadCast*, const char*);

extern StringConstructor stringConstructor;
extern StringDestructor stringDestructor;
extern StreamConstructor streamConstructor;
extern StreamDestructor streamDestructor;
extern InsertUnsigned insertUnsigned;
extern BadCastConstructor badCastConstructor;

extern unsigned char lexicalCastVtable;
extern unsigned char sourceType;
extern unsigned char targetType;

struct String {
    unsigned char storage[28];
    String();
    ~String();
};

inline String::String()
{
    stringConstructor(this);
}

inline String::~String()
{
    stringDestructor(this);
}

struct Output {
    int* table;
    Output& operator<<(unsigned int);
    bool failed() const;
};

inline Output& Output::operator<<(unsigned int value)
{
    return insertUnsigned(this, value);
}

inline bool Output::failed() const
{
    return (*(const unsigned char*)((const char*)this + table[1] + 8) & 6) != 0;
}

struct State {
    unsigned char padding[16];
    unsigned int format;
    int digits;

    unsigned int flags(unsigned int);
    void unsetf(unsigned int);
    int precision(int);
};

inline unsigned int State::flags(unsigned int value)
{
    unsigned int old = format;
    format = value;
    return old;
}

inline void State::unsetf(unsigned int mask)
{
    flags(format & ~mask);
}

inline int State::precision(int value)
{
    int old = digits;
    digits = value;
    return old;
}

struct Stream {
    int* table;
    unsigned char storage[132];

    Stream(int, int);
    ~Stream();
    bool extract(String*);
    State& state();
    void configure();
    Output& output();
};

inline Stream::Stream(int mode, int initialize)
{
    streamConstructor(this, mode, initialize);
}

inline Stream::~Stream()
{
    streamDestructor(this);
}

inline State& Stream::state()
{
    return *(State*)((char*)this + table[1]);
}

inline void Stream::configure()
{
    state().unsetf(1);
    state().precision(10);
}

inline Output& Stream::output()
{
    return *(Output*)((char*)this + 8);
}

struct BadCast {
    void* vtable;
    unsigned long base[2];

    BadCast(const char*);
    ~BadCast();
};

inline BadCast::BadCast(const char* message)
{
    badCastConstructor(this, message);
}

struct Exception : BadCast {
    const void* source;
    const void* target;

    Exception();
};

inline Exception::Exception()
    : BadCast("bad lexical cast: source type value could not be interpreted as target")
{
    vtable = &lexicalCastVtable;
    source = &sourceType;
    target = &targetType;
}

extern __declspec(noreturn) void __cdecl raiseLexicalCast(const Exception&);

String __cdecl convert(const unsigned int& value)
{
    Stream stream(3, 1);
    stream.configure();
    String result;

    if (!(stream.output() << value).failed() && stream.extract(&result))
        return result;

    Exception exception;
    raiseLexicalCast(exception);
}

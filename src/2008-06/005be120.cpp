// from server: 88% by colin
//

struct String;

enum State
{
    Good = 0,
    Eof = 1,
    Fail = 2,
    Bad = 4
};

struct IOS
{
    int table;
    int field;
    State state;
    int exceptions;
    unsigned int flags;
    int precision;
};

struct StreamBase
{
    int* table;

    IOS* base();
    State fail();
    operator void*();
    unsigned int unsetf(unsigned int);
    int precision(int);
};

inline IOS* StreamBase::base()
{
    return reinterpret_cast<IOS*>(
        reinterpret_cast<char*>(this) + table[1]);
}

inline State StreamBase::fail()
{
    return static_cast<State>(base()->state & 6);
}

inline StreamBase::operator void*()
{
    IOS* p = base();
    int bits = static_cast<State>(p->state & 6);
    unsigned int mask = bits ? 0U : ~0U;
    return reinterpret_cast<void*>(
        reinterpret_cast<unsigned int>(p) & mask);
}

inline unsigned int StreamBase::unsetf(unsigned int mask)
{
    IOS* p = base();
    unsigned int old = p->flags;
    p->flags &= ~mask;
    return old;
}

inline int StreamBase::precision(int value)
{
    IOS* p = base();
    int old = p->precision;
    p->precision = value;
    return old;
}

struct Stream : StreamBase
{
    char storage[132];

    Stream();
    ~Stream();
    StreamBase& read(unsigned int&);
    int get();
};

extern void (__thiscall* stream_construct)(Stream*, int, int);
extern void (__thiscall* stream_destroy)(Stream*);
extern StreamBase& (__cdecl* stream_insert)(StreamBase&, const String&);
extern StreamBase& (__thiscall* stream_extract)(Stream*, unsigned int&);
extern int (__thiscall* stream_get)(Stream*);

inline Stream::Stream()
{
    stream_construct(this, 3, 1);
}

inline Stream::~Stream()
{
    stream_destroy(this);
}

inline StreamBase& Stream::read(unsigned int& value)
{
    return stream_extract(this, value);
}

inline int Stream::get()
{
    return stream_get(this);
}

struct BadCast
{
    void* table;
    const char* message;
    int owned;

    BadCast(const char*);
};

extern void (__thiscall* bad_cast_construct)(BadCast*, const char*);

inline BadCast::BadCast(const char* text)
{
    bad_cast_construct(this, text);
}

extern char cast_table;
extern char source_type;
extern char target_type;
extern const char cast_message[];

struct LexicalCastError : BadCast
{
    const void* source;
    const void* target;

    LexicalCastError();
    ~LexicalCastError();
};

inline LexicalCastError::LexicalCastError()
    : BadCast(cast_message)
{
    table = &cast_table;
    source = &source_type;
    target = &target_type;
}

extern __declspec(noreturn) void __cdecl raise_cast_error(LexicalCastError*);

unsigned int func_005be240(const String& text)
{
    unsigned int result;
    Stream stream;
    stream.unsetf(1);
    stream.precision(10);

    StreamBase& output =
        *reinterpret_cast<StreamBase*>(reinterpret_cast<char*>(&stream) + 8);

    if (!stream_insert(output, text).fail() &&
        stream.read(result) &&
        stream.get() != -1)
        return result;

    LexicalCastError error;
    raise_cast_error(&error);
}

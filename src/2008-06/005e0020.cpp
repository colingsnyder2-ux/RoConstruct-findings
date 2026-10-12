// from server: 90% by king_originala
struct String;
struct Stream;
struct StreamPart;

extern void (__thiscall *streamConstruct)(Stream *, int, int);
extern void (__thiscall *streamDestroy)(Stream *);
extern StreamPart &(__cdecl *streamInsert)(StreamPart &, const String &);
extern Stream &(__thiscall *streamExtract)(Stream *, __int64 &);
extern int (__thiscall *streamGet)(Stream *);

struct StreamBase {
    char reserved[8];
    int state;
    int unused;
    int flags;
    int precision;
};

struct StreamPart {
    int *table;
    StreamBase *base();
    int state();
};

inline StreamBase *StreamPart::base() {
    return reinterpret_cast<StreamBase *>(
        reinterpret_cast<char *>(this) + table[1]);
}

inline int StreamPart::state() {
    return base()->state;
}

struct Stream {
    int *table;
    StreamPart output;
    char storage[128];

    Stream(int, int);
    ~Stream();
    StreamBase *base();
    StreamBase *unsetf(int);
    StreamBase *precision(int);
    signed char failed();
    operator void *();
};

inline Stream::Stream(int mode, int initialize) {
    streamConstruct(this, mode, initialize);
}

inline Stream::~Stream() {
    streamDestroy(this);
}

inline StreamBase *Stream::base() {
    return reinterpret_cast<StreamBase *>(
        reinterpret_cast<char *>(this) + table[1]);
}

inline StreamBase *Stream::unsetf(int bits) {
    base()->flags &= ~bits;
    return base();
}

inline StreamBase *Stream::precision(int value) {
    StreamBase *p = base();
    p->precision = value;
    return p;
}

inline signed char Stream::failed() {
    return static_cast<signed char>(base()->state & 6);
}

inline Stream::operator void *() {
    signed char failure = failed();
    StreamBase *p = base();
    int mask = failure ? -1 : 0;
    return reinterpret_cast<void *>(
        reinterpret_cast<unsigned int>(p) & ~mask);
}

struct BadCast;
extern void (__thiscall *badCastConstruct)(BadCast *, const char *);

struct BadCast {
    void *table;
    char *message;
    int owned;
    BadCast(const char *);
};

inline BadCast::BadCast(const char *text) {
    badCastConstruct(this, text);
}

struct TypeInfo;
extern TypeInfo stringType;
extern TypeInfo integerType;
extern void *badLexicalCastTable[];

struct BadLexicalCast : BadCast {
    const TypeInfo *source;
    const TypeInfo *target;
    BadLexicalCast();
    ~BadLexicalCast();
};

inline BadLexicalCast::BadLexicalCast()
    : BadCast("bad lexical cast: source type value could not be interpreted as target") {
    table = badLexicalCastTable;
    source = &stringType;
    target = &integerType;
}

__declspec(noreturn) extern void __cdecl raise(const BadLexicalCast &);

__int64 __cdecl convert(const String &text) {
    __int64 result;
    Stream stream(3, 1);
    stream.unsetf(1);
    stream.precision(19);

    if (!(streamInsert(stream.output, text).state() & 6) &&
        streamExtract(&stream, result) &&
        streamGet(&stream) == -1)
        return result;

    BadLexicalCast error;
    raise(error);
}

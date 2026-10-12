// from server: 87% by king_originala
struct String;

struct StreamState {
    void* table;
    int reserved;
    int state;
    int exceptions;
    unsigned int format;
    int digits;

    unsigned int flags() const;
    unsigned int flags(unsigned int);
    void unsetf(unsigned int);
    int precision(int);
    int rdstate() const;
    bool fail() const;
};

inline unsigned int StreamState::flags() const {
    return format;
}

inline unsigned int StreamState::flags(unsigned int value) {
    unsigned int old = format;
    format = value;
    return old;
}

inline void StreamState::unsetf(unsigned int mask) {
    flags(flags() & ~mask);
}

inline int StreamState::precision(int value) {
    int old = digits;
    digits = value;
    return old;
}

inline int StreamState::rdstate() const {
    return state;
}

inline bool StreamState::fail() const {
    return (rdstate() & 6) != 0;
}

struct StreamBase {
    const int* offsets;

    StreamState& ios();
    operator void*();
    bool operator!();
};

inline StreamState& StreamBase::ios() {
    return *reinterpret_cast<StreamState*>(
        reinterpret_cast<char*>(this) + offsets[1]);
}

inline StreamBase::operator void*() {
    StreamState* p = &ios();
    return (p->state & 6) ? 0 : p;
}

inline bool StreamBase::operator!() {
    return ios().fail();
}

struct InputStream : StreamBase {
    int count;
    InputStream& operator>>(double&);
    int get();
};

struct OutputStream : StreamBase {
};

struct StringStream {
    InputStream input;
    OutputStream output;
    char storage[124];

    StringStream(int, int);
    ~StringStream();
    StreamState& ios();
};

inline StreamState& StringStream::ios() {
    return input.ios();
}

OutputStream& __cdecl operator<<(OutputStream&, const String&);

struct TypeInfo;
extern const TypeInfo sourceType;
extern const TypeInfo targetType;

struct BadCast {
    char* message;
    int owned;

    BadCast(const char*);
    virtual ~BadCast();
    virtual const char* what() const;
};

struct BadLexicalCast : BadCast {
    const TypeInfo* source;
    const TypeInfo* target;

    BadLexicalCast();
    virtual ~BadLexicalCast();
    virtual const char* what() const;
};

BadLexicalCast::BadLexicalCast()
    : BadCast("bad lexical cast: source type value could not be interpreted as target"),
      source(&sourceType), target(&targetType) {
}

BadLexicalCast::~BadLexicalCast() {
}

const char* BadLexicalCast::what() const {
    return "bad lexical cast: source type value could not be interpreted as target";
}

__declspec(noreturn) void __cdecl throwLexicalCast(const BadLexicalCast&);

double __cdecl convert(const String& value) {
    StringStream stream(3, 1);
    stream.ios().unsetf(1);
    stream.ios().precision(16);

    double result;
    if (!(stream.output << value).operator!() &&
        (stream.input >> result) &&
        stream.input.get() == -1) {
        return result;
    }

    throwLexicalCast(BadLexicalCast());
}

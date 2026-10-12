// from server: 94% by king_originala
struct __declspec(dllimport) String
{
    char data[28];
    String();
    ~String();
};

struct IOS
{
    virtual ~IOS();
    int reserved;
    int state;
    int exceptions;
    unsigned int flags;
    int precisionValue;
    char remainder[40];

    void unsetf(unsigned int);
    int precision(int);
};

inline void IOS::unsetf(unsigned int mask)
{
    flags &= ~mask;
}

inline int IOS::precision(int value)
{
    int previous = precisionValue;
    precisionValue = value;
    return previous;
}

struct __declspec(dllimport) Input : virtual IOS
{
    int reservedInput;
};

struct __declspec(dllimport) Output : virtual IOS
{
    int reservedOutput;
    Output& operator<<(int);
};

struct StreamBase : Input, Output
{
    bool extract(String*);
};

struct __declspec(dllimport) Stream : StreamBase
{
    char buffer[56];
    Stream(int);
    ~Stream();
};

struct TypeInfo;
extern TypeInfo sourceType;
extern TypeInfo targetType;

struct __declspec(dllimport) BadCast
{
    BadCast(const char*);
    virtual ~BadCast();
    virtual const char* what() const;
    const char* message;
    int ownsMessage;
};

struct BadLexicalCast : BadCast
{
    BadLexicalCast(const TypeInfo&, const TypeInfo&);
    virtual const char* what() const;
    const TypeInfo* source;
    const TypeInfo* target;
};

inline BadLexicalCast::BadLexicalCast(const TypeInfo& s, const TypeInfo& t)
    : BadCast("bad lexical cast: source type value could not be interpreted as target"),
      source(&s), target(&t)
{
}

__declspec(noreturn) void __cdecl raiseLexicalCast(const BadLexicalCast&);

String __cdecl convert(const int& value)
{
    Stream stream(3);
    stream.unsetf(1);
    stream.precision(10);

    String result;
    Output& output = stream << value;
    if (!(output.state & 6) && stream.extract(&result))
        return result;

    BadLexicalCast error(sourceType, targetType);
    raiseLexicalCast(error);
}

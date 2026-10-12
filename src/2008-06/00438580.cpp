// from server: 72% by king_originala
struct Str_00437ed0 { int words[8]; };

extern const void* __cdecl getLocalScope();

extern const char* (__thiscall* text_access)(Str_00437ed0*);
extern void (__thiscall* temp_destroy)(void*);

struct String {
    char data[28];
    String(const char*);
    ~String();
};

extern void (__thiscall* string_construct)(String*, const char*);

inline String::String(const char* text)
{
    string_construct(this, text);
}

struct Result {
    String text;
    const void* scope;
    Result(const char*);
};

inline Result::Result(const char* textValue)
    : text(textValue), scope(getLocalScope())
{
}

inline void* operator new(unsigned int, void* p)
{
    return p;
}

struct Temporary {
    int value;
    ~Temporary();
};

inline Temporary::~Temporary()
{
    temp_destroy(this);
}

struct X_00437ed0 {
    char pad[0xa4];
    Str_00437ed0 value;
    Str_00437ed0* copy(Str_00437ed0*);
    Result* func_00438580(Result*);
};

Result* X_00437ed0::func_00438580(Result* out)
{
    Temporary temporary;
    temporary.value = 0;
    Str_00437ed0* value = copy((Str_00437ed0*)&temporary);
    new (out) Result(text_access(value));
    return out;
}

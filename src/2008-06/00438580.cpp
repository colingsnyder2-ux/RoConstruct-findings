// from server: 66% by king_originala
struct Str_00437ed0 {
    int value;
    Str_00437ed0();
    ~Str_00437ed0();
    const char* c_str() const;
};

extern const char* (__thiscall* string_data)(const Str_00437ed0*);
extern void (__thiscall* string_release)(Str_00437ed0*);

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

extern void (__thiscall* string_construct)(String*, const char*);
extern const void* __cdecl getLocalScope();

struct Result {
    String text;
    const void* scope;
    Result(const char*);
};

struct X_00437ed0 {
    char pad[0xa4];
    Str_00437ed0 value;
    Str_00437ed0* copy(Str_00437ed0*);
    Result func_00438580();
};

Str_00437ed0::Str_00437ed0() : value(0) {}

Str_00437ed0::~Str_00437ed0()
{
    string_release(this);
}

const char* Str_00437ed0::c_str() const
{
    return string_data(this);
}

String::String(const char* s)
{
    string_construct(this, s);
}

Result::Result(const char* s) : text(s), scope(getLocalScope()) {}

Result X_00437ed0::func_00438580()
{
    Str_00437ed0 temporary;
    return Result(copy(&temporary)->c_str());
}

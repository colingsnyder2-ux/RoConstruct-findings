// from server: 94% by king_originala
struct Str_00437ed0 { int words[8]; };

extern const char* (__thiscall* string_data)(Str_00437ed0*);
extern void (__thiscall* string_release)(Str_00437ed0*);

struct Temporary {
    int storage;
    ~Temporary();
};

struct X_00437ed0 {
    char pad[0xa4];
    Str_00437ed0 value;
    Temporary copy();
    int f();
};

struct Text {
    char storage[28];
    Text(const char*);
    ~Text();
};

extern void (__thiscall* text_construct)(Text*, const char*);
extern void (__thiscall* text_destroy)(Text*);
extern bool __cdecl lookup(const Text*, int*);

__forceinline Temporary::~Temporary()
{
    string_release(reinterpret_cast<Str_00437ed0*>(this));
}

__forceinline Text::Text(const char* source)
{
    text_construct(this, source);
}

__forceinline Text::~Text()
{
    text_destroy(this);
}

int X_00437ed0::f()
{
    int result;
    bool found = lookup(
        &Text(string_data(reinterpret_cast<Str_00437ed0*>(&copy()))),
        &result);
    return found ? result : 0;
}

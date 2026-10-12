// from server: 85% by king_originala
struct Str;
extern bool (__thiscall* str_empty)(const Str*);
extern Str* (__thiscall* str_text)(Str*, const char*);
extern Str* (__thiscall* str_copy)(Str*, const Str*) throw();
extern void (__thiscall* str_destroy)(Str*) throw();

struct Str {
    char* data;
    Str(const char*);
    Str(const Str&) throw();
    ~Str() throw();
    bool empty() const;
};

inline Str::Str(const char* text)
{
    str_text(this, text);
}

inline Str::Str(const Str& other) throw()
{
    str_copy(this, &other);
}

inline Str::~Str() throw()
{
    str_destroy(this);
}

inline bool Str::empty() const
{
    return str_empty(this);
}

struct X {
    Str copy();
};

struct S {
    char padding[0xec];
    Str caption;
    char padding2[0x6c];
    X* parent;
    Str getCaption();
};

Str S::getCaption()
{
    return !caption.empty()
        ? caption
        : (parent ? parent->copy() : Str(">Authoring"));
}

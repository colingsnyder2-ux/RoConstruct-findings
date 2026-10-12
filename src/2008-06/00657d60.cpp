// from server: 80% by king_originala
struct Facet {};
struct Locale;
struct String;

struct Iterator {
    void* owner;
    char* position;
};

extern void (__thiscall *increment)(Facet*);
extern void (__thiscall *destroyLocale)(Locale*);
extern void (__thiscall *stringBegin)(String*, Iterator*);
extern void (__thiscall *stringEnd)(String*, Iterator*);
extern void (__thiscall *stringErase)(String*, Iterator*, Iterator, Iterator);

struct Locale {
    Facet* facet;
    Locale(const Locale&);
    ~Locale();
};

inline Locale::Locale(const Locale& other) : facet(other.facet)
{
    increment(facet);
}

inline Locale::~Locale()
{
    destroyLocale(this);
}

struct Predicate {
    short value;
    Locale locale;
};

struct String {
    Iterator begin();
    Iterator end();
    Iterator erase(Iterator, Iterator);
};

inline Iterator String::begin()
{
    Iterator result;
    stringBegin(this, &result);
    return result;
}

inline Iterator String::end()
{
    Iterator result;
    stringEnd(this, &result);
    return result;
}

inline Iterator String::erase(Iterator first, Iterator last)
{
    Iterator result;
    stringErase(this, &result, first, last);
    return result;
}

extern Iterator __cdecl filter(Iterator, Iterator, Predicate);

void __cdecl f(String* text, Predicate predicate)
{
    text->erase(text->end(), filter(text->end(), text->begin(), predicate));
}

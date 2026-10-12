// from server: 64% by king_originala
struct Iterator {
    void* owner;
    char* position;
};

extern void (__thiscall* addReference)(void*);
extern void (__thiscall* destroyLocale)(void*);

struct Locale {
    void* implementation;
    Locale(const Locale&);
    ~Locale();
};

inline Locale::Locale(const Locale& other)
    : implementation(other.implementation) {
    addReference(implementation);
}

inline Locale::~Locale() {
    destroyLocale(this);
}

struct Predicate {
    short value;
    Locale locale;
};

struct String {
    Iterator begin();
    Iterator end();
    void erase(Iterator, Iterator);
};

extern void (__thiscall* firstIterator)(String*, Iterator*);
extern void (__thiscall* lastIterator)(String*, Iterator*);
extern void (__thiscall* eraseRange)(String*, Iterator*, Iterator, Iterator);

inline Iterator String::begin() {
    Iterator result;
    firstIterator(this, &result);
    return result;
}

inline Iterator String::end() {
    Iterator result;
    lastIterator(this, &result);
    return result;
}

inline void String::erase(Iterator first, Iterator last) {
    Iterator result;
    eraseRange(this, &result, first, last);
}

Iterator __cdecl filterRange(Iterator, Iterator, Predicate);

void __cdecl processString(String* text, Predicate predicate) {
    Iterator first = text->begin();
    text->erase(filterRange(text->end(), text->begin(), predicate), first);
}

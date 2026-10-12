// from server: 61% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct String;
struct Facet;
struct Locale;

extern void (__thiscall *stringConstruct)(String*);
extern void (__thiscall *stringCopy)(String*, const String&);
extern void (__thiscall *stringDestroy)(String*);
extern Facet* (__cdecl *getGlobalLocale)();
extern Facet* (__cdecl *initLocale)();
extern void (__thiscall *incrementFacet)(Facet*);
extern void (__thiscall *destroyLocale)(Locale*);
extern void (__cdecl *invalidParameter)();

struct String {
    unsigned char data[28];
    String();
    String(const String&);
    ~String();
};

inline String::String()
{
    stringConstruct(this);
}

inline String::String(const String& other)
{
    stringCopy(this, other);
}

inline String::~String()
{
    stringDestroy(this);
}

struct Facet {
};

struct Locale {
    Facet* impl;
    Locale();
    Locale(const Locale&);
    ~Locale();
};

inline Locale::Locale()
{
    impl = getGlobalLocale();
    incrementFacet(initLocale());
}

inline Locale::~Locale()
{
    destroyLocale(this);
}

Locale __cdecl copyLocale(const Locale&);
void __cdecl transform(String*, Locale);

struct Value {
    unsigned char data[12];
    bool getString(String*);
};

struct Tree {
    unsigned char prefix[16];
    Value value;

    Tree* first(void*);
    Tree* next(Tree*);
};

struct Item {
    unsigned int allocator;
    unsigned char prefix[8];
    Item** begin;
    Item** end;
    Item** capacity;
    String text;

    Item(String);
    void insert(void*, unsigned int, Item**, Item* const*);
};

extern void* childTag;

struct ArrowButton {
    void build(Item*, Tree*);
};

void ArrowButton::build(Item* parent, Tree* tree)
{
    Tree* child = tree->first(childTag);
    while (child) {
        {
            String text;
            child->value.getString(&text);

            {
                Locale locale;
                transform(&text, copyLocale(locale));
            }

            Item* item = new Item(text);
            unsigned int available = parent->begin
                ? static_cast<unsigned int>(parent->capacity - parent->begin)
                : 0;
            Item** position = parent->end;

            if (static_cast<unsigned int>(position - parent->begin) < available) {
                *position = item;
                parent->end = position + 1;
            } else {
                if (parent->begin > position)
                    invalidParameter();
                unsigned int result;
                parent->insert(&result, parent->allocator, position, &item);
            }

            build(item, child);
        }
        child = tree->next(child);
    }
}

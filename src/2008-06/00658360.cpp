// from server: 96% by king_originala
typedef unsigned int size_t;

struct String;
struct Locale;
struct Facet;

extern void (__thiscall *string_construct)(String *);
extern void (__thiscall *string_copy)(String *, const String *);
extern void (__thiscall *string_destroy)(String *);
extern void (__thiscall *locale_destroy)(Locale *);
extern Facet *(__cdecl *get_global_locale)();
extern Facet *(__cdecl *initialize_locale)();
extern void (__thiscall *facet_incref)(Facet *);
extern void (__cdecl *invalid_parameter_noinfo)();

void *__cdecl operator new(size_t);
void __cdecl operator delete(void *);

struct String {
    unsigned char storage[28];
    String();
    String(const String &);
    ~String();
};

inline String::String() {
    string_construct(this);
}

inline String::String(const String &s) {
    string_copy(this, &s);
}

inline String::~String() {
    string_destroy(this);
}

struct Locale {
    Facet *implementation;
    Locale();
    ~Locale();
};

inline Locale::Locale() {
    implementation = get_global_locale();
    facet_incref(initialize_locale());
}

inline Locale::~Locale() {
    locale_destroy(this);
}

struct LocaleArgument {
    unsigned char storage[8];
    LocaleArgument(const Locale *);
    LocaleArgument(const LocaleArgument &);
};

extern void __cdecl copy_locale_argument(LocaleArgument *, const Locale *);

inline LocaleArgument::LocaleArgument(const Locale *p) {
    copy_locale_argument(this, p);
}

extern void __cdecl transform_string(String *, LocaleArgument);

struct Value {
    unsigned char storage[12];
    bool get_string(String *);
};

struct Node {
    unsigned char prefix[16];
    Value value;
    Node *find(void *);
    Node *next(Node *);
};

extern void *node_key;

struct ArrowButton {
    void *proxy;
    unsigned char prefix[8];
    ArrowButton **begin;
    ArrowButton **end;
    ArrowButton **limit;
    unsigned char remaining[28];

    ArrowButton(String);
    void insert(void *, void *, ArrowButton **, ArrowButton *const *);
    void build(ArrowButton *, Node *);
};

void ArrowButton::build(ArrowButton *destination, Node *source) {
    Node *node = source->find(node_key);
    while (node) {
        {
            String text;
            node->value.get_string(&text);
            {
                Locale locale;
                transform_string(&text, LocaleArgument(&locale));
            }

            ArrowButton *child = new ArrowButton(text);
            ArrowButton *value = child;

            size_t capacity = !destination->begin
                ? 0
                : destination->limit - destination->begin;
            ArrowButton **position = destination->end;

            if (static_cast<size_t>(position - destination->begin) < capacity) {
                *position = child;
                destination->end = position + 1;
            } else {
                if (destination->begin > position)
                    invalid_parameter_noinfo();
                void *result;
                destination->insert(&result, destination->proxy, position, &value);
            }

            build(child, node);
        }
        node = source->next(node);
    }
}

// from server: 93% by king_originala
struct String;

extern void (__thiscall *string_copy)(String *, const String *);
extern void (__thiscall *string_destroy)(String *);

struct String {
    char data[28];
    String(const String &);
    ~String();
};

inline String::String(const String &other) {
    string_copy(this, &other);
}

inline String::~String() {
    string_destroy(this);
}

struct Callback {
    void (__thiscall *function)(void *, String);
    int offset;
    void invoke(void *volatile *object, String value);
};

void Callback::invoke(void *volatile *object, String value) {
    function(static_cast<char *>(*object) + offset, value);
}

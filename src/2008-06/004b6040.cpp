// from server: 98% by king_originala
struct String;

extern void (__thiscall *string_copy)(String *, const String *);
extern void (__thiscall *string_destroy)(String *);

struct String {
    unsigned char storage[28];
    String(const String &);
    ~String();
};

inline String::String(const String &other) {
    string_copy(this, &other);
}

inline String::~String() {
    string_destroy(this);
}

struct Result {
    void *object;
};

struct Signal {
    Result invoke(String text, int value);
};

struct Object {
    unsigned char padding[16];
    Signal signal;
};

extern Object *__stdcall resolve(void *object);

void __stdcall dispatch(void *object, String text, int value) {
    Object *resolved = resolve(object);
    if (resolved)
        resolved->signal.invoke(text, value);
}

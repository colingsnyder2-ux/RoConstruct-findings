// from server: 96% by king_originala
struct VVector3 {
    float x, y, z;
    VVector3(float, float, float);
};

inline VVector3::VVector3(float a, float b, float c)
    : x(a), y(b), z(c) {
}

struct Handle;
struct String;

extern const char* (__thiscall* handle_text)(const Handle*);
extern void (__thiscall* handle_destroy)(Handle*);
extern void (__thiscall* string_construct)(String*, const char*);
extern void (__thiscall* string_destroy)(String*);
extern bool __cdecl parse_vector(const String*, VVector3*);

struct Handle {
    unsigned int value;
    ~Handle();
    const char* text() const;
};

struct String {
    char reserved[4];
    union {
        char buffer[16];
        char* pointer;
    } data;
    unsigned int length;
    unsigned int capacity;

    String(const char*);
    ~String();
};

inline Handle::~Handle() {
    handle_destroy(this);
}

inline const char* Handle::text() const {
    return handle_text(this);
}

inline String::String(const char* text) {
    string_construct(this, text);
}

inline String::~String() {
    string_destroy(this);
}

struct S {
    char reserved[0xa4];
    Handle value;

    Handle copy();
    VVector3 f();
};

VVector3 S::f() {
    VVector3 result(0.0f, 0.0f, 0.0f);
    bool valid = parse_vector(&String(copy().text()), &result);
    if (valid)
        return VVector3(result.x, result.y, result.z);
    return VVector3(0.0f, 0.0f, 0.0f);
}

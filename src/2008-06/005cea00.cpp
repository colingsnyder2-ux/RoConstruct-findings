// from server: 76% by colin
struct String;
extern void (__thiscall *string_copy)(String *, const String &);
extern void (__thiscall *string_destroy)(String *);

struct String {
    unsigned char data[28];
    String(const String &);
    ~String();
};

inline String::String(const String &other) {
    string_copy(this, other);
}

inline String::~String() {
    string_destroy(this);
}

struct Value {
    String text;
    unsigned int extra;
};

extern Value *__cdecl make_value(Value *, const char *);

struct Camera;
typedef void (__thiscall *CameraMethod)(Camera *, int, const Value &);

struct Camera {
    CameraMethod *methods;
    void setCursor(int);
};

void Camera::setCursor(int argument) {
    Value value = *make_value((Value *)0, "Textures\\ArrowCursor.png");
    Value copy(value);
    methods[7](this, argument, copy);
}

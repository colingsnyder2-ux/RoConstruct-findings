// from server: 78% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct String {
    char storage[28];
    String(const char*);
    String(const String&);
    ~String();
};

extern void (__thiscall *string_construct)(String*, const char*);
extern void (__thiscall *string_copy)(String*, const String&);
extern void (__thiscall *string_destroy)(String*);

inline String::String(const char* s) { string_construct(this, s); }
inline String::String(const String& s) { string_copy(this, s); }
inline String::~String() { string_destroy(this); }

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Object;

struct Shared {
    Object* object;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& s)
    : object(s.object), control(s.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline Shared::~Shared()
{
    Control* c = control;
    if (c && _InterlockedDecrement(&c->strong) == 0) {
        c->dispose();
        if (_InterlockedDecrement(&c->weak) == 0)
            c->destroy();
    }
}

struct Object {
    virtual void unused() = 0;
    virtual void setName(const String&) = 0;
    void setParent(Shared);
};

struct Vector2 {
    float x, y;
    Vector2(float, float);
    ~Vector2();
};

inline Vector2::Vector2(float a, float b) : x(a), y(b) {}
inline Vector2::~Vector2() {}

extern const float initialX;
extern const float initialY;
extern const char objectName[];
extern const char lookupName[];
extern const char imageName[];

extern Shared __cdecl createObject(int, bool, Vector2);
extern Shared __cdecl findObject(void*, const char*);
extern int* __cdecl getContext();

struct S {
    Shared f(void*);
    void configure(int, String, Shared);
};

Shared S::f(void* p)
{
    Shared result = createObject(2, true, Vector2(initialX, initialY));
    result.object->setName(String(objectName));
    Shared parent = findObject(p, lookupName);
    result.object->setParent(parent);
    int context = *getContext();
    String image(imageName);
    configure(context, image, parent);
    return Shared(result);
}

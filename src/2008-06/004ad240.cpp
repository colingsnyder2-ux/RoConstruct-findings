// from server: 97% by king_originala
extern unsigned char sourceType;
extern unsigned char targetType;
extern unsigned char badCastType;

extern "C" void* __cdecl runtimeCast(
    void*, long, void*, void*, int);

struct BadCast {
    unsigned char storage[12];
};

extern void (__thiscall* badCastConstructor)(BadCast*, const char*);

struct Accessor {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(void*, const int&);
};

struct TypedDescriptor {
    unsigned char padding[24];
    Accessor* accessor;
};

extern "C" TypedDescriptor* __stdcall throwException(void*, void*);

struct S {
    void* descriptor;
    void* object;
    void f(const int&);
};

void S::f(const int& value)
{
    TypedDescriptor* typed = static_cast<TypedDescriptor*>(
        runtimeCast(descriptor, 0, &sourceType, &targetType, 0));

    if (!typed) {
        BadCast error;
        badCastConstructor(&error, "bad cast");
        typed = throwException(&error, &badCastType);
    }

    typed->accessor->set(object, value);
}

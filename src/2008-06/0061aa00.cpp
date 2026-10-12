// from server: 97% by king_originala
struct Accessor {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void access(void*, void*);
};

struct TypedPropertyDescriptor {
    char reserved[24];
    Accessor* accessor;
};

extern const char sourceType[];
extern const char destinationType[];
extern const char badCastMessage[];
extern const char badCastThrowInfo[];

extern "C" void* __cdecl castObject(void*, long, const void*, const void*, int);
extern "C" TypedPropertyDescriptor* __stdcall throwException(void*, const void*);

typedef void (__thiscall *BadCastConstructor)(void*, const char*);
extern BadCastConstructor constructBadCast;

struct LuaArguments {
    void* descriptor;
    void* instance;
    void f(void*);
};

void LuaArguments::f(void* result)
{
    TypedPropertyDescriptor* property =
        static_cast<TypedPropertyDescriptor*>(
            castObject(descriptor, 0, sourceType, destinationType, 0));

    if (!property) {
        char exception[12];
        constructBadCast(exception, badCastMessage);
        property = throwException(exception, badCastThrowInfo);
    }

    property->accessor->access(instance, result);
}

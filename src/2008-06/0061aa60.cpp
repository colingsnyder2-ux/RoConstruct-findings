// from server: 97% by king_originala
extern unsigned char sourceType[];
extern unsigned char targetType[];
extern unsigned char throwInfo[];
extern const char badCastText[];

extern "C" void* __cdecl __RTDynamicCast(
    void*, long, void*, void*, int);

struct BadCast {
    unsigned char data[12];
};

extern BadCast* (__thiscall *badCastConstructor)(BadCast*, const char*);

struct ValueAccessor {
    virtual void reserved0();
    virtual void reserved1();
    virtual void reserved2();
    virtual void get(void*, void*);
};

struct TypedPropertyDescriptor {
    unsigned char padding[24];
    ValueAccessor* accessor;
};

extern "C" TypedPropertyDescriptor* __stdcall throwException(void*, void*);

struct LuaArguments {
    void* descriptor;
    void* instance;
    void get(void* result);
};

void LuaArguments::get(void* result)
{
    TypedPropertyDescriptor* property =
        static_cast<TypedPropertyDescriptor*>(
            __RTDynamicCast(descriptor, 0, sourceType, targetType, 0));

    if (!property) {
        BadCast exception;
        badCastConstructor(&exception, badCastText);
        property = throwException(&exception, throwInfo);
    }

    property->accessor->get(instance, result);
}

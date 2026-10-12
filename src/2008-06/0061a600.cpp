// from server: 97% by king_originala
struct PropertyDescriptor {
    void* vtable;
};

struct StringAccessor {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void get(void* instance, void* result);
};

struct TypedPropertyDescriptor {
    char padding[24];
    StringAccessor* accessor;
};

struct BadCast {
    char storage[12];
};

extern const char propertyDescriptorType[];
extern const char typedPropertyDescriptorType[];
extern const char badCastMessage[];
extern const char badCastThrowInfo[];

extern "C" TypedPropertyDescriptor* __cdecl runtimeCast(
    void*, int, const void*, const void*, int);

extern void (__thiscall *constructBadCast)(BadCast*, const char*);

extern "C" TypedPropertyDescriptor* __stdcall throwException(
    void*, const void*);

struct LuaArguments {
    PropertyDescriptor* descriptor;
    void* instance;
    void getString(void* result);
};

void LuaArguments::getString(void* result)
{
    TypedPropertyDescriptor* property = runtimeCast(
        descriptor, 0, propertyDescriptorType, typedPropertyDescriptorType, 0);
    if (!property) {
        BadCast error;
        constructBadCast(&error, badCastMessage);
        property = throwException(&error, badCastThrowInfo);
    }
    property->accessor->get(instance, result);
}

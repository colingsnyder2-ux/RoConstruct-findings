// from server: 97% by king_originala
struct Serializer {
    virtual void slot0();
    virtual void slot1();
    virtual void write(void* output, void* value);
};

struct TypedDescriptor {
    char padding[24];
    Serializer* serializer;
};

struct BadCast {
    char storage[12];
};

typedef void (__thiscall *BadCastConstructor)(BadCast*, const char*);

extern BadCastConstructor badCastConstructor;
extern const char badCastText[];
extern const char propertyDescriptorType[];
extern const char typedPropertyDescriptorType[];
extern char badCastThrowInfo[];

extern "C" void* __cdecl _RTDynamicCast(
    void*, long, const void*, const void*, int);

extern "C" __declspec(noreturn) void __stdcall throwException(
    void*, void*);

struct ChangePropertyItem {
    void* descriptor;
    void* value;

    void* write(void* output);
};

void* ChangePropertyItem::write(void* output)
{
    TypedDescriptor* typed = static_cast<TypedDescriptor*>(
        _RTDynamicCast(descriptor, 0, propertyDescriptorType,
                       typedPropertyDescriptorType, 0));

    if (!typed) {
        BadCast exception;
        badCastConstructor(&exception, badCastText);
        throwException(&exception, badCastThrowInfo);
    }

    typed->serializer->write(output, value);
    return output;
}

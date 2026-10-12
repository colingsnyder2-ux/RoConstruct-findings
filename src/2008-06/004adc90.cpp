// from server: 97% by king_originala
struct PropertyWriter {
    virtual void slot0();
    virtual void slot1();
    virtual int write(void*);
};

struct TypedPropertyDescriptor {
    char padding[24];
    PropertyWriter* writer;
};

struct BadCast {
    char data[12];
};

extern unsigned char sourceType[];
extern unsigned char targetType[];
extern unsigned char badCastType[];

extern "C" void* __cdecl castObject(
    void*, long, const void*, const void*, int);

extern void (__thiscall *constructBadCast)(BadCast*, const char*);

extern "C" __declspec(noreturn) void __stdcall throwBadCast(
    void*, const void*);

struct ChangePropertyItem {
    void* descriptor;
    void* value;
    int apply();
};

int ChangePropertyItem::apply()
{
    TypedPropertyDescriptor* typed =
        static_cast<TypedPropertyDescriptor*>(
            castObject(descriptor, 0, sourceType, targetType, 0));

    if (!typed) {
        BadCast error;
        constructBadCast(&error, "bad cast");
        throwBadCast(&error, badCastType);
    }

    PropertyWriter* writer = typed->writer;
    void* argument = value;
    return writer->write(argument);
}

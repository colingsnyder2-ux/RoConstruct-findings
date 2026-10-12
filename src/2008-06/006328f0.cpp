// from server: 84% by king_originala
struct Vector3 {
    float x, y, z;
};

struct CastError {
    char data[12];
};

typedef void (__thiscall *CastErrorConstructor)(CastError *, const char *);
extern CastErrorConstructor constructCastError;

extern char describedBaseType;
extern char bodyPositionType;
extern char castErrorThrowInfo;

extern "C" void * __cdecl runtimeCast(
    void *, long, void *, void *, int);
extern "C" __declspec(noreturn) void __stdcall throwException(
    void *, void *);
extern void * __cdecl colorType();

struct Holder {
    void assign(const Vector3 *);
};

struct Result {
    unsigned long reserved;
    void *type;
    Holder value;
};

typedef Vector3 * (__thiscall *Getter)(void *, Vector3 *);

struct S {
    char reserved[0x38];
    Getter getter;
    int adjustment;

    void invoke(void *, Result *);
};

void S::invoke(void *object, Result *result)
{
    CastError error;
    Vector3 temporary;

    void *body = runtimeCast(
        object, 0, &describedBaseType, &bodyPositionType, 0);

    if (!body) {
        constructCastError(&error, "bad cast");
        throwException(&error, &castErrorThrowInfo);
    }

    Vector3 *value = getter(
        static_cast<char *>(body) + adjustment, &temporary);

    result->type = colorType();
    result->value.assign(value);
}

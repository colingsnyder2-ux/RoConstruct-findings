// from server: 84% by king_originala
struct Color {
    float r, g, b;
};

struct Holder {
    void assign(const Color*);
};

struct Result {
    unsigned int reserved;
    void* type;
    Holder value;
};

struct BadCast {
    unsigned int data[3];
};

typedef void (__thiscall *BadCastConstructor)(BadCast*, const char*);
typedef Color* (__thiscall *Getter)(void*, Color*);

extern BadCastConstructor constructBadCast;
extern const char badCastText[];
extern unsigned char sourceType[];
extern unsigned char destinationType[];
extern unsigned char exceptionType[];

extern "C" void* __cdecl dynamicCast(void*, int, void*, void*, int);
extern "C" __declspec(noreturn) void __stdcall throwException(void*, void*);
void* __cdecl colorType();

struct S {
    unsigned char reserved[0x38];
    Getter getter;
    int adjustment;

    void invoke(void*, Result*);
};

void S::invoke(void* object, Result* result)
{
    void* body = dynamicCast(object, 0, sourceType, destinationType, 0);
    if (!body) {
        BadCast exception;
        constructBadCast(&exception, badCastText);
        throwException(&exception, exceptionType);
    }

    Color temporary;
    Color* value = getter(static_cast<char*>(body) + adjustment, &temporary);
    result->type = colorType();
    result->value.assign(value);
}

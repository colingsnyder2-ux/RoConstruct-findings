// from server: 97% by king_originala
struct Callable {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual int invoke(void *, void *);
};

struct Descriptor {
    unsigned char padding[24];
    Callable *callable;
};

extern unsigned char sourceType;
extern unsigned char targetType;
extern unsigned char badCastThrowInfo;

extern "C" Descriptor *__cdecl dynamicCastHelper(
    void *, long, void *, void *, int);

extern "C" Descriptor *__stdcall throwHelper(void *, void *);

typedef void (__thiscall *BadCastConstructor)(void *, const char *);
extern BadCastConstructor badCastConstructor;

struct LuaArguments {
    void *descriptor;
    void *context;
    int invoke(void *);
};

int LuaArguments::invoke(void *argument)
{
    Descriptor *result = dynamicCastHelper(
        descriptor, 0, &sourceType, &targetType, 0);

    if (!result) {
        unsigned char exception[12];
        badCastConstructor(exception, "bad cast");
        result = throwHelper(exception, &badCastThrowInfo);
    }

    return result->callable->invoke(context, argument);
}

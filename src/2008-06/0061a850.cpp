// from server: 95% by king_originala
extern "C" void* __cdecl __RTDynamicCast(
    void*, long, void*, void*, int);

extern "C" __declspec(noreturn) void __stdcall throwException(
    void*, void*);

extern unsigned char sourceType[];
extern unsigned char destinationType[];
extern unsigned char badCastThrowInfo[];

typedef void (__thiscall *BadCastConstructor)(void*, const char*);
extern BadCastConstructor badCastConstructor;

struct Descriptor {
    void* get(void* result, int argument);
};

struct S {
    void* descriptor;
    int argument;

    void* f(void* result);
};

void* S::f(void* result)
{
    volatile int temporary = 0;
    Descriptor* p = static_cast<Descriptor*>(
        __RTDynamicCast(descriptor, 0, sourceType, destinationType, 0));

    if (!p) {
        unsigned long exception[3];
        badCastConstructor(exception, "bad cast");
        throwException(exception, badCastThrowInfo);
    }

    p->get(result, argument);
    return result;
}

// from server: 97% by king_originala
struct TypeInfo;
extern TypeInfo sourceType;
extern TypeInfo destinationType;
extern TypeInfo badCastThrowInfo;

extern "C" void* __cdecl runtimeDynamicCast(
    void*, long, TypeInfo*, TypeInfo*, int);
extern "C" __declspec(noreturn) void __stdcall runtimeThrowException(
    void*, TypeInfo*);

struct BadCast {
    unsigned char storage[12];
};

extern void (__thiscall* badCastConstructor)(BadCast*, const char*);

struct Accessor {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void get(void*, void*) = 0;
};

struct Descriptor {
    unsigned char storage[24];
    Accessor* accessor;
};

struct S {
    void* descriptor;
    void* instance;
    void* f(void* result);
};

void* S::f(void* result)
{
    Descriptor* p = static_cast<Descriptor*>(
        runtimeDynamicCast(descriptor, 0, &sourceType, &destinationType, 0));

    if (!p) {
        BadCast exception;
        badCastConstructor(&exception, "bad cast");
        runtimeThrowException(&exception, &badCastThrowInfo);
    }

    p->accessor->get(result, instance);
    return result;
}

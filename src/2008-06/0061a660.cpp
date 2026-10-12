// from server: 97% by king_originala
struct BadCast {
    unsigned char storage[12];
};

struct Descriptor;

typedef void (__thiscall *BadCastConstructor)(BadCast*, const char*);
extern BadCastConstructor constructBadCast;
extern unsigned char badCastThrowInfo;
extern unsigned char sourceType;
extern unsigned char targetType;

extern "C" void* __cdecl __RTDynamicCast(
    void*, long, void*, void*, int);
extern "C" Descriptor* __stdcall throwException(void*, void*);

struct Object {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void get(void*, void*);
};

struct Descriptor {
    char padding[24];
    Object* object;
};

struct S {
    void* descriptor;
    void* instance;
    void f(void*);
};

void S::f(void* result)
{
    Descriptor* p = static_cast<Descriptor*>(
        __RTDynamicCast(descriptor, 0, &sourceType, &targetType, 0));
    if (!p) {
        BadCast error;
        constructBadCast(&error, "bad cast");
        p = throwException(&error, &badCastThrowInfo);
    }
    p->object->get(instance, result);
}

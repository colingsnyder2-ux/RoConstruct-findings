// from server: 97% by king_originala
struct Accessor {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(void*, void*);
};

struct Descriptor {
    unsigned char padding[24];
    Accessor* accessor;
};

struct BadCast {
    unsigned char storage[12];
};

extern unsigned char sourceType;
extern unsigned char targetType;
extern unsigned char badCastThrowInfo;

extern "C" void* __cdecl __RTDynamicCast(
    void*, long, void*, void*, int);

extern BadCast* (__thiscall *badCastConstructor)(BadCast*, const char*);

extern "C" Descriptor* __stdcall throwException(void*, void*);

struct Creator {
    void* descriptor;
    void* object;

    void set(void* value);
};

void Creator::set(void* value)
{
    Descriptor* typed = static_cast<Descriptor*>(
        __RTDynamicCast(descriptor, 0, &sourceType, &targetType, 0));

    if (!typed) {
        BadCast exception;
        badCastConstructor(&exception, "bad cast");
        typed = throwException(&exception, &badCastThrowInfo);
    }

    typed->accessor->set(object, value);
}

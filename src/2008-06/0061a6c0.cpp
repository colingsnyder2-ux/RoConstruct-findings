// from server: 97% by king_originala
struct BadCast {
    char data[12];
};

typedef void (__thiscall *BadCastConstructor)(BadCast *, const char *);
extern BadCastConstructor badCastConstructor;

extern "C" void *__cdecl __RTDynamicCast(void *, long, void *, void *, int);
extern "C" void *__stdcall throwException(void *, void *);

struct Accessor {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void get(void *, void *);
};

struct TextureProperty {
    char padding[24];
    Accessor *accessor;
};

struct LuaArguments {
    void *property;
    void *instance;
    void getTexture(void *);
};

void LuaArguments::getTexture(void *result)
{
    TextureProperty *p = static_cast<TextureProperty *>(
        __RTDynamicCast(property, 0,
            reinterpret_cast<void *>(0x9295b4),
            reinterpret_cast<void *>(0x92fe28), 0));

    if (!p) {
        BadCast error;
        badCastConstructor(&error, reinterpret_cast<const char *>(0x80ba34));
        p = static_cast<TextureProperty *>(
            throwException(&error, reinterpret_cast<void *>(0x8d362c)));
    }

    p->accessor->get(instance, result);
}

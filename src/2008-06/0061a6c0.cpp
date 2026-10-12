// from server: 88% by king_originala
struct BadCast {
    char data[12];
};

typedef void (__thiscall *BadCastConstructor)(BadCast *, const char *);
extern BadCastConstructor badCastConstructor;

extern "C" void * __cdecl __RTDynamicCast(void *, long, void *, void *, int);
extern "C" __declspec(noreturn) void __stdcall throwException(void *, void *);

extern char propertyType;
extern char texturePropertyType;
extern char badCastThrowInfo;

struct Accessor;
typedef void (__thiscall *Getter)(Accessor *, void *, void *);

struct AccessorTable {
    void *slot0;
    void *slot1;
    void *slot2;
    Getter get;
};

struct Accessor {
    AccessorTable *table;
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
        __RTDynamicCast(property, 0, &propertyType, &texturePropertyType, 0));

    if (!p) {
        BadCast error;
        badCastConstructor(&error, "bad cast");
        throwException(&error, &badCastThrowInfo);
    }

    Accessor *a = p->accessor;
    a->table->get(a, instance, result);
}

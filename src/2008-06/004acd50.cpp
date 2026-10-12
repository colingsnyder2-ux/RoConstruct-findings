// from server: 88% by king_originala
extern "C" void * __cdecl sub_6A17C6(void *, int, const void *, const void *, int);
extern "C" __declspec(noreturn) void __cdecl sub_6A158C(void *, const void *);

extern const char sourceType[];
extern const char destinationType[];
extern const char badCastMessage[];
extern const char badCastThrowInfo[];

extern void (__thiscall *badCastConstructor)(void *, const char *);

struct Setter {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual int set(int, int);
};

struct Descriptor {
    char padding[24];
    Setter *setter;
};

struct ChangePropertyItem {
    void *property;
    int instance;
    int f(int);
};

int ChangePropertyItem::f(int a)
{
    Descriptor *v = (Descriptor *)sub_6A17C6(
        property, 0, sourceType, destinationType, 0);
    if (!v) {
        char exception[12];
        badCastConstructor(exception, badCastMessage);
        sub_6A158C(exception, badCastThrowInfo);
    }
    return v->setter->set(instance, a);
}

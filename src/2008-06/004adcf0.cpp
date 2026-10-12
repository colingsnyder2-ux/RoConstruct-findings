// from server: 97% by king_originala
struct Descriptor;

extern "C" void* __cdecl sub_6A17C6(void*, int, const void*, const void*, int);
extern "C" Descriptor* __stdcall sub_6A158C(void*, const void*);

typedef void (__thiscall *BadCastConstructor)(void*, const char*);
extern BadCastConstructor bad_cast_constructor;

struct Setter {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual void set(void*, void*) = 0;
};

struct Descriptor {
    char reserved[24];
    Setter* setter;
};

struct ChangePropertyItem {
    void* descriptor;
    void* field4;
    void ChangePropertyItem_ctor(void*);
};

void ChangePropertyItem::ChangePropertyItem_ctor(void* arg)
{
    Descriptor* result = static_cast<Descriptor*>(
        sub_6A17C6(descriptor, 0, (const void*)0x9295B4,
                   (const void*)0x93AD84, 0));

    if (result == 0) {
        char exception[12];
        bad_cast_constructor(exception, (const char*)0x80BA34);
        result = sub_6A158C(exception, (const void*)0x8D362C);
    }

    result->setter->set(field4, arg);
}

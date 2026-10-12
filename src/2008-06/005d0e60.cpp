// from server: 94% by king_originala
extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct Property {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(void*, const int&);
};

struct EnumMap {
    char padding0[0x28];
    unsigned int count;
    char padding1[0x98];
    unsigned int* begin;
    unsigned int* end;
};

struct Descriptor {
    char padding[0x1c];
    Property* property;
    EnumMap* enumMap;

    bool set(void*, unsigned int);
};

bool Descriptor::set(void* instance, unsigned int index)
{
    unsigned int ordinal = index;
    EnumMap* map = enumMap;
    if (ordinal < map->count) {
        if (ordinal >= static_cast<unsigned int>(map->end - map->begin))
            _invalid_parameter_noinfo();

        *(volatile unsigned int*)&index = map->begin[ordinal];
        property->set(instance, index);
        return true;
    }
    return false;
}

// from server: 97% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Oy /GS- /EHsc /MD
// 97% reconstruction: the const-int& materialization (unsigned -> int conversion temp) lives in the
// dead index param slot at [esp+0x14]; the begin pointer is a 1-instruction scratch; two named temps
// (Property* obj, int element) reproduce the value-eax / method-edx roles and the early temp spill.
// Only remaining hunk: target loads begin into ecx (ours edx).

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

        Property* obj = property;
        int element = map->begin[ordinal];
        obj->set(instance, element);
        return true;
    }
    return false;
}

// from server: 96% by king_originala
extern "C" void (__cdecl* _invalid_parameter_noinfo)();
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);

extern char instanceType[];
extern char guiItemType[];

struct Entry {
    void* object;
    void* owner;
};

struct Entries {
    char padding[0x0c];
    Entry* begin;
    Entry* end;
};

struct PercentPanel {
    char padding[0x108];
    Entries* entries;

    void* getItem(unsigned int index);
};

void* PercentPanel::getItem(unsigned int index)
{
    Entries* list = entries;
    if (index >= static_cast<unsigned int>(list->end - list->begin))
        _invalid_parameter_noinfo();

    return __RTDynamicCast(list->begin[index].object, 0,
                           instanceType, guiItemType, 0);
}

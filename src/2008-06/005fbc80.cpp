// from server: 93% by king_originala
extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Item {
    char padding[0x148];
    void* key;
    void update(int);
};

struct Entry {
    Item* item;
    void* owner;
};

struct Items {
    char padding[0x0C];
    Entry* first;
    Entry* last;
};

struct Reference {
    void* object;
    void* owner;
    void clear();
};

struct S {
    char padding0[0x108];
    Items* items;
    char padding1[0x94];
    Reference selected;
    unsigned index;

    unsigned count();
    void f(void* key);
};

void S::f(void* key)
{
    for (unsigned i = 0; i < count(); ++i) {
        Items* list = items;
        if (i >= static_cast<unsigned>(list->last - list->first))
            invalid_parameter_noinfo();

        Item* item = list->first[i].item;
        if (item->key == key) {
            index = i;
            item->update(0);
            if (selected.object == key)
                selected.clear();
            return;
        }
    }
}

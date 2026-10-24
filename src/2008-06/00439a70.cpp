// from server: 92% by king_originala
// from server: 83% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
//

//

struct String {
    char* data;
    const char* c_str() const;
    int compare(const char*) const;
    __declspec(dllimport) ~String() throw();
};

extern const char* (__thiscall* string_data)(const String*);
extern int (__thiscall* string_compare)(const String*, const char*);
extern void (__thiscall* string_destroy)(String*);

inline const char* String::c_str() const
{
    return string_data(this);
}

inline int String::compare(const char* value) const
{
    return string_compare(this, value);
}

struct Descriptor {
    char pad[8];
    void* key;
};

struct Item {
    char pad[0x114];
    char handle[0x20];
    Descriptor* descriptor;
    String copy();
};

struct Items {
    char pad[0x28];
    int count;
    Item* at(int);
};

struct Group {
    char pad[0xc0];
    Items* items;
    void insert(int, Item*);
};

struct Listener {
    char pad[0x18];
    void notify(void* const&);
};

struct Map {
    void*& find(void* const&);
};

struct Selection {
    char pad[0x19c];
    Listener listener;
    Map map;
    Group* group(void*);
    void f(Item*);
};

void Selection::f(Item* item)
{
    Group* selected = group(item->descriptor->key);
    int index = 0;
    for (; index < selected->items->count; ++index) {
        Item* other = selected->items->at(index);
        if (item->copy().compare(other->copy().c_str()) < 0)
            break;
    }

    selected->insert(index, item);

    map.find(item->descriptor) = item->handle;
    listener.notify(item->handle);
}

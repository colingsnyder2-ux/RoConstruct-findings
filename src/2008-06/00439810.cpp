// from server: 81% by colin
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
    char pad[0x10c];
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
    void notify(void**);
};

struct Map {
    void** find(void**);
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
        if (item->copy().compare(selected->items->at(index)->copy().c_str()) < 0)
            break;
    }

    selected->insert(index, item);

    void* key = item->descriptor;
    void** value = map.find(&key);
    void* handle = item->handle;
    *value = handle;
    key = handle;
    listener.notify(&key);
}

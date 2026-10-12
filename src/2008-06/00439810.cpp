// from server: 79% by king_originala
struct String;
extern const char* (__thiscall* string_text)(const String*);
extern int (__thiscall* string_compare)(const String*, const char*);
extern void (__thiscall* string_destroy)(String*);

struct String {
    char* data;
    ~String() throw() { string_destroy(this); }
    bool less(const String& other) const {
        return string_compare(this, string_text(&other)) < 0;
    }
};

struct Descriptor {
    char pad[8];
    void* key;
};

struct Item {
    char pad[0x120];
    char node[0x20];
    Descriptor* descriptor;
    String name();
};

struct Array {
    char pad[0x28];
    int count;
    Item* at(int index);
};

struct Group {
    char pad[0xc0];
    Array* items;
    void insert(int index, Item* item);
};

struct Listener {
    char data[0x18];
    void attach(void** value);
};

struct Map {
    void** lookup(void** key);
};

struct S {
    char pad[0x19c];
    Listener listener;
    Map map;
    Group* find(void* key);
    void f(Item* item);
};

void S::f(Item* item)
{
    Group* group = find(item->descriptor->key);
    int index = 0;
    for (; index < group->items->count; ++index) {
        Item* current = group->items->at(index);
        if (item->name().less(current->name()))
            break;
    }

    group->insert(index, item);

    void* key = item->descriptor;
    void* node = item->node;
    *map.lookup(&key) = node;
    key = node;
    listener.attach(&key);
}

// from server: 79% by king_originala
struct String;
extern const char* (__thiscall* string_data)(const String*);
extern int (__thiscall* string_compare)(const String*, const char*);
extern void (__thiscall* string_destroy)(String*);

struct String {
    void* data;
    ~String() { string_destroy(this); }
    const char* c_str() const { return string_data(this); }
    int compare(const char* s) const { return string_compare(this, s); }
};

struct Descriptor {
    char pad[8];
    int key;
};

struct Item {
    char pad0[0x114];
    char signal[0x20];
    Descriptor* descriptor;
    String name();
};

struct Array {
    char pad[0x28];
    int count;
    Item* at(int index);
};

struct List {
    char pad[0xc0];
    Array* items;
    void insert(int index, Item* item);
};

struct Listener {
    void connect(void** signal);
};

struct Map {
    void** lookup(Descriptor** key);
};

struct S_func_00439a70 {
    char pad0[0x19c];
    Listener listener;
    char pad1[0x17];
    Map map;
    List* find(int key);
    void f(Item* item);
};

void S_func_00439a70::f(Item* item)
{
    List* list = find(item->descriptor->key);
    int index = 0;
    for (; index < list->items->count; ++index) {
        if (item->name().compare(list->items->at(index)->name().c_str()) < 0)
            break;
    }
    list->insert(index, item);

    Descriptor* key = item->descriptor;
    void** slot = map.lookup(&key);
    void* signal = item->signal;
    *slot = signal;
    listener.connect(&signal);
}

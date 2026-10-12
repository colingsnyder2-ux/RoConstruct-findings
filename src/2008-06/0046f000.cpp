// from server: 97% by king_originala
extern void (__thiscall *string_copy)(void *, const void *);
extern void (__thiscall *string_destroy)(void *);

struct Text {
    char storage[28];

    Text(const Text& other) { string_copy(this, &other); }
    ~Text() { string_destroy(this); }
};

struct Item {
    char reserved[36];
    Text text;
};

struct Entry {
    Item* getItem();
};

struct Lookup {
    Entry* find(const Text*);
};

extern "C" void __cdecl output(int, const char*);

struct S {
    void* table;
    Lookup* lookup;
    int mode;
    char reserved[100];
    Text key;

    void prepare(int, Item*);
    void begin(int);
    void writeItem(int, Text);
    void writeArgument(int, Text);
    bool f(int, Text);
};

bool S::f(int context, Text argument)
{
    if (mode == 1) {
        Entry* entry = lookup->find(&key);
        if (entry) {
            Item* item = entry->getItem();
            if (item) {
                prepare(context, item);
                begin(context);
                writeItem(context, item->text);
                writeArgument(context, argument);
                output(context, "m.Parent = w");
                return true;
            }
        }
    }
    return false;
}

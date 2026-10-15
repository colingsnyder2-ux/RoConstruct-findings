// from server: 84% by colin
// roc-cl: 21022
// roc-flags: /O1 /GS- /EHsc /MD
struct Entry;
struct Storage {
    Entry* lookup(const void* key);
};

struct Entry {
    Storage* get();
};

struct Parent {
    char padding[4];
    char* key;
};

struct Argument {
    char padding0[4];
    char* key;
    char padding1[4];
    Parent* parent;
};

struct S {
    char padding[0x130];
    Storage* storage;
    Entry* f(Argument* argument);
};

Entry* S::f(Argument* argument)
{
    Entry* entry = storage ? storage->lookup(argument->parent->key + 4) : 0;
    if (entry) {
        Storage* next = entry->get();
        if (next)
            return next->lookup(argument->key + 4);
    }
    return 0;
}

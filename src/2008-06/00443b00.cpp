// from server: 79% by colin
// roc-cl: 21022
// roc-flags: /O1 /GS- /EHsc /MD
struct Storage;

struct Node {
    Storage* convert();
};

struct Storage {
    Node* find(const char* key);
    Node* lookup(const char* key);
};

struct Link {
    void* reserved;
    const char* key;
};

struct Argument {
    void* reserved0;
    const char* key;
    void* reserved8;
    Link* parent;
};

struct Descriptor {
    char reserved[0x130];
    Storage* storage;
    Node* find(Argument* argument);
};

inline Node* Storage::lookup(const char* key)
{
    if (this)
        return find(key);
    return 0;
}

Node* Descriptor::find(Argument* argument)
{
    Node* node = storage->lookup(argument->parent->key + 4);
    if (node) {
        Storage* next = node->convert();
        if (next)
            return next->find(argument->key + 4);
    }
    return 0;
}

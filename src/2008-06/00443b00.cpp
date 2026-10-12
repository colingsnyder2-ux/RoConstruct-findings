// from server: 71% by king_originala
struct Storage;

struct Node {
    Storage* convert();
};

struct Storage {
    Node* find(const char* key);
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

Node* Descriptor::find(Argument* argument)
{
    Node* node = storage ? storage->find(argument->parent->key + 4) : 0;
    if (node) {
        Storage* next = node->convert();
        if (next)
            return next->find(argument->key + 4);
    }
    return 0;
}

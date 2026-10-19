// from server: 95% by king_originala
struct Container;

struct Node {
    char padding[16];
    void* value;
};

struct Iterator {
    Container** owner;
    Node* node;
};

struct Container {
    Container** volatile owner;
    char padding[20];
    Node* sentinel;

    Iterator* find(Iterator* result, const int& key);
};

extern Container* __cdecl getContainer();
extern void (__cdecl *invalidParameter)();

void* __cdecl lookup(int key)
{
    int searchKey = key;
    Iterator storage;
    Iterator* it = getContainer()->find(&storage, searchKey);
    Container** owner = it->owner;
    Node* node = it->node;

    Container* container = getContainer();
    Node* sentinel = container->sentinel;
    Container** expectedOwner = container->owner;
    void (__cdecl *reportError)() = invalidParameter;

    if (!owner || owner != expectedOwner)
        reportError();

    if (node != sentinel) {
        Container* actual = reinterpret_cast<Container*>(owner);
        if (!owner)
            reportError();
        else
            actual = *owner;

        if (node == actual->sentinel)
            reportError();

        return node->value;
    }

    return 0;
}

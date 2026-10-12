// from server: 93% by king_originala
struct Geometry {
    char data[0x3c];
    int count;
    int getFaceIndex(int index);
};

struct Node {
    int (__thiscall **vtable)(Node *);
    char data[8];
    Geometry *first;
    Geometry *second;
};

struct Iterator {
    void *owner;
    void *position;
};

struct Filter {
    void *owner;
    char data[0x14];
    void *endPosition;
    Iterator *find(Iterator *result, Geometry *const *key);
};

struct Collection {
    void remove(Node *node);
};

extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct S {
    char data[0x20];
    Collection collection;
    char padding[0x84];
    unsigned char changing;
    void f(Geometry *geometry, Filter *filter);
};

void S::f(Geometry *geometry, Filter *filter)
{
    for (int index = geometry->count - 1; index >= 0; --index) {
        Node *node = reinterpret_cast<Node *>(geometry->getFaceIndex(index));
        int type = node->vtable[5](node);
        if (type == 9 || type == 5)
            continue;

        Geometry *other = geometry == node->first ? node->second : node->first;

        if (filter) {
            Iterator end;
            end.owner = filter->owner;
            end.position = filter->endPosition;

            Iterator storage;
            Iterator *found = filter->find(&storage, &other);
            if (!found->owner || found->owner != end.owner)
                _invalid_parameter_noinfo();
            if (found->position != end.position)
                continue;
        }

        changing = 1;
        collection.remove(node);
        changing = 0;
    }
}

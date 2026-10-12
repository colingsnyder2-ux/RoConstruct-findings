// from server: 91% by king_originala
struct Key {
    int x, y, z;
};

struct Parent {
    char padding[16];
    unsigned short level;
    unsigned char marked;
    unsigned char reserved;
    int references;
    unsigned int index;
    Key key;
    Parent* next;
};

struct Node;
struct Owner {
    char padding[100];
    Node* tail;
};

struct Node {
    Owner* owner;
    Node* next;
    Node* previous;
    Node* following;
    unsigned int index;
    Key key;
    unsigned short level;
    unsigned short reserved;
    Parent* parent;
};

struct Entry {
    Node* node;
    unsigned int reserved;
};

struct Table {
    char padding[12];
    Entry* begin;
    Entry* end;
    Entry* capacity;
};

extern int levelLimit;
extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct S {
    char padding[12];
    Table tables[4];
    Node* freeZero;
    Node* freeOther;
    unsigned int reserved;
    int count;

    void removeNode(Node*);
    void removeParent(Parent*);
    Parent* find(int, const Key&);
    void erase(Node*);
};

void S::erase(Node* node)
{
    Node* previous = node->previous;
    Node* following = node->following;
    if (previous)
        previous->following = following;
    if (following)
        following->previous = previous;
    else
        node->owner->tail = previous;

    removeNode(node);

    unsigned int hash = node->index;
    Key key = node->key;
    int initialLevel = node->level;
    int matches = 0;
    bool found = false;

    for (int level = initialLevel; level < levelLimit && !found; ++level) {
        if (level > initialLevel) {
            key.z >>= 1;
            key.x >>= 1;
            key.y >>= 1;
            hash = ((key.z * 0x04f9ffb7) ^
                    (key.x * 0x0466f45d) ^
                    (key.y * 0x0127409f)) & (0xffff >> level);
        }

        Table& table = tables[level];
        if (hash >= static_cast<unsigned int>(table.end - table.begin))
            invalid_parameter_noinfo();

        Node* current = table.begin[hash].node;
        while (current) {
            if (current->key.x == key.x &&
                current->key.y == key.y &&
                current->key.z == key.z) {
                if (level != 0) {
                    found = true;
                    break;
                }
                ++matches;
            }
            current = current->next;
        }
    }

    if (node->level > 0) {
        Parent* parent = node->parent;
        if (--parent->references == 0 && !parent->marked) {
            removeParent(parent);
            find(parent->level, parent->key);
        }
    } else if (matches == 0) {
        find(0, node->key);
    }

    if (node->level == 0) {
        node->next = freeZero;
        --count;
        freeZero = node;
    } else {
        node->next = freeOther;
        --count;
        freeOther = node;
    }
}

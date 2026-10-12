// from server: 40% by king_originala
extern "C" void (__cdecl *invalid_parameter_noinfo)();
extern "C" int __cdecl abs(int);
#pragma intrinsic(abs)

struct Color {
    unsigned char r, g, b;
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    int key;
    Color color;
    unsigned char flags[3];
};

struct Tree {
    unsigned char padding[24];
    Node *head;
};

struct Proxy {
    Tree *tree;
};

struct Iterator {
    Proxy *proxy;
    Node *node;

    void increment();
    Node *checked() const;
};

inline Node *Iterator::checked() const {
    if (!proxy)
        invalid_parameter_noinfo();
    Tree *tree = proxy ? proxy->tree : 0;
    if (node == tree->head)
        invalid_parameter_noinfo();
    return node;
}

struct Collection {
    unsigned char padding[48];
    Proxy *proxy;
    unsigned char gap[20];
    Node *head;
};

Collection *__cdecl getCollection();

int *__cdecl nearestColor(int *result, Color color) {
    int best = 194;
    int distance = 10000;

    Collection *collection = getCollection();
    Iterator current;
    current.proxy = collection->proxy;
    current.node = collection->head->left;

    collection = getCollection();
    Iterator last;
    last.proxy = collection->proxy;
    last.node = collection->head;

    for (;;) {
        if (!current.proxy || current.proxy != last.proxy)
            invalid_parameter_noinfo();

        if (current.node == last.node)
            break;

        int difference = abs(int(current.checked()->color.r) - int(color.r));
        difference += abs(int(current.checked()->color.g) - int(color.g));
        difference += abs(int(current.checked()->color.b) - int(color.b));

        if (difference < distance) {
            best = current.checked()->key;
            if (difference == 0) {
                *result = best;
                return result;
            }
            distance = difference;
        }

        current.increment();
    }

    *result = best;
    return result;
}

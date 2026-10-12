// from server: 92% by king_originala
struct Geometry;

struct Node {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual int predicate();
    virtual void slot4();
    virtual int kind();

    int padding[2];
    Geometry* owner;
    int reserved;
    int firstIndex;
    int secondIndex;
};

struct Geometry {
    char padding[0x38];
    Node** nodes;
    int count;

    Node* find(Node* node);
};

Node* Geometry::find(Node* node) {
    while (node) {
        if (!node->predicate()) {
            int type = node->kind();
            if (type == 6 || type == 7)
                return node;
        }

        int index;
        if (this == node->owner)
            index = node->firstIndex;
        else
            index = node->secondIndex;

        int next = index + 1;
        if (next < count)
            node = nodes[next];
        else
            node = 0;
    }
    return 0;
}

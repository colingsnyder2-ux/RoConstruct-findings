// from server: 74% by king_originala
struct Link {
    Link* next;
};

struct TreeHook {
    void* left;
    void* parent;
    void* right;
};

struct Node {
    char padding[0x280];
    TreeHook tree;
    unsigned reserved;
    Link link;

    bool keep(unsigned value);
    void destroy();
};

struct BucketRange {
    unsigned count;
    unsigned reserved[2];
    Link* buckets;
};

struct Iterator {
    Node* node;
    BucketRange* range;

    void advance();
};

struct Table {
    unsigned reserved[2];
    BucketRange range;
    unsigned reserved2[2];
    unsigned firstBucket;
    unsigned size;

    Iterator erase(Iterator position);
};

struct Container {
    unsigned reserved0;
    Node* sentinel;
    unsigned reserved1;
    Table table;
};

struct Receiver {
    unsigned reserved[2];
    Container container;

    void update(unsigned value);
};

extern void __cdecl removeTree(TreeHook*, void**, void**, void**);
extern void __cdecl operator delete(void*);

__forceinline void Iterator::advance()
{
    Link* buckets = range->buckets;
    Link* limit = buckets + range->count;
    Link* hook = node ? &node->link : 0;
    Link* next = hook->next;
    if (buckets <= next && next <= limit) {
        do {
            ++next;
        } while (next->next == next);
        next = next->next;
    }
    node = next
        ? reinterpret_cast<Node*>(reinterpret_cast<char*>(next) - 0x290)
        : 0;
}

__forceinline Iterator Table::erase(Iterator position)
{
    Iterator next = position;
    next.advance();

    Link* hook = position.node ? &position.node->link : 0;
    Link* following = hook->next;
    Link* previous = following;
    while (previous->next != hook)
        previous = previous->next;
    previous->next = following;

    unsigned index = firstBucket;
    if (range.buckets[index].next == range.buckets + index) {
        Link* bucket = range.buckets + index;
        do {
            ++bucket;
            ++index;
        } while (bucket->next == bucket);
    }
    firstBucket = index;

    Node* sentinel =
        *reinterpret_cast<Node**>(reinterpret_cast<char*>(this) - 8);
    TreeHook* left = &sentinel->tree;
    void** parent = &sentinel->tree.parent;
    void** right = &sentinel->tree.right;
    TreeHook* tree = position.node ? &position.node->tree : 0;
    removeTree(tree, &left->left, parent, right);
    position.node->destroy();
    operator delete(position.node);
    --size;
    return next;
}

void Receiver::update(unsigned value)
{
    Container* c = &container;
    Table* t = c ? &c->table : 0;
    Link* first = t->range.buckets[t->firstBucket].next;
    Iterator current;
    current.node = first
        ? reinterpret_cast<Node*>(reinterpret_cast<char*>(first) - 0x290)
        : 0;
    current.range = &t->range;
    Node* end =
        *reinterpret_cast<Node**>(reinterpret_cast<char*>(t) - 8);

    while (current.node != end) {
        if (!current.node->keep(value))
            current = t->erase(current);
        else
            current.advance();
    }
}

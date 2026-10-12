// from server: 75% by king_originala
struct Node;

struct Item {
    char reserved[0x44];
    void* key;
};

struct Links {
    Node* parent;
    Node* left;
    Node* right;
};

struct Node {
    char reserved[0x50];
    Links links;
    void attach(Item*);
};

struct Owner {
    char reserved[4];
    Node* node;
};

struct SearchResult {
    void* position;
    int side;
};

struct Flag {
    bool value;
};

struct S {
    bool quick(Item*, Node*, Flag);
    bool search(void*, SearchResult*, Flag);
    bool f(Item*, Node*);
};

extern void __cdecl detach(Links**);
extern void __cdecl prepare(Links*, Links*, Node**, Node**);
extern void __cdecl insert(Links*, void*, int, Links*);

bool S::f(Item* item, Node* target)
{
    Flag initial;
    initial.value = false;
    if (quick(item, target, initial)) {
        target->attach(item);
        return true;
    }

    Links* previous = target ? &target->links : 0;
    detach(&previous);
    previous = previous
        ? reinterpret_cast<Links*>(reinterpret_cast<char*>(previous) - 0x50)
        : 0;

    Node* rightOwner =
        (this ? reinterpret_cast<Owner*>(reinterpret_cast<char*>(this) - 12) : 0)->node;
    Node* leftOwner =
        (this ? reinterpret_cast<Owner*>(reinterpret_cast<char*>(this) - 12) : 0)->node;
    Links* parentLinks =
        &(this ? reinterpret_cast<Owner*>(reinterpret_cast<char*>(this) - 12) : 0)->node->links;

    prepare(target ? &target->links : 0,
            parentLinks,
            &leftOwner->links.left,
            &rightOwner->links.right);

    SearchResult result;
    Flag recursive;
    recursive.value = false;
    try {
        if (search(item->key, &result, recursive)) {
            target->attach(item);
            Node* owner =
                (this ? reinterpret_cast<Owner*>(reinterpret_cast<char*>(this) - 12) : 0)->node;
            insert(target ? &target->links : 0,
                   result.position,
                   result.side,
                   owner ? &owner->links : 0);
            return true;
        }
    } catch (...) {
        Node* right =
            (this ? reinterpret_cast<Owner*>(reinterpret_cast<char*>(this) - 12) : 0)->node;
        Node* left =
            (this ? reinterpret_cast<Owner*>(reinterpret_cast<char*>(this) - 12) : 0)->node;
        Node* parent =
            (this ? reinterpret_cast<Owner*>(reinterpret_cast<char*>(this) - 12) : 0)->node;
        prepare(previous ? &reinterpret_cast<Node*>(previous)->links : 0,
                &parent->links, &left->links.left, &right->links.right);
        throw;
    }

    Node* right =
        (this ? reinterpret_cast<Owner*>(reinterpret_cast<char*>(this) - 12) : 0)->node;
    Node* left =
        (this ? reinterpret_cast<Owner*>(reinterpret_cast<char*>(this) - 12) : 0)->node;
    Node* parent =
        (this ? reinterpret_cast<Owner*>(reinterpret_cast<char*>(this) - 12) : 0)->node;
    prepare(previous ? &reinterpret_cast<Node*>(previous)->links : 0,
            &parent->links, &left->links.left, &right->links.right);
    return false;
}

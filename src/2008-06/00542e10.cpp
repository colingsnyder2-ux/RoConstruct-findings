// from server: 95% by king_originala
#pragma optimize("", off)

struct Node;
struct Key;
struct Tree;

struct Iterator {
    Node* node;
    Tree* owner;

    Iterator(Node*, Tree*);
    bool equal(const Iterator&) const;
    void previous();
    Node* value() const;
};

struct Result {
    Iterator position;
    bool inserted;

    Result(const Iterator&, const bool&);
};

struct Compare {
    bool less(const Key*, const Key*) const;
};

extern signed char* __cdecl marker(Node*);
extern Key* __cdecl nodeKey(Node*);
extern Node** __cdecl leftLink(Node*);
extern Node** __cdecl rightLink(Node*);

struct Tree {
    char prefix[8];
    Compare compare;
    char padding[15];
    Node* root;

    Node** head();
    Iterator begin();
    Iterator insert(bool, Node*, Node*);
    Result f(Node*);
};

Result Tree::f(Node* input)
{
    bool before;
    Node* parent;
    Node* current = *head();
    parent = root;
    before = true;

    while (!*marker(current)) {
        parent = current;
        before = compare.less(reinterpret_cast<const Key*>(leftLink(input)),
                              nodeKey(current));
        current = before ? *leftLink(current) : *rightLink(current);
    }

    if (false) {
        return Result(insert(before, parent, input), true);
    } else {
        Iterator position(parent, this);
        if (!before) {
        } else {
            if (position.equal(begin())) {
                return Result(insert(true, parent, input), true);
            } else {
                position.previous();
            }
        }

        if (compare.less(nodeKey(position.value()),
                         reinterpret_cast<const Key*>(leftLink(input)))) {
            return Result(insert(before, parent, input), true);
        } else {
            return Result(position, false);
        }
    }
}

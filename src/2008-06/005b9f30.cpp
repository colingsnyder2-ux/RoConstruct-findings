// from server: 90% by king_originala
struct Value {
    char data[40];
};

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    Value value;
    unsigned char color;
    unsigned char nil;
};

extern "C" bool __cdecl compare(const Value*, const Value*);
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Iterator {
    void* owner;
    Node* node;

    Iterator(void*, Node*);
    bool operator==(const Iterator&) const;
    void __thiscall decrement();
};

inline Iterator::Iterator(void* container, Node* current)
    : owner(container), node(current)
{
}

inline bool Iterator::operator==(const Iterator& other) const
{
    if (!owner || owner != other.owner)
        _invalid_parameter_noinfo();
    return node == other.node;
}

struct Result {
    Iterator position;
    bool inserted;
};

struct Tree {
    void* owner;
    char padding[20];
    Node* head;

    Iterator* __thiscall insert(Iterator*, bool, Node*, const Value&);
    Result* __thiscall find_or_insert(Result*, const Value&);
};

Result* Tree::find_or_insert(Result* result, const Value& value)
{
    Node* parent = head;
    Node* current = parent->parent;
    bool left = true;

    while (!current->nil) {
        parent = current;
        left = compare(&value, &current->value);
        current = left ? current->left : current->right;
    }

    void* container = owner;
    Node* candidate = parent;
    Iterator position(container, candidate);

    if (left) {
        if (position == Iterator(container, head->left)) {
            Iterator* inserted = insert(&position, true, parent, value);
            result->position = *inserted;
            result->inserted = true;
            return result;
        }

        position.decrement();
        candidate = position.node;
        container = position.owner;
    }

    if (compare(&candidate->value, &value)) {
        Iterator* inserted = insert(&position, left, parent, value);
        result->position = *inserted;
        result->inserted = true;
        return result;
    }

    result->position.owner = container;
    result->position.node = candidate;
    result->inserted = false;
    return result;
}

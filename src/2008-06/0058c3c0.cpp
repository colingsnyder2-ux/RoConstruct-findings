// from server: 92% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct S;

struct Current {
    char storage[64];
    Current(S*);
    ~Current();
};

struct Base {
    char storage[36];
    ~Base();
};

extern void (__thiscall* destroy_string)(void*);

struct String {
    char storage[28];
    ~String();
};

inline String::~String()
{
    destroy_string(this);
}

struct Entry : Base {
    String text;
};

struct Node {
    Node* next;
    Node* previous;
    Entry* value;
};

struct Iterator {
    void* owner;
    Node* node;

    Iterator(void*, Node*);
    Iterator& operator++();
    bool operator!=(const Iterator&) const;
};

inline Iterator::Iterator(void* p, Node* n)
    : owner(p), node(n)
{
}

inline Iterator& Iterator::operator++()
{
    node = node->next;
    return *this;
}

inline bool Iterator::operator!=(const Iterator& other) const
{
    return node != other.node;
}

struct S {
    char padding[0x134];
    Current* current;
    void* owner;
    char padding2[0x10];
    Node* head;
    unsigned int count;
    Iterator endPosition;
    Iterator beginPosition;

    void reset();
};

void S::reset()
{
    if (current) {
        delete current;
        current = new Current(this);
    }

    {
        Iterator last(owner, head);
        Iterator position(owner, last.node->next);

    check:
        if (position != last) {
            delete position.node->value;
            ++position;
            goto check;
        }
    }

    Node* node = head->next;
    head->next = head;
    head->previous = head;
    count = 0;

    while (node != head) {
        Node* next = node->next;
        operator delete(node);
        node = next;
    }

    endPosition = Iterator(owner, head);
    beginPosition = Iterator(owner, head->next);
}

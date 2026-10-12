// from server: 94% by king_originala
typedef unsigned int UInt;

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Link {
    Link* next;
};

struct Payload {
    UInt key;
    char padding[108];
};

struct Node : Payload, Link {
};

struct Result {
    Node* node;
    bool inserted;
    Result(Node* n, bool b);
};

inline Result::Result(Node* n, bool b)
    : node(n), inserted(b)
{
}

struct Prefix {
    char padding[36];
    Node* reserve(const UInt& key, Node* node);
};

struct S {
    char padding[12];
    Prefix table;
    UInt count;
    Result insert(const UInt& key);
};

Result S::insert(const UInt& key)
{
    Node* node = static_cast<Node*>(operator new(120));
    try {
        Node* found = table.reserve(key, node);
        if (found == node) {
            ++count;
            return Result(found, true);
        }
        operator delete(node);
        return Result(found, false);
    }
    catch (...) {
        operator delete(node);
        throw;
    }
}

// from server: 100% by king_originala
typedef unsigned int UInt;

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*) throw();

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

    Result(Node* p, bool b);
};

struct Table {
    char padding[36];
    Node* reserve(const Payload& value, Node* node);
};

struct S {
    char padding[12];
    Table table;
    UInt count;

    Result insert(const Payload& value);
};

inline Result::Result(Node* p, bool b)
    : node(p), inserted(b) {
}

Result S::insert(const Payload& value) {
    Node* allocated = static_cast<Node*>(operator new(120));
    try {
        Node* result = table.reserve(value, allocated);
        if (result == allocated) {
            ++count;
            return Result(result, true);
        }
        operator delete(allocated);
        return Result(result, false);
    } catch (...) {
        operator delete(allocated);
        throw;
    }
}

// from server: 91% by king_originala
void* __cdecl operator new(unsigned int);

struct Temporary;

struct Node {
    Temporary* owner;
    Node(Temporary* p) : owner(p) {}
};

struct Storage {
    Node* node;
    Storage(Temporary* p) : node(new Node(p)) {}
    ~Storage();
};

struct Temporary : Storage {
    unsigned int unused[2];
    unsigned int first;
    unsigned int second;
    unsigned int third;

    Temporary() : Storage(this), first(0), second(0), third(0) {}
    ~Temporary();
};

struct Receiver {
    virtual ~Receiver();
    virtual void invoke(Temporary*);
};

struct S {
    Receiver* receiver;
    void f();
};

void S::f()
{
    Receiver* p = receiver;
    Temporary temporary;
    p->invoke(&temporary);
}

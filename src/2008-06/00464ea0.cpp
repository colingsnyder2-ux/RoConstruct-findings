// from server: 72% by king_originala
void* __cdecl operator new(unsigned int);

struct Pair
{
    unsigned int first;
    unsigned int second;

    __forceinline Pair(const Pair& other);
};

__forceinline Pair::Pair(const Pair& other)
{
    second = other.second;
    first = other.first;
}

struct S;

struct Node
{
    unsigned char data[24];

    Node(S*, int, Pair) throw();
};

struct Container
{
    unsigned char data[28];

    void insert(Node* const&);
};

struct Dispatcher
{
    void method(int);
};

struct S
{
    void* field0;
    Container container;
    Dispatcher* dispatcher;

    void f(int, Pair);
};

void S::f(int arg, Pair value)
{
    Node* node = new Node(this, arg, value);
    Node* copy = node;
    container.insert(copy);
    dispatcher->method(reinterpret_cast<int>(node));
}

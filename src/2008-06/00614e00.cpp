// from server: 92% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);

struct Empty {
    Empty();
};

inline Empty::Empty() {}

struct Base {
    void* vptr;
    unsigned char data[44];

    Base(const char*, const char*);
    ~Base();
    void bind(int, const char*);
};

struct Map {
    unsigned char data[32];

    Map(const Empty&, const Empty&);
    ~Map();
};

struct Signal;

struct Node {
    Signal* owner;
    Node(Signal*);
};

struct Holder {
    Node* node;

    Holder(Signal*);
    ~Holder();
};

struct Signal {
    Holder holder;
    unsigned int reserved[2];
    unsigned int first;
    unsigned int last;
    unsigned int count;

    Signal();
    ~Signal();
};

inline Node::Node(Signal* p) : owner(p) {}

inline Holder::Holder(Signal* p) : node(new Node(p)) {}

inline Signal::Signal()
    : holder(this), first(0), last(0), count(0) {}

inline Signal::~Signal() {}

struct S : Base {
    Map map1;
    Map map2;
    Signal signal1;
    Signal signal2;
    Signal signal3;
    Signal signal4;
    Signal signal5;

    S();
    ~S();
};

S::S()
    : Base(reinterpret_cast<const char*>(0x8438d8),
           reinterpret_cast<const char*>(0x95a8a4)),
      map1((vptr = reinterpret_cast<void*>(0x832dc4), Empty()), Empty()),
      map2(Empty(), Empty())
{
    bind(0, reinterpret_cast<const char*>(0x8438d0));
    bind(1, reinterpret_cast<const char*>(0x832dcc));
    bind(2, reinterpret_cast<const char*>(0x833370));
}

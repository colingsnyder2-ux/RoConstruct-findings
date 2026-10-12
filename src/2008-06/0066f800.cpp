// from server: 91% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Stage;

struct Child {
    unsigned char storage[0x1ec];
    Child(Stage*, int);
};

struct Empty {
    Empty();
};

inline Empty::Empty()
{
}

struct Pair {
    unsigned char storage[0x20];
    Pair(const Empty&, const Empty&);
    ~Pair();
};

struct Base {
    int first;
    Child* child;
    int second;

    Base(int, Child*, int);
    virtual ~Base();
};

inline Base::Base(int a, Child* p, int b)
    : first(a), child(p), second(b)
{
}

struct Stage : Base {
    Pair pair1;
    Pair pair2;

    Stage(int, int);
    virtual ~Stage();
};

Stage::Stage(int a, int b)
    : Base(a, new Child(this, b), b),
      pair1(Empty(), Empty()),
      pair2(Empty(), Empty())
{
}

// from server: 74% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Stage;

struct Child {
    unsigned char storage[0x1ec];
    Child(Stage*, int);
};

struct Pair {
    unsigned char storage[0x20];
    Pair(int*, int*);
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
      pair1(&b, &b),
      pair2(&b, &b)
{
}

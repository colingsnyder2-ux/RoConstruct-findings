// from server: 71% by king_originala
struct Base {
    int data[7];
    int f(int);
    Base(int a) { f(a); }
    ~Base();
};

struct Pair {
    int first;
    int second;
    Pair() : first(0), second(0) {}
    ~Pair();
};

struct Coordinates {
    short unused;
    short left;
    short top;
    short right;
    short bottom;
    Coordinates() {
        top = 0;
        left = 0;
        right = 0;
        bottom = 0;
    }
};

struct Collection {
    int data[3];
    Collection(const int *, const int *);
};

struct S : Base {
    int argument;
    Pair pair;
    Coordinates coordinates;
    Collection collection;
    S(int);
};

S::S(int a)
    : Base(a),
      argument((data[0] = 0x843b6c, data[1] = 0x843b50, a)),
      pair(),
      coordinates(),
      collection(&a, &a)
{
}

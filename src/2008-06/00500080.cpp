// from server: 69% by king_originala
struct Pair {
    short x;
    short y;
    Pair(int, int);
};

inline Pair::Pair(int a, int b)
{
    x = (short)a;
    y = (short)b;
}

struct Scalar {
    float value;
    Scalar(float);
};

inline Scalar::Scalar(float v)
{
    value = v;
}

struct Integer {
    int value;
    Integer(int);
};

inline Integer::Integer(int v)
{
    value = v;
}

struct S {
    char padding[32];
    float value;
    int count;

    void build(Scalar, Integer, Pair, void*);
    void f(void*);
};

void S::f(void* arg)
{
    build(Scalar(value), Integer((count + 1) / 2), Pair(count, count), arg);
}

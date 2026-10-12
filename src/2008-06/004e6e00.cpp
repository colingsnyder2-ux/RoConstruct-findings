// from server: 86% by king_originala
struct Element {
    int data;
    Element();
    ~Element();
};

struct Value {
    Element elements[1];
    Value& operator=(const Value&);
};

struct S {
    int first;
    float x;
    float y;
    float z;
    Value value;
    int last;

    S(float, float, float, Value, int, int);
};

S::S(float a, float b, float c, Value v, int d, int e)
    : x(0.0f), y(0.0f), z(0.0f)
{
    x = a;
    y = b;
    z = c;
    value = v;
    first = d;
    last = e;
}

// from server: 86% by king_originala
struct Element {
    unsigned int value;
    Element();
    ~Element();
};

struct Array {
    Element elements[4];
    Array& operator=(const Array&);
};

struct Vector {
    float x, y, z;
};

struct S {
    unsigned int first;
    float x, y, z;
    Array elements;
    unsigned int last;

    S(Vector position, Array values, unsigned int a, unsigned int b);
};

S::S(Vector position, Array values, unsigned int a, unsigned int b)
    : x(0.0f), y(0.0f), z(0.0f)
{
    x = position.x;
    y = position.y;
    z = position.z;
    elements = values;
    first = a;
    last = b;
}

// from server: 38% by king_originala
struct S
{
    float low[3];
    float high[3];

    void f(const S* other);
};

void S::f(const S* other)
{
    float z = other->low[2] > low[2] ? low[2] : other->low[2];
    float y = other->low[1] > low[1] ? low[1] : other->low[1];
    float x = other->low[0] > low[0] ? low[0] : other->low[0];

    low[0] = x;
    low[1] = y;
    low[2] = z;

    z = high[2] > other->high[2] ? high[2] : other->high[2];
    y = high[1] > other->high[1] ? high[1] : other->high[1];
    x = high[0] > other->high[0] ? high[0] : other->high[0];

    high[0] = x;
    high[1] = y;
    high[2] = z;
}

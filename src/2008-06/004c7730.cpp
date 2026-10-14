// from server: 92% by king_originala
extern const float rounding;

struct S {
    char padding[24];
    float factor;
    unsigned int limit;

    void resize(unsigned int);
    void grow(unsigned int);
};

void S::grow(unsigned int count)
{
    if (count > limit) {
        unsigned int result = 0xffffffffu;
        double value = count / factor + rounding;
        if (4294967296.0f <= value)
            result = (unsigned int)value;
        resize(result);
    }
}

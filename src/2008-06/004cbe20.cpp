// from server: 93% by colin
extern const float increment;
extern const float limit;

struct S {
    char padding[24];
    float loadFactor;
    unsigned int threshold;

    void reserve(unsigned int count);
    void rehash(unsigned int count);
};

void S::reserve(unsigned int count)
{
    if (count > threshold) {
        unsigned int capacity = ~0u;
        double required = count / loadFactor + increment;
        if (required > limit)
            capacity = static_cast<unsigned int>(required);
        rehash(capacity);
    }
}

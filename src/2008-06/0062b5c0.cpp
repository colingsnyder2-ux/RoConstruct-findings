// from server: 80% by king_originala
extern const float upperLimit;
extern const char propertyDescriptor;

struct S {
    char padding[0x154];
    float value;

    void setValue(float v);
    void notify(const void* property);
};

void S::setValue(float v)
{
    const double clamped = v <= 0.0f ? 0.0f :
                           v >= upperLimit ? upperLimit : v;

    if (clamped != value) {
        value = (float)clamped;
        notify(&propertyDescriptor);
    }
}

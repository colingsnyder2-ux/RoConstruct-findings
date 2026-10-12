// from server: 90% by king_originala
struct Value {
    bool toFloat(float* result);
};

struct Variant {
    char padding[16];
    Value value;
    bool isEmpty();
};

struct Setter {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(void* object, const float& value);
};

struct Descriptor {
    char padding[24];
    Setter* setter;
    void apply(void* object, Variant* value, int unused);
};

void Descriptor::apply(void* object, Variant* value, int unused)
{
    Variant* original = value;
    if (!original->isEmpty()) {
        float* result = reinterpret_cast<float*>(&value);
        if (original->value.toFloat(result))
            setter->set(object, *result);
    }
}

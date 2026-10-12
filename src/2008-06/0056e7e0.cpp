// from server: 90% by king_originala
struct ValueData {
    bool convert(float& result);
};

struct Value {
    char padding[16];
    ValueData data;
    bool isEmpty();
};

struct Accessor {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(void* instance, const float& value);
};

struct Descriptor {
    char padding[24];
    Accessor* accessor;
    void set(void* instance, Value* value, int unused);
};

void Descriptor::set(void* instance, Value* value, int unused)
{
    Value* original = value;
    if (!original->isEmpty() &&
        original->data.convert(reinterpret_cast<float&>(value)))
        accessor->set(instance, reinterpret_cast<float&>(value));
}

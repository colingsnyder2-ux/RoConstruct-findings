// from server: 88% by king_originala
struct Data {
    char padding[0x94];
    float value;
};

struct S {
    char padding[0x150];
    Data* data;
    void setValue(float value);
    void notify(const void* descriptor);
};

void S::setValue(float value)
{
    if (data->value != value) {
        data->value = value;
        notify(reinterpret_cast<const void*>(0x97be9c));
    }
}

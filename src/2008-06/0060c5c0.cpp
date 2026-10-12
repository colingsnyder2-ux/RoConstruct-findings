// from server: 90% by king_originala
extern char property;

struct Value {
    char padding[0x94];
    float value;
};

struct S {
    char padding[0x150];
    Value* data;
    void notify(const void*);
    void setValue(float);
};

void S::setValue(float value)
{
    if (data->value != value) {
        data->value = value;
        notify(&property);
    }
}

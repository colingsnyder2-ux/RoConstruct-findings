// from server: 89% by king_originala
struct Descriptor;
extern Descriptor descriptor;

struct S {
    char padding[0x224];
    float value;

    void notify(Descriptor*);
    void set(float);
};

void S::set(float newValue)
{
    if (value != newValue) {
        value = newValue;
        notify(&descriptor);
    }
}

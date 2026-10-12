// from server: 89% by king_originala
struct Descriptor;
extern Descriptor descriptor;

struct S {
    char padding[0x328];
    float value;

    void set(float newValue);
    void notify(const Descriptor*);
};

void S::set(float newValue)
{
    if (value != newValue) {
        value = newValue;
        notify(&descriptor);
    }
}

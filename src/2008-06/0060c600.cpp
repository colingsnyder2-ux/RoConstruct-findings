// from server: 90% by king_originala
struct State {
    char padding[0x8c];
    float value;
    void setValue(float value);
};

struct S {
    char padding[0x150];
    State* state;
    void notify(const void* descriptor);
    void setValue(float value);
};

void S::setValue(float value)
{
    if (state->value != value) {
        state->setValue(value);
        notify(reinterpret_cast<const void*>(0x97be80));
    }
}

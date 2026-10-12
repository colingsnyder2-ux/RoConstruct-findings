// from server: 90% by king_originala
extern const char descriptor;

struct State {
    char padding[0x90];
    float value;
};

struct S {
    char padding[0x150];
    State* state;

    void setValue(float value);
    void notify(const void* descriptor);
};

void S::setValue(float value)
{
    if (static_cast<double>(state->value) != static_cast<double>(value)) {
        state->value = value;
        notify(&descriptor);
    }
}

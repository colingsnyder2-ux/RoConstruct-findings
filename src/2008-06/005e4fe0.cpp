// from server: 90% by king_originala
extern char property_0097ab74;

struct State
{
    char padding[0x90];
    float value;
};

struct S
{
    char padding[0x150];
    State* state;

    void setValue(float value);
    void notify(const void* property);
};

void S::setValue(float value)
{
    if (state->value != value)
    {
        state->value = value;
        notify(&property_0097ab74);
    }
}

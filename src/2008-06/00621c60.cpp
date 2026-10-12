// from server: 89% by king_originala
struct Value {
    union {
        double number;
        void* pointer;
        int boolean;
    } value;
    int tag;
};

struct State {
    unsigned char reserved[8];
    Value* top;
};

struct Proto {
    unsigned char reserved[0x49];
    unsigned char numparams;

    Value* adjust(State* state, int actual);
};

Value* Proto::adjust(State* state, int actual)
{
    int required = numparams;
    for (; actual < required; ++actual) {
        state->top->tag = 0;
        ++state->top;
    }

    Value* fixed = state->top - actual;
    Value* base = state->top;

    for (int i = 0; i < required; ++i) {
        Value* destination = state->top++;
        destination->value = fixed[i].value;
        destination->tag = fixed[i].tag;
        fixed[i].tag = 0;
    }

    return base;
}

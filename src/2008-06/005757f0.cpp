// from server: 93% by atomic.potato
struct State {
    char padding[0x1c0];
    float divisor;
    char gap[4];
    double first;
    double second;
    double third;
};

struct S {
    char padding[0x20c];
    State* state;
    double f();
};

double S::f() {
    return (state->third + state->second + state->first) /
           state->divisor;
}
